#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <locale.h>

class Counter 
{
public:
	int counter;
	Counter() {}

	void up_counter()    { counter++;}
	void down_counter()  { counter--;}
	void print_counter() { std::cout << counter << std::endl; }
private:


		
};

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	std::string yes = "да"; 
	std::string no = "нет";
	std::string stop = "х";
	std::string buff_console;
	std::string up_c = "+";
	std::string down_c = "-";
	std::string show_c = "=";


	Counter counter1;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";std::cin >> buff_console; 
	if (buff_console == yes) { std::cout << "Введите начальное значение счётчика: " << std::endl; std::cin >> counter1.counter; 
	}
	else 
	{ counter1.counter = 0; }

	while (true)
	{
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> buff_console;
		if (buff_console == stop)	{ std::cout << "До свидания!"; break; }
		else if (buff_console == up_c)	{ counter1.up_counter(); }
		else if (buff_console == down_c) { counter1.down_counter(); }
		else if  (buff_console == show_c) { counter1.print_counter(); }
		else { std::cout << "неизвестная команда" << std::endl; continue; }
			}


	/*	+: увеличьте счётчик на 1
		- : уменьшите счётчик на 1
		= : выведите текущее значение счётчика
		x : завершите работу программы*/


}