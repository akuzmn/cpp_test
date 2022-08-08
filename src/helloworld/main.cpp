#include <iostream>
#include <thread>
#include <chrono>

int main(int argc, char** argv)
{
	std::string str = "hello World";
	char c = 'r';
	for (int i = 0; i < 10; i++)
	{
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << c << " " << str << std::endl;
	}
	return 0;
}
