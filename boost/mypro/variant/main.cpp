#include <boost/variant.hpp>
#include <string>
#include <iostream>


int main()
{
	boost::variant<double,char,std::string> v;
	v = 3.14;
	v = 'A';
	v= "Boost";
	std::cout << "good \n" ;
}
