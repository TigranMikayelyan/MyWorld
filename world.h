class Light
{
public: 
	Light()
	{
		shine = 40;
	}
public:
	int shine_count();
private:
	int shine;
};

class AIR
{
public:
	AIR()
	{
		O2 = 0;
	}
public:
	int count_of_o2();
	void create(Light* ob_name, int(Light::*ptr)());
private:
	int O2;
};

class Animal
{
public:
	Animal()
	{
		stomach = 0;
		grass = 1 + rand() % 123;
	}
public:
	void eat(int);
	bool sleep(int);
	void breathes(AIR*, int(AIR::*ptr)());
	void print();
	bool shine(int);
private:
	int stomach;
	int grass;
};
