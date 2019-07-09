// 사용자로부터 총 5개의 정수를 입력 받아서 그 합을 입력하는 프로그램.
#include <iostream>

using namespace std;

int main(void) {

	int num1, num2, num3, num4, num5, sum;

	cout << "1번째 정수 입력 : ";
	cin >> num1;
	cout << "2번째 정수 입력 : ";
	cin >> num2;
	cout << "3번째 정수 입력 : ";
	cin >> num3;
	cout << "4번째 정수 입력 : ";
	cin >> num4;
	cout << "5번째 정수 입력 : ";
	cin >> num5;

	sum = num1 + num2 + num3 + num4 + num5;

	cout << "합계 : " << sum << endl;
	return 0;
}