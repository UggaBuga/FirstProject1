#include<iostream>
using namespace std;

int main()
{
	//setlocale(0, "Russian");
	setlocale(LC_ALL, "ru");
	std::cout << "������ ������� � �������"<<std::endl;

	cout << "Escape-������������������ \n";
	cout << "��� ������ \\ \' \" \n";

	bool a = 5==2;
	cout << a<< endl;

	cin << a;
}