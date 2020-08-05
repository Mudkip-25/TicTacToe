#include<iostream>
class TicTac{
public:
	
	bool gameFinished;
	
	
	
	int firstPlayer;
	int column = 0;
	int row = 0;
	
 	int moveCount = 2; // if it is even its player 1 turn, it starts at two so when checking if divisible by 2 it doesn't create a bug
 
	
	static char board[4][4];
public:
	

	void displayBoard();
	
	void askFirstPlayer();
	void askMove();

	void setO();
	void setX();
	
	void checkSquare();
	void checkPlayerTurn();
	
	void isGameFinished();	
	
	void diagonalOne();
	void diagonalTwo();
	
	void rowIsEqual();
	void columnIsEqual();
	
	void checkWin();
	void checkDraw();
	
	void gameWon();
	void gameDrawn();
	
};

class Engine : public TicTac
{
	public:
		
		void analize();
	
};

