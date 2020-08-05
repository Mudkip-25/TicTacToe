#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>
#include<cstdlib>	
#include <chrono>
#include <thread>
#include<string.h>

#include "TicTacToe.h"


void TicTac::askMove()	
		{
		system("CLS");
		displayBoard();
		std::cout<<"Write the column where you want to place your figure:	";
		
		std::cin>>column;
		
		std::cout<<"Write the row where you want to place you figure:	";
		std::cin>>row;
		


	
		}
void TicTac::askFirstPlayer()
{
	
	std::cout<<"Who is starting you or the machine:\n1 you\n2 machine "<<std::endl;
	std::cin>>firstPlayer;
		
}

void TicTac::displayBoard()
		{
			system("CLS");
			for(int i = 1;i<4;i++)
			{
				for(int j = 1;j<4;j++)
				{
					std::cout<<" "<<board[i][j]<<"  ||  ";
				}
				std::cout<<"\n";
			}
		}
		

void TicTac::setO()
		{
			
		board[column][row] = 79;	
		}
		
void TicTac::setX()
		{	
			
			board[column][row] = 88;
		}
	
	
		
void TicTac::checkPlayerTurn()
{	
	if(moveCount %2 == 0)
		setO();
	else
		setX();
}



void TicTac::checkSquare()
{
	if(board[column][row] != 32 )//if the square is already picked by a player dont touch it 
	{
		moveCount--;
		system("CLS");
		askMove();
		
	}

}
void TicTac::gameWon()
{
	

	std::cout<<"Game finished"<<std::endl<<std::endl;
	
	if(moveCount %2 == 1 && firstPlayer == 1)
	{
		std::cout<<"You won!!!!!!!!!";
	}else if(moveCount %2 == 0 && firstPlayer == 2)
	{
		std::cout<<"You won!!!!";
	}else 
	{
		std::cout<<"Machine won";
	}
	
	
	std::this_thread::sleep_for(std::chrono::milliseconds(2500));

	
	exit(0);
			
}


void TicTac::checkWin()
{
	
		columnIsEqual();
		rowIsEqual();	
		diagonalOne();
		diagonalTwo();		

}
void columnIsEqual()
{
	for(int i = 1;i<4;i++)
			{
				for(int j = 1;j<4;j++)
				{
					if(board[i][j] != 32 && board[i][j] == board[i+1][j] && board[i+2][j]== board[i][j])// win vertical
					{
						
						gameWon();
					}
				}
			}	
}



void rowIsEqual()
{
	for(int i = 1;i<4;i++)
			{
				for(int j = 1;j<4;j++)
				{
					if(board[j][i] != 32 && board[j][i] == board[j][i+1] && board[j][i+2]== board[j][i])// win horizontal
					{
						
						gameWon();
					}
				}
			}	
}

void diagonalOne()
{
		if(board[1][1] != 32 && board[1][1] == board[2][2] && board[3][3]== board[1][1])//diagonal arriba->abajo
			gameWon();	
}
void diagonalTwo()
{
	if(board[3][1] != 32 && board[3][1] == board[2][2] && board[1][3]== board[3][1])//diagonal abajo->arriba
			gameWon();
}

void TicTac::checkDraw()
{
	
if(moveCount == 11 && gameFinished!= true)
	gameDrawn();
	
}


void TicTac::gameDrawn()
{
	
	std::cout<<"\n\n\n-------TIE--------";
	std::this_thread::sleep_for(std::chrono::milliseconds(2500));
	exit(0);
	
}

char TicTac::board[4][4] =  {
						 {0,32,32,32},
						 {32,32,32,32},
						 {32,32,32,32},
						 {32,32,32,32}
					};


					
void Engine::analize()
{
	
std::cout<<"Analizing.................";

std::this_thread::sleep_for(std::chrono::milliseconds(1250));



//with a set of if's we determine the priority of the move

// the first if's will mean higher priority


if(board[2][2] == 32)
{
		column = 2;
		row = 2;
		
}	else
	{
		
	}
	


}

void Engine::checkColumn()
{
	if(board[1][i] == board[1][i+1] || board[1][i] == board[1][i+2])
	{
		if(moveCount % 2 == 1 && firstPlayer == 1)
		//MOVER A LA CASILLA Q ESTE LIBRE DE ESA COLUMNA	
	}	
}

				
					
