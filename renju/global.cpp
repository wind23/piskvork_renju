/*
	(C) 2012-2015  Tianyi Hao

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License.
	*/
#include <iostream>
using namespace std;
#include "game.h"

int fflag=0;
int nosix=0;
int timee=30000000;    // 单步时间
int times=0;         // 预计时间
int timel=30000000;     // 总局时
int timestart=0;
int volatile compend=0;
int comphalfend=0;
int staticboard=1;
int movei=0;
int S=20;
int boardSize=20;

int forbid(int board_[N][N], int pos,int size)
{
	game board;
	board.move=0;
	boardSize=size;
	S=size;
	for(int i=0;i<S;i++)
	{
		for(int j=0;j<S;j++)
		{
			board.board[i][j]=board_[i][j];
			if(board.board[i][j])
			{
				board.move++;
			}
		}
	}
	fflag=1;
	nosix=0;
	int x=pos%S;
	int y=pos/S;
	line4v lin4v=line4v(board);
	if(board.board[x][y]==1)
	{
		return lin4v.foulr(x,y);
	}
	else
	{
		return 0;
	}
}