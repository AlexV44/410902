#include <iostream>

using namespace std;

int main() {
	int k;
	cin >> k;

	double arr[10000];

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i] < arr[j]) {
				double num;
				num = arr[i];
				arr[i] = arr[j];
				arr[j] = num;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " | ";
	}

	cout << endl << arr[0] * arr[k-1] << endl;

	system("pause>nul");
	return 0;
}