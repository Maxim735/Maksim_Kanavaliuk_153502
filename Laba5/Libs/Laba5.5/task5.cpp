//�������� ��������� �.�.
//����������� ������� ������ ��������� ������� :
//��������� ��������, ��� m = 10t
//.
//������� ������
//������ ������ �������� ��� ����� ����� : k(0 < k < 1019), n(0 < n < 1019) � t(0 < t < 10).
//	��������� ������ �������� ��� ���� � �� ��������������.
//	�������� ������
//	��� ������� ����� � ��������� ������ ������� ����� ����� � �������� x.������ ������
//	�������� � �������.


#include <iostream>

unsigned long long func(unsigned long long x, unsigned long long y, unsigned long long n)
{
	if (!y) return 1;

	if (y & 1) return (x * func((x * x) % n, y / 2, n)) % n;

	return func((x * x) % n, y / 2, n);
}

int main() {
	unsigned long long x, y, n;

	while (true) {
		std::cout << "Enster a num of values: " << std::endl;
		std::cin >> x >> y >> n;
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
	std::cout << func(x, y, pow(10,n));

	return 0;
}