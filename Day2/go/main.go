package main

import (
	"fmt"
	"bufio"
	"os"
)

func main(){
	sum := 0
	power := 0
	//open file
	file, err := os.Open("input.txt")
	if err !=nil {
		fmt.Fprintln(os.Stderr, "Error opening file:", err)
		os.Exit(1)
	}
	
	//Close file after use. 
	defer file.Close()

	//read line from file
	scanner := bufio.NewScanner(file)
	for scanner.Scan(){
		line:=scanner.Text()
		game := parseGame(line)
		if game.isPossible{
			sum += game.gameNumber
		}
		power += (game.redMax * game.greenMax * game.blueMax)
		
		
	}

	//output result

		fmt.Println(sum)
		fmt.Println(power)


}
