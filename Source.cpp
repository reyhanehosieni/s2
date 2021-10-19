
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int n, h, m, s;
	cout << "Enter saat:";
	cin >> h >> m >> s;
	n = (h * 3600) + (m * 60) + s;
	cout << n;
	system("pause");
	return 0;
}