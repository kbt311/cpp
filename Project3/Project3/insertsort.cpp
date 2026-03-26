#include "sort.h"

//直接插入排序
void insertsort(int* num, int n) {
	for (int i = 1;i < n;i++) {
		if (num[i] < num[i - 1]) {
			int temp = num[i];
			int j = i - 1;
			do {
				num[j + 1] = num[j];
				j--;
			} while (j >= 0 && temp < num[j]);
			num[j + 1] = temp;
		}
	}
}