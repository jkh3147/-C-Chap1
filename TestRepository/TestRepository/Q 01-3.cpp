// DefaultValue3.cpp에 정의된 함수 BoxVolume를 매개변수의 디폴트 값지정 형태가 아닌 함수 오버로딩 형태로 구현.

#include<iostream>

int BoxVolume(int length, int width = 1, int height = 1);

int main()
{
	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
	//	std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;  
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length * width*height;
}

int BoxVolume(int length) {
	return length * 1*1;
}
int BoxVolume(int length, int width) {
	return length * width * 1;
}
int BoxVolume(int length, int width, int height) {
	return length* width* height;
}