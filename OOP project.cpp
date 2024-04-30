#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class GameObject {
	public: 
	    int x; 
	    int y;
	    int speed;
	    int directionx;
		int directiony;
		void draw (){
		}
		void move (){
			y++;
			x++;
		}
};
class Paddle : public GameObject {
	public:
		string name;
	    int length;
	    int width; 
		Paddle (int x1, int y1, int l, int w, string n){
			x=x1;
			y=y1;
			length=l;
			width=w;
			directiony=0;
			name=n;
		}
		void draw (){
			int i, j;
			for (i = y; i < y + length; i++) {
                for (j = x; j < x + width; j++) {
                    cout << "#";  // draw the paddle using "#" character
                }
                cout << endl;
            }
        }
        void move (){
        	y+=directiony;
		}
        
};
class Ball : public GameObject {
public:
    int radius;  // radius of the ball
    Ball(int x, int y, int r) {
        this->x = x;
        this->y = y;
        this->radius = r;
        directionx = 1;
        directiony = 1;
    }

    void draw() {
        for (int i = y - radius; i <= y + radius; i++) {
            for (int j = x - radius; j <= x + radius; j++) {
                if ((i - y) * (i - y) + (j - x) * (j - x) <= radius * radius) {
                    cout << "*";  // draw the ball using "*" character
                } else {
                    cout << " ";  // draw the background using " " character
                }
            }
            cout << endl;
        }
    }

    void move() {
        x += directionx;  // update the x-coordinate of the ball based on its direction of movement
        y += directiony;  // update the y-coordinate of the ball based on its direction of movement
    }

    void changeDirectionX() {
        directionx = -directionx;  // change the direction of the ball along the x-axis
    }

    void changeDirectionY() {
        directiony = -directiony;  // change the direction of the ball along the y-axis
    }
};
class Scoreboard :virtual public GameObject{
	class Scoreboard : public virtual GameObject {
private:
    int player1Score;
    int player2Score;
    int maxScore;
    friend Paddel p1;
    friend Paddel p2;
public:
    // Constructor
    Scoreboard(int maxScore_) : player1Score(0), player2Score(0), maxScore(maxScore_) {}

    // Update the scoreboard (could be called every time a player scores)
    void updateScoreboard(string n) {
        if (p1.name==n) {
            player1Score++;
        } else if (p2.name == n) {
            player2Score++;
        }

        if (player1Score >= maxScore) {
            std::cout << "Player 1 wins!" << std::endl;
            // End the game
        } else if (player2Score >= maxScore) {
            std::cout << "Player 2 wins!" << std::endl;
            // End the game
        }
    }

    // Draw the scoreboard
    void draw() override {
        std::cout << "Player 1: " << player1Score << " | Player 2: " << player2Score << std::endl;
    }

    // Check for collisions with other game objects (not relevant for a scoreboard, so always returns false)
    bool collidesWith(GameObject& other) override {
        return false;
    }

    // Virtual destructor (since the class inherits virtually from GameObject)
    virtual ~Scoreboard() {}
};

class Game {
public:
    int width, height;  // dimensions of the game screen
    Paddle* player1;
    Paddle* player2;
    Ball* ball;
    Scoreboard* scores;
    Game(int width, int height, string n) {
        this->width = width;
        this->height = height;
        player1 = new Paddle(1, height/2-3, 6, 2, n);  // create the left paddle for player 1
        player2 = new Paddle(width-2, height/2-3, 6, 2, n);  // create the right paddle for player 2
        ball = new Ball(width/2, height/2, 2);  // create the ball at the center of the screen
        scores = new Scoreboard (10);
    }
    void draw () {
    	player1.draw ();
    	player2.draw ();
    	ball.draw();
	}
	void update () {
		
	}
};
	
int main (){
return 0;
}