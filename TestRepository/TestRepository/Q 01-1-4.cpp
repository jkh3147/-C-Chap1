// 급여 계산 프로그램. 모든 판매원에게 매달 50만원의 기본급여 + 물품 판매 가격의 12%의 돈 지급.
// 급여의 계산은 -1이 입력될 때 까지 지속.
#include <iostream>

using namespace std;

int main(void) {
	
	int Sell=0;
	int Salary;

	while (1) {
		cout << "판매 금액을 만원 단위로 입력 : (-1 to end) : " ;
		cin >> Sell;

		if (Sell == -1) {
			cout << "프로그램을 종료합니다";
			return 0;
		}
		Salary = 50 + 0.12*Sell;

		cout << "이번 달 급여 : " << Salary << endl;

	}
	return 0;
}