// 5B_ArrayDupeDel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// this works but only adds the numbers later in the sequence since they are not compared earlier. compare with book outcome if i forget what i mean.
void delDupes(int a[], int count)
{
	int newish[] = { -1,-1,-1,-1,-1,-1,-1,-1,-1 };
	bool dupe = false;
	short tempArrPos = 0;
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (a[i] == a[j] && i != j)
			{
				cout << "Array pos " << i << " same as pos " << j << endl;
				dupe = true;
				break;
			}
		}
		if (dupe == false)
		{
			cout << "Adding a[i] " << a[i] << " to temp array " << endl;
			newish[tempArrPos] = a[i];
			tempArrPos++;
		}
		dupe = false;
	}
	int newcount = sizeof(newish) / 4;
	cout << "newcount is " << newcount;
	cout << "New array is as follows : ";
	for (int d = 0; d < newcount; d++)
	{
		if (newish[d] != -1)
			cout << newish[d] << " ";
	}
	cout << endl;
}

int main()
{
	int group[] = { 1, 4, 9, 16, 9, 7, 4, 9, 11 };
	// int fixed[];

	int arCount;
	arCount = sizeof(group) / 4;
	cout << "arcount is: " << arCount;
	delDupes(group, arCount);

	system("pause");
	return 0;
}

