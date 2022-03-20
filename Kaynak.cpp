#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	srand(time(0));
	int dizi[100] = {};
	int gecici;
	for (int i = 0; i < 100; i++) {
		dizi[i] = rand() % 1000 + 1;
	}
	cout << "Normal Dizi:\n";
	for (int j = 0; j < 100; j++) {
		cout << dizi[j] << "-";
	}
	// SIRALAMA
	for (int m = 1; m < 100; m++) {
		for (int n = 0; n < 100 - m; n++) {
			if (dizi[n] > dizi[n + 1]) {
				gecici = dizi[n];
				dizi[n] = dizi[n + 1];
				dizi[n + 1] = gecici;
			}
		}
	}

	// CIKTI
	cout << "\n\nDuzenlenmis Dizi:\n";
	for (int a = 0; a < 100; a++) {
		cout << dizi[a] << "-";
	}
}