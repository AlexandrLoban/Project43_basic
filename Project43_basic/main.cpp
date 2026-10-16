#include <iostream>
using namespace std;

int get_tails(int number) {
	int tail = 0;

	for (int i = 0; i < number; i++) {
		if (rand() % 2 == 1) {
			tail++;
		}
	}
	return tail;
}

int main() {
	srand(time(NULL));
	int number = 1000;
	int heads, tails;

	tails = get_tails(number);
	heads = number - tails;
	cout << "tails - " << tails << " heads - " << heads << "\n";


	return 0;
}

