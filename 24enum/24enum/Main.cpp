#include <iostream>

enum Example : char   //可以指定类型，但是必须是整数
{
	A = 0, B = 2, C = 6
};  //不指定ABC值就会从0开始，0，1，2。如果指定就是指定的值，第一个指定后面没指定就从第一个开始递增

//int a = 0;
//int b = 1;
//int c = 2;

int main()
{
	Example value = B;

	std::cin.get();
}