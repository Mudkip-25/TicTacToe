	/* TODO (#1#): add a function to avoid placing the char on an 
	               existing one
	               
	               establish game winning conditions and drawn 
	               games
	               
	                */


/* TODO (#2#): start creating the engine 
 */
 
 
 
 
 
#include<iostream>

#include "TicTacToe.h"

int main()
{
	
	TicTac game;  
	
	game.displayBoard();// give a cleaner look
	game.askFirstPlayer();// execute only once
	
	
	while (!game.isGameFinished)
	// loop to execute the program
	//until the game is finished
	{
		game.displayBoard();
	
		game.askMove(); 
		game.setCharacter();
		game.checkSquare(); 
			
		game.displayBoard();
		
		game.checkWin();
		game.checkDraw();
	}

	return 0;
}
