#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <locale.h>

class Calculator
{
		
	double num1;
	double num2;

public:
Calculator (){}

	double add() //метод должен возвращать результат сложения num1 и num2
	{
		return num1 + num2;
	}
	double multiply() //метод должен возвращать результат перемножения num1 и num2
	{
		return num1 * num2;
	}
	double subtract_1_2() // метод должен возвращать результат вычитания num2 из num1
	{
		return num2 - num1;
	}
	double subtract_2_1() // метод должен возвращать результат вычитания num1 из num2
	{
		return num1 - num2;
	}
	double divide_1_2() //метод должен возвращать результат деления num1 на num2
	{
		return num1 / num2;
	}
	double divide_2_1() //метод должен возвращать результат деления num2 на num1
	{
		return num2 / num1;
	}
	bool set_num1(double num1) //vетод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
	{
		if (num1 !=0) 
		{
			this->num1 = num1;
		}
		return (num1 == 0) ? false : true ;
	}
	bool set_num2(double num2) //метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
	{
		if (num2 != 0) 
		{
			this->num2 = num2;
		}
		return (num2 == 0) ? false : true;
	}

};

int main()

{
setlocale(LC_ALL, "Russian");
system("chcp 1251"); 

double num11, num22;
	

	Calculator MyCalculator;


for(;;)
{
	for(;;)
	{
		std::cout << "Введите num1:" << std::endl;
		std::cin >> num11;
	
		if (!MyCalculator.set_num1(num11))
		{
			std::cout << "Неверный ввод!" << std::endl;
			continue;
		}
	
		if (MyCalculator.set_num1(num11))
		{
			break;
		}
	}

	for (;;) 
	{
		std::cout << "Введите num2:" << std::endl;
		std::cin >> num22;

		if (!MyCalculator.set_num2(num22)) 
	{
			std::cout << "Неверный ввод!" << std::endl;
			continue;
	} std::cout <<  std::endl;
		if (MyCalculator.set_num2(num22))
		{
			break;
		}
	
	}

	std::cout	<< "num1 + num2 = " << MyCalculator.add() << std::endl
				<< "num1 - num2 = " << MyCalculator.multiply() << std::endl
				<< "num2 - num1 = " << MyCalculator.subtract_1_2() << std::endl
				<< "num1 * num2 = " << MyCalculator.subtract_2_1() << std::endl
				<< "num1 / num2 = " << MyCalculator.divide_1_2() << std::endl
				<< "num2 / num1 = " << MyCalculator.divide_2_1() << std::endl;
}

	

}