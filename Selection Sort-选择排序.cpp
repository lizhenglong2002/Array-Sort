#include <iostream>
using namespace std;
/*简单来说，「选择排序算法」是在每一趟排序中，从未排序部分中选出一个值最小的元素，与未排序部分第 `1` 个元素交换位置，从而将该元素划分到已排序部分*/
int main() {
	int Arr[6] = { 6,5,4,3,2,1 };
	for (int i = 0; i < 6; i++) {
		int min = i;
		for (int j = i + 1; j < 6; j++) {
			if (Arr[min] > Arr[j]) {
				min = j;
			}	
		}
		if (i != min) {
			int Temp = Arr[i];
			Arr[i] = Arr[min];
			Arr[min] = Temp;
		}
	}
	return 0;
}