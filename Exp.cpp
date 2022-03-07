/*
Math225 HW 1 Extra credit program
2 approximations of exponantial function
*/

#include <new>
#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <vector>
#include <locale>

using namespace std;

int factorial(int n);

int main() {

	int n = 0;
	int x = 0;
	double answer = 0;
	double power=0;
	double fac = 0;

	cout << "Please, enter your n" << endl;
	cin >> n;
	cout << "Please, enter your x" << endl;
	cin >> x;

	for (int i = 0; i <= n; i++) {
		if (i % 2 == 1) {
			power = pow(x, i);
			fac = factorial(i);
			answer = answer - power / fac;
		}
		else {
			power = pow(x, i);
			fac = factorial(i);
			answer = answer + power / fac;
		}
	}
	cout << "Approximation 1: ";
	cout << answer << endl;

	answer = 0;
	
	for (int i = 0; i <= n; i++) {
		power = pow(x, i);
		fac = factorial(i);
		answer = answer + power / fac;
	}
	answer = 1 / answer;

	cout << "Approximation 2: ";
	cout << answer << endl;

	return 0;
}

int factorial(int n)
{

	// single line to find factorial 
	return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}