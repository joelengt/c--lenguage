#include <iostream>

using namespace std;

bool comprobador = false;

int n1, n2, n3, n4;

int main() { 

	cout << "Itecion while" << endl;

	int i = 0;

	while(i <= 20) {
	 	cout << i <<endl;
	 	i++;
	}


	cout << "Iteracion do while" << endl;
	// do while
	int j = 0;

	do {
		cout << j << endl;
		j++;
	} while(j <= 5);


	cin.get();
	return 0;
}
