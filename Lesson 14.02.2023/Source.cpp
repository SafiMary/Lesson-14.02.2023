#include <iostream>
#include <windows.h>
#include <fstream>

int func() {
	return 5;
}
void printer(int y) {
	std::cout << y << std::endl;
}
//void printer(func) {
//	std::cout << func << std::endl;
//}


class Functor {//вызвали функтор
public:
	Functor(int x) : _x(x) {}
	void operator() (int y) {
		_x = y;
	}
	int operator+(int y) {
		_x + y;
	}
private:
	int _x;
};
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Functor f(5);
	f(3);//объект ведет себя как функция
	f + 5;



	int k;
	const auto x = [] {
		return 5;
	};
	//printer(func);
	printer(k);

	std::ifstream  fin("output.txt");
	if (!fin) {
		std::cerr << "Failed to open fin\n";
	}

	std::string section;
	fin >> section;
	bool foundSection = (section[0] = '[');
	//] != section.size();
	char c = fin.get();//считали секцию
	std::string keyvalue;
	fin >> keyvalue;//считали слово
	//разделить на две строки key value
	fin.close();

	std::ofstream fout("output.txt");
	fout << section << "\n" << keyvalue << "\n";
	fout.close();



}