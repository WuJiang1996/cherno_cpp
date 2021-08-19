#include <iostream>
#include "Log.h"

//F9 在你光标所在行设置断点

int main()
{
	int a = 8; //栈内存
	a++;
	const char* string = "Hello";

	for (int i = 0; i < 5; i++)
	{
		const char c = string[i];
		std::cout << c << std::endl;
	}
	//InitLog();
	Log("Hello World!");
	std::cin.get();
}