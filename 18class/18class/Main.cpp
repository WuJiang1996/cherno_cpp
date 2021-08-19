#include<iostream>

class Player  //由类类型构成的变量成为对象，新的对象成为实例
{
public:
	int x, y;
	int speed;

	void move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
}; //注意需要一个分号在类结尾


int main()
{
	Player player;
	//player.x = 5;
	//Move(player, 1, -1);
	player.move(1, -1);

	std::cin.get();

}