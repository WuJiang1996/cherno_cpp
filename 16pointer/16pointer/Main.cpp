#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
	//使用new在堆上创建内存
	char* buffer = new char[8]; //创建一个8位的字符串，并把地址返回给buffer,buffer指向字符数组的开头
	memset(buffer,0, 8);   //给指定的内存块填充数据

	char** ptr = &buffer; //指针的指针
	delete[] buffer;

	//下面的代码是在栈上面创建内存
	//int var = 8;
	////void* ptr = &var; //需要理解的是指针保存的只是地址而已，和指针是什么类型无关
	//int* ptr = &var;
	//*ptr = 10;   //逆向引用指针，可以直接修改原内存数据。
	//LOG(var);
	////double* ptr = (double*)&var;
	////void* ptr = nullptr; //无类型，内存地址是0，空指针，不能读或者写入任何东西
	std::cin.get();
}