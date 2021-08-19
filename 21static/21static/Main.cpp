#include <iostream>

int s_Variable = 10;

//extern int s_Variable;  将在翻译单元之外寻找s_Variable变量

int main()
{
	std::cout << s_Variable << std::endl;
	std::cin.get();
}