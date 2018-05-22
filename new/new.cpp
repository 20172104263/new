// new.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include "string.h"
#include "iostream"
using namespace std;
void Myprintf(char * p)
{
	cout << p << endl;
	*p = 'H';
	*(p + 1) = 'E';
	*(p + 2) = 'L';
	*(p + 3) = 'L';
	*(p + 4) = 'O';
	cout << p << endl;
}



int main()
{
	//char s(100);
	char *s;
	s = (char*)malloc(100);
	strcpy_s(s, 6 + 1, "hello!");

	//Myprintf(s);
	cout << s << endl;
	return 0;
}

