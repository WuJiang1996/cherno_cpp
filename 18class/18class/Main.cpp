#include<iostream>

class Player  //�������͹��ɵı�����Ϊ�����µĶ����Ϊʵ��
{
public:
	int x, y;
	int speed;

	void move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
}; //ע����Ҫһ���ֺ������β


int main()
{
	Player player;
	//player.x = 5;
	//Move(player, 1, -1);
	player.move(1, -1);

	std::cin.get();

}