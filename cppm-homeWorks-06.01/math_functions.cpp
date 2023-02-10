#include <iostream>
#include "Header.h"

void addition(int a, int b) {
	std::cout << a + b;
}

void subtraction(int a, int b) {
	std::cout << a - b;
}

void multiplication(int a, int b) {
	std::cout << a * b;
}

void division(int a, int b) {
	std::cout << a / b;
}

void exponentiation(int a, int b) {
	int temp = a;
	for (int i = 1; i < b; i++) {
		a *= temp;
	}
	std::cout << a;
}