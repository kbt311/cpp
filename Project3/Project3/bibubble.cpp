#include "sort.h"

//双向冒泡排序
void bibubblesort(int* num, int n) {
	int left = 0, right = n - 1;
	while (left < right) {
		bool flag = false;
		for (int i = left;i < right;i++) {
			if (num[i] > num[i + 1]) {
				int temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
				flag = true;
			}
		}
		right--;
		if (!flag) break;
		flag = false;
		for (int i = right;i > left;i--) {
			if (num[i] < num[i - 1]) {
				int temp = num[i];
				num[i] = num[i - 1];
				num[i - 1] = temp;
				flag = true;
			}
		}
		left++;
		if (!flag) break;
	}
}