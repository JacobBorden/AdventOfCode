package main

import (
	"bufio"
	"fmt"
	"os"
)

func main(){
	sum :=0
	//open file
	file, err := os.Open("input.txt")
	if err != nil {
		fmt.Fprintln(os.Stderr, "Error opening file:", err)
	os.Exit(1)
	}

	defer file.Close()


	//read line from file
	scanner := bufio.NewScanner(file)
	for scanner.Scan(){
		line := scanner.Text()
		value := findDigits(line)
		sum += value
	}
	//output result
	fmt.Println(sum)
}
