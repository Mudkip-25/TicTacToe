
 //the engine has 1 move depth 
 
 
 
#include<iostream>

#include "TicTacToe.h"

int main()
{ 
	
	TicTac game;  
	
	game.displayBoard();// give a cleaner look
	
	
	
	while (!game.isGameFinished) 
	// loop to execute the program
	//until the game is finished 
	{ 
		
			//input moves
			game.displayBoard();  
	
			game.askMove(); 
			game.setCharacter();
			game.checkSquare();  
			 /////	 
			game.displayBoard();
		  


		 	// check result 
		 	  
			game.checkWin();
			game.checkDraw();
 		     
		 


	} 

	return 0;
}
