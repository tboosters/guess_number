# Guess Number Game v1.0
A Number Guessing Game

## Contents:
 - Main program
	- guess.exe
 - Source code
	- guess.cpp
 - Documentation
	- readme.txt (this file)

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
  A ```guessed``` array is used to record guesses. When a guess is made by the player, its validity
is firstly checked. If it is valid, it will then be compared to the answer: if it is correct,
the player wins and all the past guesses will be printed with the total number of guesses made;
if it is too large or too small, a ```check``` function will be triggered to see if the number has
been guessed before. If the number has been guessed, the player will be prompted to input another
guess; if not, the number will be added to the ```guessed``` array and the number of guesses will be
incremented.

## Language Used and Tested Environment:
C++ (compiled with MinGW G++), Windows 10 on Intel i5 with 4GB RAM
