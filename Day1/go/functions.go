package main

import(
	"fmt"
	"strings"
)


func findDigits(line string) int{
	var digits[]int
	for i:= 0; i < len(line);{
		if isDigit(rune(line[i])){
			digits = append(digits, int(line[i] - '0'))
		}else {
			j := 0
			for (i+j)<len(line) && !isDigit(rune(line[i+j])) && j < 5 {
				if (i + j) >= len(line){
					break
				}
				j++
			}
			str := line[i:i+j]	
			result := findDigitsFromString(str)
			if result != -1 {
				digits = append(digits,result)
			}
		}
		i++
	}
	if len(digits) != 0{
		return digits[0] * 10 + digits[len(digits)-1]
	}
	return -1
}

func isDigit(c rune) bool{
	return c >= '0' && c <= '9'
}

func findDigitsFromString(s string) int{
	
num := map[string]int{
	"one":1,
	"two":2,
	"three":3,
	"four":4,
	"five":5,
	"six":6,
	"seven":7,
	"eight":8,
	"nine":9,
	"zero":0,
 }
	for str,value := range num{
		if strings.Contains(s,str){
			return value
		}
	}
	return -1
}
