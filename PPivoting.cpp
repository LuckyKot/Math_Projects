/*
Math225 HW 4 Extra credit program
Partial Pivoting
*/

#include <new>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <vector>
#include <locale>

using namespace std;


int main() {
	
	int k = 0;
	double temp = 0;

	double system[5][6] = { 5, 9, 8, 1, 10, 40,
						3, 11, -12, 13, -3, 21,
						4, 8, 2, 9, 9, 60,						-1, -2, 2, 4, 6, 32,
						8, 9, -10, 13, -14, 28};

	
	for (int l = 1; l < 5; l++)
	{
		for (int i = l; i < 5; i++)
		{
			temp = (system[i][k]) / (system[k][k]);
			for (int j = 0; j < 6; j++)
			{
				system[i][j] = system[i][j] - temp * system[k][j];
			}
		}
		k++;
	}
	//This loop does the first operation, meaning it reduces the system to an upper triangular one

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << setw(5) << setprecision(3) << system[i][j] << " ";
		}
		cout << endl;
	}
	//This loop prints the output system

	cout << endl;

	for (int l = 3; l >=0 ; l--)
	{
		for (int i = l; i >= 0; i--)
		{
			temp = (system[i][k]) / (system[k][k]);
			for (int j = 0; j < 6; j++)
			{
				system[i][j] = system[i][j] - temp * system[k][j];
			}
		}
		k--;
	}
	//This loop does the second operation, it reduces the system to a diagonal system

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << setw(5) << setprecision(3) << system[i][j] << " ";
		}
		cout << endl;
	}
	//This loop prints the output system again

	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "x" << i + 1 << " = " << system[i][5] / system[i][i] << endl;
	}


	return 0;
}