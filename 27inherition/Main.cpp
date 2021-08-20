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

class Player : public Entity  //�̳У�Playerʵ�����Է���Entity������public����
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