#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i <= 100000000; i++) {
		if (i % 11 == 0 && i % 2 == 1 && i % 3 == 1 && i % 4 == 1
			&& i % 5 == 1 && i % 6 == 1 && i % 7 == 1 && i % 8 == 1
			&& i % 9 == 1 && i % 10 == 1) {
			cout << i;
			break;
		}
	}
}