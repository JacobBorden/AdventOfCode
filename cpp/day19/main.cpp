#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// Function to read input from a file
std::vector<std::string> read_input(const std::string& filename) {
    std::vector<std::string> input_lines;
    std::ifstream file(filename);
    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            input_lines.push_back(line);
        }
        file.close();
    } else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
    return input_lines;
}

// Placeholder for Phase 1 solution
std::string solve_phase1(const std::vector<std::string>& input) {
    // TODO: Implement Phase 1 logic
    if (input.empty()) {
        return "Phase 1: No input data";
    }
    return "Phase 1: Result for '" + input[0] + "...";
}

// Placeholder for Phase 2 solution
std::string solve_phase2(const std::vector<std::string>& input) {
    // TODO: Implement Phase 2 logic
    if (input.empty()) {
        return "Phase 2: No input data";
    }
    return "Phase 2: Result for '" + input[0] + "...";
}

int main(int argc, char *argv[]) {
    std::string filename = "input.txt";
    if (argc > 1) {
        filename = argv[1]; // Allow specifying input file via command line
    }

    std::vector<std::string> input_data = read_input(filename);

    if (input_data.empty() && filename == "input.txt") {
        // Attempt to read from parent directory if default input.txt is not found or empty
        // This is useful if running from a build directory like cpp/build/
        std::string parent_dir_filename = "../input.txt";
        input_data = read_input(parent_dir_filename);
        if (!input_data.empty()) {
            std::cout << "Using input file: " << parent_dir_filename << std::endl;
        } else if (filename == "input.txt") { // Still empty, and it was the default
             std::cerr << "Failed to read input from default 'input.txt' or '../input.txt'. Please ensure 'input.txt' exists in the correct location or specify the input file path as a command-line argument." << std::endl;
            return 1;
        }
    } else if (input_data.empty()) {
        std::cerr << "Failed to read input from: " << filename << ". Please ensure the file exists and is readable." << std::endl;
        return 1;
    }


    std::string result_phase1 = solve_phase1(input_data);
    std::cout << "Phase 1: " << result_phase1 << std::endl;

    std::string result_phase2 = solve_phase2(input_data);
    std::cout << "Phase 2: " << result_phase2 << std::endl;

    return 0;
}
