#include <iostream>
using namespace std;
//将整个序列分为两部分：前面 `i` 个元素为有序序列，后面 `n - i` 个元素为无序序列。每一次排序，将无序序列的第 `1` 个元素，在有序序列中找到相应的位置并插入。
int main() {
	int A[6] = { 6,5,4,3,2,1 };
	for (int i = 1; i < 6; i++) {
		int j = i;
		int Temp = A[i];
		while (j > 0 && A[j - 1] > Temp)
		{
			A[j] = A[j - 1];
			j--;
		}
		A[j] = Temp;
	}
	for (int h = 0; h < 6; h++) {
		cout << A[h] << endl;
	}
	return 0;
}
