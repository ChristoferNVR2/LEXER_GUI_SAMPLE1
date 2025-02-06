# LEXER_GUI_SAMPLE1

This project is a lexer for C++ code, implemented using Flex and C++. It reads C++ code from a file or standard input and tokenizes it, reporting any errors encountered during the process.

## Features

- Tokenizes C++ code
- Reports errors with line numbers
- Supports file input and standard input

## Getting Started

### Prerequisites

- C++ compiler (supporting C++20)
- CMake
- Flex
- Ninja

### Building the Project

1. Clone the repository:
    ```sh
    git clone https://github.com/ChristoferNVR2/LEXER_GUI_SAMPLE1.git
    cd LEXER_GUI_SAMPLE1
    ```

2. Create a build directory and navigate to it:
    ```sh
    mkdir build
    cd build
    ```

3. Run CMake to configure the project with Ninja:
    ```sh
    cmake -G Ninja ..
    ```

4. Build the project using Ninja:
    ```sh
    ninja
    ```

### Running the Lexer

1. To run the lexer with a file input:
    ```sh
    ./LEXER_GUI_SAMPLE1 path/to/your/file.cpp
    ```

2. To run the lexer with standard input:
    ```sh
    ./LEXER_GUI_SAMPLE1
    ```

### Running the GUI

1. Ensure you have the required Python packages installed:
    ```sh
    pip install PyQt5
    ```

2. Run the GUI application:
    ```sh
    python gui/gui.py
    ```

## Project Structure

- `src/` - Source files
    - `lexer.l` - Flex lexer definition
    - `main.cpp` - Main entry point
    - `error_handler.cpp` - Error handling functions
    - `Token.h` - Header file with class and function declarations
    - `Token.cpp` - Implementation of the Token class
- `gui/` - GUI files
    - `gui.py` - Python script for the GUI
- `CMakeLists.txt` - CMake configuration file

## Contributing

Contributions are welcome! Please open an issue or submit a pull request.

## License

This project is licensed under the MIT License - see the `LICENSE` file for details.