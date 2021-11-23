//�������� ��������� �.�. 153502
//��������� ��������� ����������� ������� F(n):
//	��������� ������� S(p, q) ��������� �������:
//�� �������� p � q ���������� ��������� S(p, q).

#include <iostream>
#include "..\StaticLib\Header.h"

int main() {
	int p, q, sum = 0;
	std::cout << "Input p & q: " << std::endl;
	while (true) {
		std::cout << "Enter a num of values: " << std::endl;
		std::cin >> p >> q;
		if (std::cin.get() != '\n') {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "That input is invalid. Try again" << std::endl;
		}
		else {
			std::cin.ignore(32767, '\n');
			break;
		}
	}
	std::cout << S(p, q, sum);

	return 0;
}