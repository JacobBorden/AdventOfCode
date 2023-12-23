package main

import(
	"strings"
	"strconv"
)

type Game struct{
	isPossible bool
	gameNumber int
	redMax int
	greenMax int
	blueMax int
}

func parseGame(game string) *Game {

	g := new(Game)
	g.redMax = 0
	g.greenMax = 0
	g.blueMax = 0
	parts := strings.Split(game,": ")
	gameStr := parts[0]
	roundsStr := parts [1]
	g.gameNumber = getGameNumber(gameStr)
	rounds := strings.Split(roundsStr,"; ")
	g.isPossible = gameIsPossible(rounds, g)
	return g
}

func getGameNumber(game string) int {
	number := strings.Split(game, " ")[1]
	 i, err := strconv.Atoi(number)
	 if err != nil{
		 return -1
	 }
	 return i
}

func gameIsPossible(rounds []string, game *Game) bool{
	possible := true
	for i := range rounds{
		if !roundIsPossible(rounds[i], game){
			possible = false
		}
	}
	return possible
}

func roundIsPossible(round string, game *Game) bool{
	red := 0
	green := 0
	blue := 0
	colors := strings.Split(round, ", ")
	for i := range colors{
		colorData := strings.Split(colors[i]," ")
		value, err := strconv.Atoi(colorData[0])
		if err != nil {
		
		}
		colorName := colorData[1]
		if colorName == "red"{
			red = value
			if red > game.redMax{
				game.redMax = red
			}
		}
		if colorName == "green"{
			green = value
			if green > game.greenMax {
				game.greenMax = green
			}
		}
		if colorName == "blue"{
			blue = value
			if blue > game.blueMax{
				game.blueMax = blue
			}
		}
	}
	return red <= 12 && green <= 13 && blue <= 14
}

