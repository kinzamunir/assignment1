#include<iostream>  
#include "assembly_line.h"

using namespace std;


int main()
{

	int number, e1, e2, x1, x2;
	int w, v, x, y;
	int f1[8], f2[7], L1[7], L2[7], L;

	cout << "Enter the number of stations in lines: " << endl;
	cin >> number;

	cout << "Enter the costs of entrying in line 1: " << endl;
	cin >> e1;
	cout << "Enter the costs of entrying in line 2: " << endl;
	cin >> e2;

	//dynamic array
	int *a1 = new int[number];
	int *a2 = new int[number];
	int *t1 = new int[number];
	int *t2 = new int[number];
	//the first value of array is 0 in all cases.
	a1[0] = 0;
	a2[0] = 0;
	t1[0] = 0;
	t2[0] = 0;

	for (int i = 1; i <= number; i++){
		cout << "Enter the costs of stations in line 1: " << endl;
		cin >> x;
		a1[i] = x;
	}
	for (int i = 1; i <= number; i++){
		cout << "Enter the costs of stations in line 2: " << endl;
		cin >> y;
		a2[i] = y;
	}
	for (int i = 1; i <= number - 1; i++){
		cout << "Enter the transfer cost from station in line 1 to line 2: " << endl;
		cin >> w;
		t1[i] = w;
	}
	for (int i = 1; i <= number - 1; i++){
		cout << "Enter the transfer cost from station in line 2 to line 1: " << endl;
		cin >> v;
		t2[i] = v;
	}

	cout << "Enter the costs of exiting line 1: " << endl;
	cin >> x1;
	cout << "Enter the costs of exiting line 2: " << endl;
	cin >> x2;

	
	FastWay(a1, a2, t1, t2,  e1, e2, x1, x2, f1, f2, L1, L2, L, number + 1);
	lane(L1, L2, L, number, f1);
	return 0;
}