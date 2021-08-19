#include<iostream>

struct  Entity
{
	int x, y;
};

//int main()
//{
//	//可以通过找到对应的内存地址来操作改内存，这么做的作用是不会在复制内存从而直接在原内存做想要的操作
//	Entity e = { 5, 8 };
//
//	int* position = (int*)&e;
//
//	int y = *(int*)((char*)&e + 4);
//	std::cout << y << std::endl;
//
//	std::cin.get();
//}