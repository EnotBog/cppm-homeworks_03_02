#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <windows.h>
#include <locale.h>

class Calculator
{
public:
	
	double num1;
	double num2;

	Calculator ()
{}

	double add() //метод должен возвращать результат сложени€ num1 и num2
	{
		return num1 + num2;
	}
	double multiply() //метод должен возвращать результат перемножени€ num1 и num2
	{
		return num1 * num2;
	}
	double subtract_1_2() // метод должен возвращать результат вычитани€ num2 из num1
	{
		return num2 - num1;
	}
	double subtract_2_1() // метод должен возвращать результат вычитани€ num1 из num2
	{
		return num1 - num2;
	}
	double divide_1_2() //метод должен возвращать результат делени€ num1 на num2
	{
		return num1 / num2;
	}
	double divide_2_1() //метод должен возвращать результат делени€ num2 на num1
	{
		return num2 / num1;
	}
	bool set_num1(double num1) //vетод должен установить значение пол€ num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. ¬озвращает true, если установка произошла успешно, в обратном случае false
	{
		if (num1 !=0) 
		{
			this->num1 = num1;
		}
		return (num1 == 0) ? false : true ;
	}
	bool set_num2(double num2) //метод должен установить значение пол€ num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. ¬озвращает true, если установка произошла успешно, в обратном случае false
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
		std::cout << "¬ведите num1:" << std::endl;
		std::cin >> num11;
	
		if (!MyCalculator.set_num1(num11))
		{
			std::cout << "Ќеверный ввод!" << std::endl;
			continue;
		}
	
		if (MyCalculator.set_num1(num11))
		{
			break;
		}
	}

	
	for (;;) 
	{
		std::cout << "¬ведите num2:" << std::endl;
		std::cin >> num22;

		if (!MyCalculator.set_num2(num22)) 
	{
			std::cout << "Ќеверный ввод!" << std::endl;
			continue;
	} std::cout <<  std::endl;
		if (MyCalculator.set_num2(num22))
		{
			break;
		}
	
	}

	std::cout << MyCalculator.add() <<std::endl 
		      << MyCalculator.multiply() << std::endl 
			  << MyCalculator.subtract_1_2() << std::endl 
			  << MyCalculator.subtract_2_1() << std::endl
			  << MyCalculator.divide_1_2() << std::endl
			  <<MyCalculator.divide_2_1() << std::endl;
}

	//while(MyCalculator.set_num1(num11)&&MyCalculator.set_num2(num22))

	//std::cout << "¬ведите num1:" << std::endl;
	//std::cin >> MyCalculator.num1;
	//std::cout << "¬ведите num2:" << std::endl;
	//std::cin >> MyCalculator.num2;


	//std::cout<<MyCalculator.set_num1(num11)<<" Suum: "<<MyCalculator.add();

}