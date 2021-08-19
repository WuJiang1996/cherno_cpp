#include <iostream>

struct Entity
{
	static int x, y;  //当你想要跨类使用变量时有用，跨类时你可以创建全局变量，或者直接在类里创建static，这样子变量就不会是全局的
						//如果想要在类里创建一个实例变量也是可以使用static
	//静态方法不能访问非静态变量！！！如果Print函数变为静态，x，y非静态，就会报错。原因是静态方法没有类实例
	//每一个非静态方法总是会获得当前类的一个实例作为参数
	//静态方法与在类外部编写方法相同
	void Print()
	{
		std::cout << x << "," << y << std::endl;
	}
};

int Entity::x;
int Entity::y;

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;


	//Entity e1 = { 5, 8 };  //这样初始化会失败，因为x,y已经不是类成员

	Entity e1;
	e1.x = 5;
	e1.y = 8;
	

	e.Print();  
	e1.Print();
	std::cin.get();
}