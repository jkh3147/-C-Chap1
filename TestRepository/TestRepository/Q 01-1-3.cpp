// ���ڸ� �ϳ� �Է¹޾Ƽ� �� ���ڿ� �ش��ϴ� ������ ���.
#include <iostream>

using namespace std;

int main(void) {

	int num;

	cout << "���� �Է��ϼ��� : ";
	cin >> num;

	for (int i = 1; i < 9; i++) {
		cout << num << " X " << i << " = "<<  num * i << endl;
	}

	return 0;
}