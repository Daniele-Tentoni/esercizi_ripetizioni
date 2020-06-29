#include<iostream>
#include<cmath>
using namespace std;

// Return the number of max possibile tries.
double getTriesNum(int num) {
	if(num < 0)
		return -1;

	return sqrt(num);
}

// Take a number between start and end.
int takeNumber(int start, int end) {
	return (end + start) / 2;
}

/*
 * Perché ho dichiarato gli argomenti in questo modo?
 */
void updateSolution(int i, int *start, int *end) {
	char res;
	cout << "E' maggiore o inferiore? (+/-)" << endl;
	cin >> res;
	cout << res;
	if(res == '+')
		*start = i;
	else
		*end = i;
}

int main() {
	int num;
	cout << "Dimmi un tetto massimo e ti indovino un numero positivo inferiore ad esso... " << endl;
	cin >> num;

	double tries = getTriesNum(num);
	cout << "Te lo indovino al massimo in " << tries << " tentativi." << endl;

	char opt = 'n';
	int start = 0, end = num;
	do {
		int i = takeNumber(start, end);
		cout << "Il tuo numero e' " << i << "? (s/n)" << endl;
		cin >> opt;
		if(opt == 'n') {
			updateSolution(i, &start, &end);
		}
	} while (opt != 's' && tries > 0);

	if(tries == 0)
		cout << "Ho fatto una figuraccia" << endl;
	else if(opt == 's')
		cout << "Sono stato bravissimo." << endl; 
}