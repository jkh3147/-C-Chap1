// �޿� ��� ���α׷�. ��� �Ǹſ����� �Ŵ� 50������ �⺻�޿� + ��ǰ �Ǹ� ������ 12%�� �� ����.
// �޿��� ����� -1�� �Էµ� �� ���� ����.
#include <iostream>

using namespace std;

int main(void) {
	
	int Sell=0;
	int Salary;

	while (1) {
		cout << "�Ǹ� �ݾ��� ���� ������ �Է� : (-1 to end) : " ;
		cin >> Sell;

		if (Sell == -1) {
			cout << "���α׷��� �����մϴ�";
			return 0;
		}
		Salary = 50 + 0.12*Sell;

		cout << "�̹� �� �޿� : " << Salary << endl;

	}
	return 0;
}