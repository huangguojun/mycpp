#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

double calc_distance(double _long1,double _lat1,double _long2,double _lat2)
{
    double rad = 6371.0;
    const double PI = 3.14159265358979323846;
    double long1 = _long1/180.0*PI;
    double lat1 = _lat1/180.0*PI;
    double long2 = _long2/180.0*PI;
    double lat2 = _lat2/180.0*PI;
    return rad*(acos(cos(lat2)*cos(lat1)*cos(long2-long1)+sin(lat2)*sin(lat1)));
}

class User
{
public:
	int getid(){return id;}
	double getlongitude(){return longitude;}
	double getlatitude(){return latitude;}
	User(int _id,double _longitude,double _latitude)
	{
		id = _id;
		longitude = _longitude;
		latitude = _latitude;
	}


	bool operator<(const User& obj) const
	{
		return id < obj.id;
	}

	bool operator>(const User& obj) const
	{
		return id > obj.id;
	}


	friend bool sort_by_distance(const User& obj1,const User& obj2);
	friend bool sort_by_id(const User& obj1,const User& obj2);
private:
	int id;
	double longitude;
	double latitude;

};

static double _longitude = 0.0;
static double _latitude = 0.0;

bool sort_by_distance(const User& obj1,const User& obj2) 
{
	return calc_distance(obj1.longitude,obj1.latitude,_longitude,_latitude)< calc_distance(obj2.longitude,obj2.latitude,_longitude,_latitude);
}

bool sort_by_id(const User& obj1,const User& obj2)
{
	return obj1.id < obj2.id;
}


int main()
{
	vector<User> vect;
	User test1(3,20.1,20.1); 
	User test2(2,30.1,30.1);
	User test3(1,40.1,40.1);
	User test4(4,50.1,50.1);
	User test5(5,60.1,60.1);
	vect.push_back(test1);
	vect.push_back(test2);
	vect.push_back(test3);
	vect.push_back(test4);
	vect.push_back(test5);


	//sort(vect.begin(),vect.end(),sort_by_distance);
	sort(vect.begin(),vect.end(),sort_by_id);
	//sort(vect.begin(),vect.end(),less<User>());
	//sort(vect.begin(),vect.end(),greater<User>());


	vector<User>::iterator it = vect.begin();
	while(it != vect.end())
	{
		cout<<"ID:"<<it->getid()<<"\tLong:"<<it->getlongitude()<<"\tLat:"<<it->getlatitude()<<endl;
		it++;
	}

}
