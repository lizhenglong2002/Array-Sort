#include <iostream>
using namespace std;
//���������з�Ϊ�����֣�ǰ�� `i` ��Ԫ��Ϊ�������У����� `n - i` ��Ԫ��Ϊ�������С�ÿһ�����򣬽��������еĵ� `1` ��Ԫ�أ��������������ҵ���Ӧ��λ�ò����롣
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
