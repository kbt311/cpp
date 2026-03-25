#include <iostream>
#include "sort.h"
using namespace std;

int main() {
	int n;
	cin >> n;
	int* num = new int[n];
	for (int i = 0;i < n;i++) {
		cin >> num[i];
	}
	//bubblesort(num, n);
	//quicksort(num, 0, n - 1);
	//mergesort(num, 0, n - 1);
	for (int i = 0;i < n;i++) {
		cout << num[i] << " ";
	}
	delete[]num;
	return 0;
}