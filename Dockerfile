# Use an official Python runtime as a parent image
FROM python:3.9-slim

WORKDIR /app

COPY . /app

RUN apt-get update && \
    apt-get install -y \
    g++ wget flex build-essential cmake \
    libgl1-mesa-glx libglib2.0-0 \
    libxkbcommon-x11-0 libx11-xcb1 libfontconfig1 libxrender1 \
    libsm6 libice6 libxext6 libxcomposite1 libxi6 libxtst6 libxrandr2 \
    libxfixes3 libxcursor1 libxinerama1 libxcb-shm0 libxcb-shape0 \
    libxcb-xfixes0 libxcb1 libx11-6 libxau6 libxdmcp6 libxdamage1 \
    libxft2 libxcb-xinerama0 \
    xvfb \
    && apt-get clean

RUN pip install --upgrade pip && \
    pip install PyQt5

# Install the latest version of CMake
RUN wget https://github.com/Kitware/CMake/releases/download/v3.30.0/cmake-3.30.0-linux-x86_64.sh && \
    chmod +x cmake-3.30.0-linux-x86_64.sh && \
    ./cmake-3.30.0-linux-x86_64.sh --skip-license --prefix=/usr/local

RUN mkdir build && cd build && \
    cmake .. && \
    make

EXPOSE 80

ENV QT_QPA_PLATFORM=xcb

CMD ["sh", "-c", "cd gui && python gui.py"]