#include <iostream>
#include "world.h"
#include <chrono>
#include <thread>

void waiting()
{
    for (int i = 0; i < 30; ++i)
    {
        std::cout << "- ";
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << std::endl;
}

bool time(int hour)
{
	return (hour >= 10 && hour <= 22);	
}

void Animal::print()
{
	std::cout << stomach << std::endl; 
	std::cout << grass << std::endl;
}

void Animal::eat(int hour)
{
	waiting();
	std::cout << "I am very hungry and now i am eating grass" << std::endl;
	if (time(hour))
	{
		while (grass)
		{
			++stomach;
			--grass;
		}
	}
	waiting();
	std::cout << "I ate my grass and now i am very happy" << std::endl;
}

bool Animal::sleep(int hour)
{
	if (time(hour))
	{
		waiting();
		std::cout << "It got dark and i must go to sleep goodbye my friend i hope that we meet 🖖🏿" << std::endl;
		return true;
	}
	else
	{
		std::cout << "It's daytime and i need oxygen" << std::endl;
		return false;
	}
	return false;
}

void Animal::breathes(AIR* tree, int(AIR::*ptr)())
{
	int air_count = tree->count_of_o2();
	if (air_count)
	{
		air_count--;
	}
}

int Light::shine_count()
{
	return shine;
}

int AIR::count_of_o2()
{
	return O2;
}

void AIR::create(Light* sun, int(Light::*ptr)())
{
    int out_light_count = sun->shine_count();
    while (out_light_count)
    {
        this->O2 += 2;
        out_light_count--;
    }
	waiting();
	std::cout << "Thank the tree for giving me oxygen: I accepted oxygen" << std::endl;
}
