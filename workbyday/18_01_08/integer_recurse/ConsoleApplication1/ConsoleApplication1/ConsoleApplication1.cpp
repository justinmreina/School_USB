// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void revPrint(char *cStr);


char *cstr = "Hello World";

int main(void) {

	revPrint(cstr + 1);

    return 0;
}

void revPrint(char *cStr) {

	if (*cStr == '\0') {
		cout << "End of String" << endl;
		return;
	}
	else {
		revPrint(cstr + 1);
		cout << *cstr;
	}

}


/*

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

*/