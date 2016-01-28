/*
	(C) 2012-2015  Tianyi Hao

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
	*/
#include <iostream>
using namespace std;
#include "game.h"

int fflag=0;
int nosix=0;
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