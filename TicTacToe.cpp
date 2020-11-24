#include<conio.h>
#include<iostream>

#include "TicTacToe.h"

int main()
{
	TicTac game;  
	
	game.displayBoard();// give a cleaner look
	
	// loop to execute the program
	//until the game is finished 
	while (!game.isGameFinished) 
	{ 
		//input moves
		game.displayBoard();  
	
		game.askMove(); 
		game.checkSquare();  
		game.setCharacter();

		/////	 
		game.displayBoard();
		  
		// check result 		 	  
		game.checkWin();
		game.checkDraw();		   
	} 

	return 0;
}
