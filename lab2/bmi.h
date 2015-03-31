#include<fstream>
#include<string>
#include<iostream>
using namespace std;
class BMI{
	public:
		double setbmi();
		double getdata(double,double);
		string compare();
	private:
		double height,weight,bmi;
		string cate;
};
