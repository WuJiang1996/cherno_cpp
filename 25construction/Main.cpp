#include <iostream>


//�����ڶ��������Ķ��󣬾���Ҫ�ֶ���������Ҫ��������
class Entity
{
public:
	float x, y;

	Entity()   //���캯��
	{
		x = 0.0f;
		y = 0.0f;
		std::cout << "Create Entity!" << std::endl;
	}

	Entity(float X, float Y)   //���캯��
	{
		x = X;
		y = Y;
	}

	~Entity()   //���캯��
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


//���и��ƹ��캯�����ƶ����캯��
//���캯����һ������ķ��������㴴����ʵ��ʱ�����У���ʼ����
//class Log
//{
//private:
//	Log() {}  
//public:
//	Log() = delete;  //ɾ��Ĭ�Ϲ��캯��
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
	//Log l; //�ѹ��캯��д��privat�����Ͳ��ܳ�ʼ��������

	Function();

	std::cin.get();
}