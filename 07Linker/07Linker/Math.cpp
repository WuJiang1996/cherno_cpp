#include<iostream>
#include "Log.h"

//void Log(const char* message);  //声明

//static表示Multiply函数只会在Math.cpp文件中只用，不会在别的cpp文件中被调用

//inline函数作用是获取我们实际函数体并将函数调用替换为函数体

int Multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}

int main()
{
	std::cout << Multiply(5, 8) << std::endl;
	std::cin.get();
}