#include <iostream>

int s_Variable = 10;

//extern int s_Variable;  ���ڷ��뵥Ԫ֮��Ѱ��s_Variable����

int main()
{
	std::cout << s_Variable << std::endl;
	std::cin.get();
}