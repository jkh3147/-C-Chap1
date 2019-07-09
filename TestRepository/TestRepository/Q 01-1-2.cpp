// 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서 그대로 출력하는 프로그램.
#include <iostream>

using namespace std;

int main(void) {

	char name[20];
	char phone[20];

	cout << "사용자의 이름을 입력하세요 : ";
	cin >> name;
	cout << "사용자의 전화번호를 입력하세요 : ";
	cin >> phone;

	cout << "사용자 이름 : " << name << endl;
	cout << "사용자 전화번호 : " << phone << endl;

	return 0;
}