//�������� ��������� ������ 153502
//10. ��������� ��������� ���������� �������� ��������� �����������
//������������� �������(�������) X = x0, x2, �, xn �� ������� :
//arctg(0, 1)
//,
//���
//i 0, 1, ..., n.
//����������� ������� ������ � ����������.����������� �������� �������
//������� �� ����� .
//������������� ���������� ������ �� ���������� ������� : ��� �������������
//�������� ��������� �� 0, 5, � ��� ������������� �������� �� 0, 1. ���������������
//������ ����� ������� �� �����.������������ �������.
//�������� ������ : n = 13.

#include <iostream>
#include <cmath>

int array(double* x, int n);

int main() {
	int n;
	while (true) {
		std::cout << "Input n: " << std::endl;
		std::cin >> n;
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
	double* x = new double[n + 1];
	array(x, n + 1);
	std::cout << std::endl << std::endl;
	std::cout << "New array: ";
	for (int i = 0; i < n; i++) {
		std::cout << x[i] << " ";
	}
	delete[] x;
	return 0;
}
 
int array(double* x, int n) {
	std::cout << "Array: ";
	for (int i = 0; i < n; i++) {
		x[i] = exp(-0.5 * i - 2 * 3.14159) - atan(i + 0.1);
		std::cout << x[i] << " ";
		if (x[i] < 0)
			x[i] += 0.5;
		else if (x[i] > 0)
			x[i] = 0.1;
	}
	return 0;
}