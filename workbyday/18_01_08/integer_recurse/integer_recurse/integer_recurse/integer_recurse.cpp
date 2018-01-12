#include "stdafx.h"
#include <iostream>
using namespace std;

int factorial(int n);


int main() {

	int val = factorial(5);

	cout << "val: " << val << endl;

	return 0;
}

int i = 0;

int factorial(int n) {
	cout << "Level " << i++ << endl;
	cout << "n: " << n << "?" << endl;

	//@pre	end check
	if (!n) {
		return (1);
	}

	//Recurse
	return (n * factorial(n - 1));

}