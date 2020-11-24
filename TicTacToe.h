#include<iostream>

class TicTac{
	public:	
		bool isGameFinished = false;// when true exit the program
		
		int column = 0;//for printing the board and determining the moves
		int row = 0;	//for printing the board and determining the moves
		
		//array of characters initialized to 32 which is spaces
		// it has one extra row and column to match with the user input(square 2,2 in a 3x3 is )
		// is the same as 2,2 starting at index 0 as an array does
		
		int moveCount = 2;
		
		//initialized at two so that when divided by 2 doesnt create bugs
		// to keep track of the moves, it determines which character to print
	
		char board[4][4] = {

			{0,0,0,0},
			{0,32,32,32},
			{0,32,32,32},
			{0,32,32,32},
		};
	
	//methods

	void displayBoard();// self explanatory
	
	void askMove();	// ask the user for a move

	
	void setCharacter();
	void checkSquare();
	
	void checkDraw();
	void checkWin();
	void checkWinner();//determine wether player1 won or player2
	
};



