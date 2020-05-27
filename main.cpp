#include<iostream>
using namespace std;

int main()
{
	//setlocale(0, "Russian");
	setlocale(LC_ALL, "ru");
	std::cout << "Привет Кириллу и Мефодию"<<std::endl;

	cout << "Escape-последовательность \n";
	cout << "Ещё строка \\ \' \" \n";

	bool a = 5==2;
	cout << a<< endl;

	cin << a;
}