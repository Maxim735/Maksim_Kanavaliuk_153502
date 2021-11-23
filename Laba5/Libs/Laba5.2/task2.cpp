//��� ��������� ����������� ������� B �� N ��������� ����� ���������� ���������
//�������, ��� ������� ����������� �������
//(cos 0) (0)
//2 Bi Bi
//.�����������
//������� ��������� ������ ��� �������� ��� ������ ����� ������� � ��� ���������
//�����(2 / 3) �������.����������� ������ �����������, ����� ��������� ������ ����
//��� ��� ��������.��������, ��� N = 6:

#include <iostream>
#include <Windows.h>

//int elements(int* a, int N, int& sum);

int main() {
	HINSTANCE load;
	load = LoadLibrary(L"DynLib.dll");
	typedef int (*elements) (int*, int, int&);
	int n, k;
	int sum = 0;
	elements elem;
	elem = (elements)GetProcAddress(load, "elements");
	std::cout << "Input n && k" << std::endl;
	std::cin >> n >> k;
	int* B = new int[n];
	for (int i = 0; i < k; i++) {
		std::cin >> B[i];
	}

	elem(B, n / 3, sum);
	//int answer = sum;
	elem(B, n, sum);
	//answer += sum;

	std::cout << "Answer: " << sum;
	delete[] B;

	FreeLibrary(load);
	return 0;

}