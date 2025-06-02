use std::fs::File;
use std::io::{self, BufRead, ErrorKind};
use std::path::Path;
use std::env;

// Function to read input from a file
fn read_input(filename: &str) -> io::Result<Vec<String>> {
    let path = Path::new(filename);
    let file = File::open(&path)?;
    io::BufReader::new(file).lines().collect()
}

// Placeholder for Phase 1 solution
fn solve_phase1(input: &Vec<String>) -> String {
    // TODO: Implement Phase 1 logic
    if input.is_empty() {
        return String::from("Phase 1: No input data");
    }
    format!("Phase 1: Result for '{}...\", input[0])
}

// Placeholder for Phase 2 solution
fn solve_phase2(input: &Vec<String>) -> String {
    // TODO: Implement Phase 2 logic
    if input.is_empty() {
        return String::from("Phase 2: No input data");
    }
    format!("Phase 2: Result for '{}...\", input[0])
}

fn main() {
    let args: Vec<String> = env::args().collect();
    let mut filename = "input.txt";
    if args.len() > 1 {
        filename = &args[1]; // Allow specifying input file via command line
    }

    let input_data_result = read_input(filename);

    let input_data = match input_data_result {
        Ok(data) => data,
        Err(ref e) if e.kind() == ErrorKind::NotFound && filename == "input.txt" => {
            let parent_dir_filename = "../input.txt";
            match read_input(parent_dir_filename) {
                Ok(data) => {
                    println!("Using input file: {}", parent_dir_filename);
                    data
                },
                Err(e_parent) => {
                    eprintln!("Failed to read input from default '{}' or '{}': {}. Please ensure 'input.txt' exists or specify the input file path.", filename, parent_dir_filename, e_parent);
                    std::process::exit(1);
                }
            }
        }
        Err(e) => {
            eprintln!("Failed to read input from '{}': {}. Please ensure the file exists and is readable.", filename, e);
            std::process::exit(1);
        }
    };

    if input_data.is_empty() && (filename == "input.txt" || filename == "../input.txt") {
        println!("Warning: Input file '{}' is empty.", filename);
    }

    let result_phase1 = solve_phase1(&input_data);
    println!("Phase 1: {}", result_phase1);

    let result_phase2 = solve_phase2(&input_data);
    println!("Phase 2: {}", result_phase2);
}
