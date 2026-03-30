#include "sort.h"

//简单选择排序
void selectsort(int* num, int n) {
	for (int i = 0;i < n - 1;i++) {
		int k = i;
		for (int j = i + 1;j < n;j++) {
			if (num[j] < num[k]) k = j;
		}
		if (k != i) {
			int temp = num[i];
			num[i] = num[k];
			num[k] = temp;
		}
	}
}