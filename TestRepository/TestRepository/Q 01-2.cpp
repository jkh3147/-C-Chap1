// 다음 main함수에서 필요로 하는 swap 함수를 오버로딩해서 구현.
#include <iostream>

using namespace std;

void swap(int*num1, int*num2);
void swap(char*ch1, char*ch2);
void swap(double*db1, double*db2);

int main(void) {

	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	cout << num1 << ' ' << num2 << endl;

	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	cout << ch1 << ' ' << ch2 << endl;

	double db1 = 1.11, db2 = 5.55;
	swap(&db1, &db2);
	cout << db1 << ' ' << db2 << endl;

	return 0;
}
void swap(int *num1, int *num2) {
	int tmp;
	tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}void swap(char *ch1, char *ch2) {
	char tmp;
	tmp = *ch1;
	*ch1 = *ch2;
	*ch2 =tmp;
}void swap(double *db1, double *db2) {
	double tmp;
	tmp = *db1;
	*db1 = *db2;
	*db2 = tmp;
}