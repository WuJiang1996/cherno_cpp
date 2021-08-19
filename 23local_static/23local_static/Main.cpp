#include <iostream>

//单例模式
class Singleton
{
private:
	static Singleton* s_Instance;
public:
	static Singleton& Get() {return *s_Instance;}
	void Hello() {}
};

Singleton* Singleton::s_Instance = nullptr;

void Function()
{
	static int i = 0;	//局部变量
	i++;
	std::cout << i << std::endl;
}

int main()
{
	Function();//1
	Function();//2
	Function();//3
	Function();//4
	Function();//5


	Singleton::Get().Hello();

	std::cin.get();
}