#include "12.hh"
#include "Zoo.hh"

#include <cstdio>
#include <iostream>

int GoodWork = 0x77;

enum Type {
	Person,
	Animal
};

struct Animal;

struct Person
{
    const char* name;
    const int age;
};

void hard_work();
void chicken_and_egg();
void pets();

void hard_work()
{
    prepare_one();
	work_one();
    GoodWork = 0xEE;
	prepare_two();
	work_two();
}



void chicken_and_egg()
{
    using Zoo::Chicken;
    typedef Zoo::Egg Egg;
	Chicken chicken;
	Egg egg;
	chicken.creator = &egg;
	egg.creator = &chicken;
    Egg* e = chicken.getCreator();
    Chicken* c = egg.getCreator();
    if( chicken.creator == c->creator
        && egg.creator == e->creator )
	{
		using namespace std;
		cout << "the `Chicken and Egg' dilemma is solved!" << endl;
	}
}



void pets()
{
	using namespace Zoo;
	Cat cat;
	Dog dog;
	Pet & myCat = cat;
	Pet & myDog( dog );
	printf( "myCat says `%s', gnows %sthing and has %d lifes\n" ,
		myCat.say() , myCat.gnaw() ? "no" : "every" , myCat.lifes() );
    printf( "myDog says `%s', gnows %sthing and has %d lifes\n" ,
		myDog.say() , myDog.gnaw() ? "no" : "every" , myDog.lifes() );
}

int main( [[maybe_unused]] int argc, [[maybe_unused]] char* argv[] )
{
    Type type = argc ? Person : Animal;
    if( Person == type )
        [[maybe_unused]] struct Person fry = { "Fry" , 26 };

    hard_work();
    chicken_and_egg();
    pets();
}
