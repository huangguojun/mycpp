/**************************************************
 *
 *北京市第三交通委提醒您，道路千万条，安全第一条。代码不规范，运维两行泪。
 *
 ***************************************************/
#include <iostream>  
#include <string>  
#include <vector>  
#include <boost/smart_ptr.hpp>  
#include <boost/make_shared.hpp>  

using namespace std;  

int main(int argc, char* argv[])  
{  
	boost::shared_ptr<string> sp = boost::make_shared<string>("hello world");  
	
	boost::shared_ptr< vector<int> > spv = boost::make_shared< vector<int> >(10, 2);  
	assert(spv->size() == 10);  

	cout<<*sp<<endl;  
	cout<<(*spv)[0]<<endl;  

	//标准容器持有shared_ptr使用  
	typedef vector<boost::shared_ptr<int> > vs;  
	vs v(10);  

	int i = 0;  
	vs::iterator vIter = v.begin();  
	for (; vIter != v.end(); ++vIter)  
	{  
		(*vIter) = boost::make_shared<int>(++i);  
		cout<<*(*vIter)<<", ";  
	}  
	cout<<endl;  

	boost::shared_ptr<int> p = v[9];  
	*p = 100;  
	cout<<*v[9]<<endl;  

	return 0;  
}  
