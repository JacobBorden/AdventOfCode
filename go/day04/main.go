package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
)

// Function to read input from a file
func readInput(filename string) ([]string, error) {
	file, err := os.Open(filename)
	if err != nil {
		return nil, err
	}
	defer file.Close()

	var lines []string
	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		lines = append(lines, scanner.Text())
	}
	return lines, scanner.Err()
}

// Placeholder for Phase 1 solution
func solvePhase1(input []string) string {
	// TODO: Implement Phase 1 logic
	if len(input) == 0 {
		return "Phase 1: No input data"
	}
	return fmt.Sprintf("Phase 1: Result for '%s...'", input[0])
}

// Placeholder for Phase 2 solution
func solvePhase2(input []string) string {
	// TODO: Implement Phase 2 logic
	if len(input) == 0 {
		return "Phase 2: No input data"
	}
	return fmt.Sprintf("Phase 2: Result for '%s...'", input[0])
}

func main() {
	filename := "input.txt"
	if len(os.Args) > 1 {
		filename = os.Args[1] // Allow specifying input file via command line
	}

	inputData, err := readInput(filename)
	if err != nil {
		// Attempt to read from parent directory if default input.txt is not found
		// This is useful if running from a sub-directory like go/day01/
		// Note: Go run . from within day01 will look for day01/input.txt
		// go run template.go will look for ./input.txt (relative to where command is run)
		// This logic helps if building/running from a common script or specific day folders
		if filename == "input.txt" {
            // Check if input.txt exists in the same directory as the executable
            // For `go run template.go`, this is the directory of template.go
            // For `go build -o myprogram template.go && ./myprogram`, this is also the dir of template.go
            // If we are in a dayXX scenario, e.g. go/day01/main.go (copied from template)
            // it will correctly look for go/day01/input.txt
        }
		log.Fatalf("Failed to read input from %s: %v", filename, err)
	}

    if len(inputData) == 0 {
        fmt.Printf("Warning: Input file '%s' is empty or could not be read properly.\n", filename)
        // It's not a fatal error to have empty input, solvers should handle it.
    }

	resultPhase1 := solvePhase1(inputData)
	fmt.Printf("Phase 1: %s\n", resultPhase1)

	resultPhase2 := solvePhase2(inputData)
	fmt.Printf("Phase 2: %s\n", resultPhase2)
}
