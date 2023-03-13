# Welcome to My Mastermind
This code implements a command-line interface (CLI) version of the classic game Mastermind.
In Mastermind, the player must guess a secret code made up of 4 digits between 0 and 8.
After each guess, the game provides feedback indicating how many digits were correctly guessed and how many 
were correctly guessed but in the wrong position

## Task
The game generates a random 4-digit code for the player to guess. 
The player has 10 attempts to guess the code. After each guess, the game will provide feedback in the form of 
"Well placed pieces" and "Misplaced pieces". 
A "Well placed piece" is a digit that was correctly guessed and is in the correct position. 
A "Misplaced piece" is a digit that was correctly guessed but is not in the correct position.

If the player correctly guesses all 4 digits in the code within 10 attempts, they win the game. Otherwise, they lose.

## Description
This code is a simple implementation of the classic game "Mastermind" in C language.

The game generates a random 4-digit code, and the player has to guess the code within a certain number of 
attempts. After each guess, the program provides feedback to the player about how close their guess was to 
the actual code.



## Installation
To compile and run the game, you will need to have a C compiler installed on your system. This code has been tested with the GNU Compiler Collection (GCC) on Linux.

Open a terminal window.
Navigate to the directory where the code is located.
Type gcc mastermind.c -o mastermind to compile the code.
Type ./mastermind to run the game.

## Usage
To play the game, simply compile and run the program. Follow the on-screen instructions to enter your guesses. 
If you correctly guess the code within the specified number of attempts, you win! Otherwise, 
you lose and the program displays the correct code.

### The Core Team
myself: olorunsh


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
