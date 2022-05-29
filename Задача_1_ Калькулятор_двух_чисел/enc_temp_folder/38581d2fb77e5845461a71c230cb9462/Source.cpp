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

	double add() //����� ������ ���������� ��������� �������� num1 � num2
	{
		return num1 + num2;
	}
	double multiply() //����� ������ ���������� ��������� ������������ num1 � num2
	{
		return num1 * num2;
	}
	double subtract_1_2() // ����� ������ ���������� ��������� ��������� num2 �� num1
	{
		return num2 - num1;
	}
	double subtract_2_1() // ����� ������ ���������� ��������� ��������� num1 �� num2
	{
		return num1 - num2;
	}
	double divide_1_2() //����� ������ ���������� ��������� ������� num1 �� num2
	{
		return num1 / num2;
	}
	double divide_2_1() //����� ������ ���������� ��������� ������� num2 �� num1
	{
		return num2 / num1;
	}
	bool set_num1(double num1) //v���� ������ ���������� �������� ���� num1 ������ �������� ��������� num1 � ������, ���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������, � �������� ������ false
	{
		if (num1 !=0) 
		{
			this->num1 = num1;
		}
		return (num1 == 0) ? false : true ;
	}
	bool set_num2(double num2) //����� ������ ���������� �������� ���� num2 ������ �������� ��������� num2 � ������, ���� �������� ��������� �� ����� 0. ���������� true, ���� ��������� ��������� �������, � �������� ������ false
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
		std::cout << "������� num1:" << std::endl;
		std::cin >> num11;
	
		if (!MyCalculator.set_num1(num11))
		{
			std::cout << "�������� ����!" << std::endl;
			continue;
		}
	
		if (MyCalculator.set_num1(num11))
		{
			break;
		}
	}

	
	for (;;) 
	{
		std::cout << "������� num2:" << std::endl;
		std::cin >> num22;

		if (!MyCalculator.set_num2(num22)) 
	{
			std::cout << "�������� ����!" << std::endl;
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

	//std::cout << "������� num1:" << std::endl;
	//std::cin >> MyCalculator.num1;
	//std::cout << "������� num2:" << std::endl;
	//std::cin >> MyCalculator.num2;


	//std::cout<<MyCalculator.set_num1(num11)<<" Suum: "<<MyCalculator.add();

}