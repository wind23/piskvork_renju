/*
	(C) 2012-2015  Tianyi Hao

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License.
	*/
// Version 4.0

#ifndef _CLASS
#define _CLASS
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

#define N 20
#define P(X,Y) ((X)+(Y)*(S))

class line4v;
extern int S;
extern int fflag;

class game
{
public:
	int board[N][N];
	int move;
	game();
};

class line
{
public:
	int x[N+4];	
	line(){}
	line(int a[]);
	line(game& b,int p,int d);
	int A6(int p);
	int A5(int p);
	int A4(int p);
	int B4(int p);
	int B4p(int p);
	int A3(int p);
	int A3pb(int p);
};

class line4v
{

private:
public:
	int x1[N][N],x2[N][N],x3[2*N-1][N],x4[2*N-1][N];
	line4v(game& board);
	int A6(int x,int y);
	int A5(int x,int y);
	int A5test(int x,int y);
	int A4(int x,int y);
	int B4(int x,int y);
	int B4p(int x,int y);
	int overline(int x,int y);
	int double4(int x,int y);
	int A3r(int x,int y);
	int double3r(int x,int y);
	int foulr(int x,int y);
	int B4p(int c);
};


#endif