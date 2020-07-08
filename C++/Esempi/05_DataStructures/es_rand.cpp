#include<iostream>
#include<cmath>
using namespace std;

int takeNumber(int max) {
	return rand() % max;
}

int main() {
}

int strlen(char *str) {
	int cont = 0;
	while(&str != '\0') {
		cont++;
		str++;
	}
	return cont;
}