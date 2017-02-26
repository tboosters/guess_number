# Guess Number Game v1.1
A Number Guessing Game

## Contents:
 - Main program
	- guess.exe
 - Source code
	- guess.cpp
 - Documentation
	- README.md (this file)

## Game Objective:
 - The player need to guess a number from 1 to 100 to win

## Features:
 - Records guesses and warns player when they make repeated guess
 - Counts number of guesses (repeated input not counted)
 - Detects non-numerical input (will not be recorded by the program)
 - Gives hints to the player by revealing whether the guess is too large or too small

## Instructions:
1. Enter a guess from 1 to 100
	1. If the guess is invalid, you will be prompted to enter a valid NUMBER
2. Keep guessing until you make it

## Concepts:
  A ```guessed``` boolean array of size 100 is used to record guesses. When a guess is made by the player, its validity
is firstly checked. If it is valid, it will then be compared to ```guessed``` array: if it is guessed, player will be promted to enter another number; if not, the corresponding entry in ```guessed``` will be set to true and the number will be added to ```order``` array. The number of guesses will be also be incremented. 
If the guess is correct the player wins and all the past guesses will be printed with the total number of guesses made; if it is too large or too small, corresponding hints will be prompted.

## Updates:
 - Use of boolean ```guessed``` array and ```order``` array
 - Optimization of logic flow (got rid of redundant branching)

## Language Used and Tested Environment:
C++ (compiled using CLang++ with MinGW G++), Windows 10 on Intel i5 with 4GB RAM
