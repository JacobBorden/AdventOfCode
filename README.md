# Advent of Code Scaffolding

This repository provides a basic scaffolding structure for solving Advent of Code (or similar daily programming challenges) in C++, Go, Lua, and Rust.

## Directory Structure

The repository is organized by language, and then by day:

-   **`cpp/`**: Contains solutions in C++.
    -   `day01/`: Solutions for Day 1.
        -   `main.cpp`: Main C++ solution file.
        -   `CMakeLists.txt`: CMake build file for the day's solution.
        -   `.gitignore`: Git ignore file for C++ build artifacts.
    -   `day02/`: Solutions for Day 2.
    -   ...
    -   `day25/`: Solutions for Day 25.
-   **`go/`**: Contains solutions in Go.
    -   `day01/`: Solutions for Day 1.
        -   `main.go`: Main Go solution file.
        -   `go.mod`: Go module file.
        -   `.gitignore`: Git ignore file for Go build artifacts.
    -   `day02/`: Solutions for Day 2.
    -   ...
    -   `day25/`: Solutions for Day 25.
-   **`lua/`**: Contains solutions in Lua.
    -   `day01/`: Solutions for Day 1.
        -   `main.lua`: Main Lua solution file.
        -   `.gitignore`: Git ignore file.
    -   `day02/`: Solutions for Day 2.
    -   ...
    -   `day25/`: Solutions for Day 25.
-   **`rust/`**: Contains solutions in Rust.
    -   `day01/`: Solutions for Day 1.
        -   `main.rs`: Main Rust solution file.
        -   `Cargo.toml`: Cargo manifest file.
        -   `.gitignore`: Git ignore file for Rust build artifacts (e.g., `target/`).
    -   `day02/`: Solutions for Day 2.
    -   ...
    -   `day25/`: Solutions for Day 25.

## Getting Started

1.  Navigate to the specific language and day directory you want to work on (e.g., `cd rust/day01`).
2.  Start coding your solution in the provided main file (e.g., `main.rs`).
3.  Follow the language-specific instructions for building and running your code:
    *   **C++:**
        ```bash
        cd cpp/dayXX
        mkdir build && cd build
        cmake ..
        make
        ./dayXX_solution
        ```
    *   **Go:**
        ```bash
        cd go/dayXX
        go run main.go
        # Or to build:
        # go build
        # ./dayXX
        ```
    *   **Lua:**
        ```bash
        cd lua/dayXX
        lua main.lua
        ```
    *   **Rust:**
        ```bash
        cd rust/dayXX
        cargo run
        # Or to build:
        # cargo build
        # ./target/debug/dayXX
        ```

Happy Coding!

## Advent of Code Daily Structure

This repository is set up to help you get started quickly with each day's Advent of Code puzzle, for C++, Go, Lua, and Rust.
Each language directory (cpp, go, lua, rust) contains 25 subdirectories (day01, day02, ..., day25).

Each `dayXX` directory is pre-populated with a main file (`main.cpp`, `main.go`, `main.lua`, `main.rs`) that provides a basic structure for:
- Reading puzzle input from a local `input.txt` file.
- Placeholder functions for `Phase 1` and `Phase 2` of the problem.

### Your Workflow

1.  **Navigate to the day's directory:**
    For example, for C++ Day 1: `cd cpp/day01`

2.  **Create/Edit `input.txt`:**
    Inside the `dayXX` directory (e.g., `cpp/day01/`), create or paste your unique puzzle input into the `input.txt` file. An empty `input.txt` is already provided.

3.  **Implement the logic:**
    Open the main file for that day (e.g., `cpp/day01/main.cpp`) and fill in your solution logic within the `solve_phase1` and `solve_phase2` (or similarly named) functions.

4.  **Compile and Run:**
    *   **C++:** Navigate to `cpp/dayXX/`. Compile using the provided `CMakeLists.txt` (e.g., `cmake . && make && ./dayXX_solver`) or compile directly (e.g., `g++ main.cpp -o solver && ./solver`). The program can also take an input file path as a command-line argument if you wish to use a different file than `input.txt`.
    *   **Go:** Navigate to `go/dayXX/`. Run `go run main.go` or `go run .`. The program can also take an input file path as a command-line argument.
    *   **Lua:** Navigate to `lua/dayXX/`. Run `lua main.lua`. The program can also take an input file path as a command-line argument.
    *   **Rust:** Navigate to `rust/dayXX/`. Run using `cargo run`. The `Cargo.toml` in each directory is set up for this. The program can also take an input file path as a command-line argument.
        *   *Note on Rust `Cargo.toml`*: If `main.rs` is directly in the `rust/dayXX/` directory (not `rust/dayXX/src/`), the `Cargo.toml` should ideally specify `path = main.rs` in its `[[bin]]` section. Some of these may need manual adjustment if `cargo run` fails to find the binary and `main.rs` is not in a `src` subdirectory.

This setup allows you to focus on solving the puzzles without rewriting boilerplate code for file reading and basic structure each time.
