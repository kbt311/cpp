#include "sort.h"

//归并排序
void mergesort(int* num, int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		mergesort(num, left, mid);
		mergesort(num, mid + 1, right);
		merge(num, left, mid, right);
	}
}
void merge(int* num, int left, int mid, int right) {
	int* temp = new int[right - left + 1];
	int i = left;
	int j = mid + 1;
	int k = 0;
	while (i <= mid && j <= right) {
		if (num[i] <= num[j]) {
			temp[k++] = num[i++];// 等价于 temp[k] = num[i]; k++; i++;
		}
		else {
			temp[k++] = num[j++];
		}
	}
	while (i <= mid) temp[k++] = num[i++];
	while (j <= right) temp[k++] = num[j++];
	for (i = left, k = 0;i <= right;i++, k++) {
		num[i] = temp[k];
	}
	delete[]temp;
}