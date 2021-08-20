#include <iostream>

class Entity
{
public:
	float x, y;

	void Move(float xa, float ya)
	{
		x += xa;
		y += ya;
	}
};

class Player : public Entity  //继承，Player实例可以访问Entity中所有public内容
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name << std::endl;
	}
};

int main()
{
	std::cout << sizeof(Player) << std::endl;
	Player player;
	player.Move(5, 5);
	player.x = 2;
	player.y = 5;

	std::cin.get();
}