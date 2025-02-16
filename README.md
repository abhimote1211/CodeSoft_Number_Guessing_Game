
# CodeSoft C++ Internship Task 1: Number Guessing Game

## Task Overview

This project is a simple number guessing game implemented in C++ for CodeSoft's internship program. The game allows the user to choose from three difficulty levels: Easy, Normal, and Hard. The user needs to guess a randomly generated number, and the game will inform them if their guess is too high or too low.

## Features

- **Three Difficulty Levels**:
  - Easy: The number range is from 1 to 10.
  - Normal: The number range is from 1 to 100.
  - Hard: The number range is from 1 to 1000.
  
- **Input Validation**: Ensures that the user enters valid numbers. If an invalid input is detected, the user is prompted to re-enter their guess.

- **Feedback on Guesses**: After each guess, the game will tell the user whether their guess is too high or too low.

- **Game Replay Option**: After correctly guessing the number, the user can choose to play again in any of the available difficulty modes or quit the game.

## How to Run

1. **Clone this repository:**

    ```bash
    git clone https://github.com/abhimote1211/CodeSoft_Number_Guessing_Game.cpp.git
    ```

2. **Navigate to the project directory:**

    ```bash
    cd CodeSoft_Number_Guessing_Game.cpp
    ```

3. **Compile the C++ code:**

    Use the following command to compile the code using a C++ compiler like `g++`:

    ```bash
    g++ -o CodeSoft_Number_Guessing_Game.cpp
    ```

4. **Run the program:**

    After compilation, run the game with the following command:

    ```bash
    ./CodeSoft_Number_Guessing_Game
    ```

## Usage

1. When the game starts, the user will be prompted to select a difficulty level (1 for Easy, 2 for Normal, 3 for Hard).
2. The user will then input their guess, and the program will guide them whether their guess is too high or too low.
3. Once the user guesses the correct number, they will be congratulated, and given the option to play again or quit.

## Example Interaction

*****************************************************************************
*************************** Guessing a Number *******************************
*****************************************************************************
Enter 1 for Easy mode
2 for Normal mode
3 for Hard mode
other Key to Quit
Enter Your Choice: 2
You are playing Normal mode, numbers range from 1 to 100
Choose your number: 50
Your Guess is Low
Choose Again: 75
Your Guess is High
Choose Again: 60
You got it! The number is: 60
Enter
1 for Easy mode
2 for Normal mode
3 for Hard mode
other Key to Quit
Enter Your Choice: 0
Thank you for playing!

## Code Structure

- `CodeSoft_Number_Guessing_Game.cpp`: Contains the main program logic for the guessing game.
- Includes basic C++ libraries (`iostream`, `ctime`) for input/output operations and random number generation.

## Contributing

If you'd like to contribute to this project, feel free to fork the repository and make a pull request. Please make sure to test your changes thoroughly.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.



### Notes:
- **`CodeSoft_Number_Guessing_Game.cpp`**: Make sure you update the file name if your C++ code is saved under a different file name.
- **Repository URL**: Replace `https://github.com/yourusername/CodeSoft_Number_Guessing_Game.cpp.git` with the actual GitHub repository link.
- **Contributing Section**: If you plan to open up for contributions, the section above is already set up. If not, you can remove it.
- **License**: I’ve included the MIT License in this template. You can change it based on your preferences or add your own licensing details.
