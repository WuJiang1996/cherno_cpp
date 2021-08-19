#include<iostream>

#define LOG(x) std::cout << x <<std::endl

void Increment0(int value)
{
	value++;
}

void Increment1(int* value)  //通过引用或者指针才能真的改变变量
{
	(*value) ++;
}

void Increment2(int& value)  //通过引用或者指针才能真的改变变量
{
	value++;
}
int main()
{
	int a = 5;
	int b = 8;


	//int* ref = &a; //这里的&是取址
	int& ref = a;  //这里是引用，注意区分引用和取址.引用又称别名，这里ref就是a的别名
	ref = 2;
	ref = b;  //在声明引用时候，必须要对其进行赋值， int& ref; 这样子是错误的

	//a = 8, b = 8

	LOG(a);  //2，ref就是a,只是a的别名

	Increment0(a);  
	LOG(a);

	Increment1(&a);  //这里传入a的地址
	LOG(a);

	Increment2(a);  //这里传入a的地址
	LOG(a);

	std::cin.get();
}