int main(int argc, char *argv[]) ~{
    if (argc > 1) {
        // File input mode
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            cerr << "Error: Could not open file " << argv[1] << endl;
            return 1;
        }
        cout << "Reading from file: " << argv[1] << endl;
    } else {
        // Standard input mode
        cout << "Enter C++ code (Ctrl+D to end input):\n";
        yyin = stdin;
    }

    // Start tokenizing
    while (yylex()) {}

    if (yyin != stdin) {
        fclose(yyin);
    }

    return 0;
}