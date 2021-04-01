#include <iostream>
#include <string>

using namespace std;

class Thing
{ 
public:
	Thing(){}
	virtual ~Thing(){cout<<"Thing destructor"<<endl;}
	virtual void what_Am_I() {cout << "I am a Thing.\n";}
};

class Animal : public Thing
{  
public:
	Animal(){}
	~Animal(){cout<<"Animal destructor"<<endl;}
	void what_Am_I() {cout << "I am an Animal.\n";}
};

int main( )
{
   Thing *t =new Thing;      
   Animal*x = new Animal;
   Thing* array[2];
   array[0] = t;                                // base pointer
   array[1] = x;               
   for (int i=0; i<2; i++)
   {
		array[i]->what_Am_I();
   }
   delete array[0];
   delete array[1];
   return 0;
}
