// 숫자를 하나 입력받아서 그 숫자에 해당하는 구구단 출력.
#include <iostream>

using namespace std;

int main(void) {

	int num;

	cout << "단을 입력하세요 : ";
	cin >> num;

	for (int i = 1; i < 9; i++) {
		cout << num << " X " << i << " = "<<  num * i << endl;
	}

	return 0;
}