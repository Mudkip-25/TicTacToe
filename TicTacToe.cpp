#include<iostream>			   
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>
#include<cstdlib>	
#include <chrono>
#include <thread>
#include<string.h>

#include "TicTacToe.h"



int main()
{
	TicTac user;
	Engine komodo;
	user.askFirstPlayer();
	
	
	while(1)
	{
		if(user.firstPlayer == 1)// human starts
		{
			// player moves 
				
			user.askMove();
			
			komodo.moveCount++;
			user.moveCount++;
			
			user.checkSquare();
			user.checkPlayerTurn();
			user.displayBoard();
			
			user.checkWin();
			user.checkDraw(); 
			
			
			std::cout<<"Move count is:   "<<user.moveCount<<std::endl;
			std::this_thread::sleep_for(std::chrono::milliseconds(2500));
			// machine moves 
			
			komodo.analize();
			
			komodo.moveCount++;
			user.moveCount++;
			
			komodo.checkSquare();
			komodo.checkPlayerTurn();    
			komodo.displayBoard(); 
			
		
			 
					 
			komodo.checkWin();
			komodo.checkDraw(); 
			
		
			
	
			 		
		}else
		{
		//machine starts	
		}	
	}
		

	std::cin.get(); 
	return 0;
	
}
