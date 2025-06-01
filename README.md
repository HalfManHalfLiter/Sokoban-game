Sokoban Game
This is a C++ console-based implementation of the classic Sokoban puzzle game. The player controls a warehouse worker (@) who must push boxes (X) onto target locations (?) within a limited number of moves. The game features four levels of increasing difficulty, an ASCII art interface, and a menu system for navigation.
Project Structure

src/ - Source code:
sokoban.cpp: Main program with game logic, including menu, levels, and movement mechanics.


.gitignore: Excludes unnecessary files (e.g., compiled binaries).
README.md: This file.

Features

Four Levels: Progress through four unique levels with different map layouts and challenges.
ASCII Art Interface: Menu and game screens use ASCII art for a retro aesthetic.
Movement Mechanics: Use W, A, S, D to move the worker and push boxes, and Q to return to the menu.
Win/Lose Conditions: Win by placing all boxes on targets, or lose if moves run out.
Level Progression: Automatically advance to the next level upon completion.

Requirements

C++ compiler (e.g., g++, MinGW, or Visual Studio)
Windows operating system (due to use of <conio.h> and system("cls"))

How to Run

Clone the repository:git clone https://github.com/your-username/sokoban-game.git


Compile the program:g++ src/sokoban.cpp -o sokoban


Run the program:./sokoban


Follow the menu instructions:
1: Start a new game (begins with Level 1).
2: Select a specific level (1–4).
3: Display the author screen.
4: Quit the game.


In-game controls:
W: Move up
A: Move left
S: Move down
D: Move right
Q: Return to the menu



Game Symbols

#: Wall (impassable)
_: Empty floor
@: Warehouse worker (player)
X: Box
?: Target location
O: Box on target

Example Gameplay
# # # # # #
# @ _ _ _ #
# _ X _ _ #
# _ _ ? _ #
# _ _ _ ? #
# # # # # #

Pozostale ruchy: 25
Operacja: 


Move the worker (@) to push boxes (X) onto targets (?).
Win by placing both boxes on targets within the move limit.

Limitations

The game uses <conio.h> for input handling (_getch), which is Windows-specific. For cross-platform compatibility, consider replacing _getch with standard C++ input methods.
No save/load functionality; progress is not persisted.
Limited error handling for invalid inputs.

License
MIT License
