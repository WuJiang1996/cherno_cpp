#include<iostream>
#include<thread>

//线程并行，把不同的任务分到不同的线程，主角作用是优化程序，可以同时做多件事情

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;

	std::cout << "Start thread id=" << std::this_thread::get_id() << std::endl;
	while (!s_Finished)
	{
		std::cout << "Working ...\n";
		std::this_thread::sleep_for(1s);
	}
}

//int main()
//{
//	std::thread worker(DoWork);
//
//	std::cin.get();
//	s_Finished = true;
//
//	worker.join();
//
//	std::cout << "Finished." << std::endl;
//	std::cout << "Start thread id=" << std::this_thread::get_id() << std::endl;
//	std::cin.get();
//}