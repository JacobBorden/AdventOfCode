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
