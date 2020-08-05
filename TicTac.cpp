#include<iostream>
#include "TicTacToe.h"


void TicTac::displayBoard()
{


	system("CLS");// clear whatever is on the screen
	// iterate through a 2D array
	for(int i = 1;i<4;i++)
	{
		for(int j = 1;j<4;j++)
		{
			std::cout<<"	"<<board[i][j]<<"	||";
		}
		std::cout<<"\n";
	}
}

void TicTac::askMove()
{
	std::cout<<"Write the column of your move:";
	std::cin>>column;
	std::cout<<"Write the row of your move: ";
	std::cin>>row;
	moveCount++;
}

void TicTac::askFirstPlayer()
{
	
	std::cout<<"Who is making the first move you or the computer: ";
	std::cout<<"\n1. You\n2. Machine"<<std::endl;
	std::cin>>firstPlayer;
}

void TicTac::setCharacter()
{
	if(moveCount%2 == 1)
	{
		board[column][row] = 88;
	}else
	{
		board[column][row] = 79;	
	}
}


void TicTac::checkSquare()
{
	
	if(board[column][row] == 32)
	{
		moveCount--;
		askMove();
		checkSquare();
		setCharacter();
	
	}else
	{
	}
}

void TicTac::checkUserWin()
{			//only 4 possible situations for winner human started/ human did not start and win
//			if not machie w
			if(firstPlayer == 1 && moveCount %2 == 1) 				{
					isGameFinished = true;
					std::cout<<"YOU WON!!!!!!";
					exit(0);
				}else if(firstPlayer == 2 && moveCount %2 == 0)
				{
					isGameFinished = true;
					std::cout<<"YOU WON!!!!!!";
					exit(0);
				}else
				{
					isGameFinished = true;
					std::cout<<"MACHINE WON :-(";
					exit(0);
				}	
}

void TicTac::checkWin()
{
	for(int i = 1;i<4;i++)
	{
		
			if(board[i][1] == board[i][2] && board[i][1] == board[i][3] && board[i][1] != 32)//vertical win
			{
				checkUserWin();
			
			}else if(board[1][i] == board[2][i] && board[1][i] == board[3][i] && board[1][i] != 32)// horizontal win
			{
			checkUserWin();			
			}else if(board[1][1] == board[2][2] && board[1][1] == board[3][3] && board[1][1] != 32)//diagonal win
			{
				checkUserWin();
			}else if(board[3][1] == board[2][2] && board[3][1] == board[1][3] && board[3][1] != 32)//diagonal win
			{
				checkUserWin();
			}
		
	}
}

void TicTac::checkDraw()
{
	if(moveCount>10)
	{
		isGameFinished = true;
		std::cout<<"\n**********\n**********\n**********\n";
		std::cout<<"TIE";
		std::cout<<"\n**********\n**********\n**********\n";
	}
}
