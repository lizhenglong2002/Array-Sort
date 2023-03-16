#include <iostream>
using namespace std;
int main() {
	int Arr[6] = { 6,5,4,3,2,1 };
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5-i; j++) {
			if (Arr[j] > Arr[j + 1]) {
				int Temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = Temp;
			}
		}
	}
	for(int i=0;i<6;i++)
		cout <<Arr[i]<< endl;
	return 0;
}