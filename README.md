# Pong Game

This repository contains a simple Pong game implemented in C++ using console output. The game features two paddles controlled by players, a ball bouncing between the paddles, and a scoreboard to keep track of the players' scores.

## Features:

- **Paddles:** The game includes two paddles, one for each player, which can move up and down to hit the ball.

- **Ball:** A ball moves across the screen, bouncing off the paddles and walls. The ball's direction changes when it collides with a paddle or a wall.

- **Scoreboard:** A scoreboard tracks the scores of both players. The game ends when one player reaches a predefined maximum score.

## Classes:

- **GameObject:** Base class for game objects, providing common attributes and methods such as position and movement.

- **Paddle:** Inherits from GameObject, representing a paddle controlled by a player. It includes attributes such as name, length, and width.

- **Ball:** Inherits from GameObject, representing the ball that moves across the screen. It includes attributes such as radius and direction.

- **Scoreboard:** Inherits from GameObject, representing the scoreboard that tracks the players' scores. It includes methods to update and draw the scores.

- **Game:** Manages the game state, including the game screen dimensions, player paddles, ball, and scoreboard. It includes methods to draw and update the game.

## Usage:

To run the Pong game:

1. Clone the repository to your local machine.
   
2. Compile the source code using a C++ compiler.

3. Run the compiled executable to start the game.

## Contributions:

Contributions to this project are welcome. Feel free to fork this repository, make changes, and submit pull requests with your improvements.

## License:

This project is licensed under the [MIT License](LICENSE), allowing for open-source contributions and distribution.

## Authors:

- [Syeda Fizza](https://github.com/SFizzaR) 
- [Falah Zainab](https://github.com/FalahZainab)
- [Zahab Jahangir](https://github.com/zeejaycoding)

## Acknowledgments:

Special thanks to the creators and contributors of the Pong game concept, and to the authors of the resources used to implement this version in C++.
