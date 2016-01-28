/*
	(C) 2000-2015  Petr Lastovicka
	(C) 2015  Tianyi Hao

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