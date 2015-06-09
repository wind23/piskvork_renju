/*
	(C) 2000-2015  Petr Lastovicka
	(C) 2015  Tianyi Hao

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License.
	*/

#include "hdr.h"
#pragma hdrstop
#include "piskvork.h"
#include "renju\game.h"

int forbid(int board_[N][N], int pos, int size);
bool checkforbid(Psquare px, Psquare board,int move,int size)
{
	int board_[N][N]={0};
	Psquare p;
	int moven=0;
	if(board)
	{
		for(p=board; p->nxt; p=p->nxt)
		{
		}
		for(;p;p=p->pre)
		{
			if(moven%2==0)
			{
				board_[p->x-1][p->y-1]=1;
			}
			else
			{
				board_[p->x-1][p->y-1]=-1;
			}
			moven++;
			if(moven>=moves)
			{
				break;
			}
		}
	}
	if(moven%2==0)
	{
		board_[px->x-1][px->y-1]=1;
	}
	else
	{
		board_[px->x-1][px->y-1]=-1;
	}
	moven++;
	return forbid(board_,px->x-1+(px->y-1)*S,size);
}