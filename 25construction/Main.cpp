#include <iostream>


//比如在对上面分配的对象，就需要手动清理，就需要析构函数
class Entity
{
public:
	float x, y;

	Entity()   //构造函数
	{
		x = 0.0f;
		y = 0.0f;
		std::cout << "Create Entity!" << std::endl;
	}

	Entity(float X, float Y)   //构造函数
	{
		x = X;
		y = Y;
	}

	~Entity()   //构造函数
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	/*void Init()
	{
		x = 0.0f;
		y = 0.0f;
	}*/

	void Print()
	{
		std::cout << x << "," << y << std::endl;
	}
};


//还有复制构造函数，移动构造函数
//构造函数是一个特殊的方法，在你创建类实例时候运行，初始化类
//class Log
//{
//private:
//	Log() {}  
//public:
//	Log() = delete;  //删除默认构造函数
//	static void Write()
//	{
//	
//	}
//};

void Function()
{
	Entity e;
	e.Print();
}

int main()
{
	
	//Entity e;
	////e.Init();
	//std::cout << e.x << std::endl;
	//e.Print();
	//Entity e1(10.0f, 5.8f);

	//Log::Write();
	//Log l; //把构造函数写成privat，外界就不能初始化对象了

	Function();

	std::cin.get();
}