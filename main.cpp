#include <iostream>
#include "world.h"

bool main_time(int hour)
{
	return !(hour >= 10 && hour <= 22);	
}

int main()
{
	int hour = 0;
	std::cout << "Hello my friend i am a frog my name is Bully welcome to my world" << std::endl; 
	std::cout << "Please enter a number between 1-24" << std::endl;
	std::cin >> hour;
	Animal frog;
	Light sun;
	AIR tree;
	if (main_time(hour))
	{
		frog.sleep(hour);
		tree.create(&sun, &Light::shine_count);
		frog.breathes(&tree, &AIR::count_of_o2);
		frog.eat(hour);
		hour += 10;
	}
	frog.sleep(hour);
}
