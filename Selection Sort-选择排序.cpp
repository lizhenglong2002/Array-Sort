#include <iostream>
using namespace std;
/*����˵����ѡ�������㷨������ÿһ�������У���δ���򲿷���ѡ��һ��ֵ��С��Ԫ�أ���δ���򲿷ֵ� `1` ��Ԫ�ؽ���λ�ã��Ӷ�����Ԫ�ػ��ֵ������򲿷�*/
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