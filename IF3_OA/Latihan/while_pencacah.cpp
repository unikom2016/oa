#include <iostream>
using namespace std;

int main() {
	int i = 0;
	int *bil = new int[];
	while not (eof(input)) {
		cin >> bil;
		i += 1;
	}
	for (int j = 0; j < i; j++) {
		cout << bil[j];
	}
}