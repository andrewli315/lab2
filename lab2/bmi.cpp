#include "bmi.h"
#include<fstream>
#include<cstdlib>
#include<cstdio>
#include<string>
using namespace std;
double BMI::getdata(double h, double w){
    height = h;
	weight = w;
};
double BMI::setbmi(){
        bmi = weight/((height/100)*(height/100));
};
string BMI::compare(){
	if(bmi<15)
	{
		cate = "Very severely underweight";
	}
	else if(bmi>=15.0 && bmi<16.0)
	{
		cate = "Severly underweight";
	}
	else if(bmi>=16.0 && bmi<18.5 )
	{
		cate= "Underweight"; 
	}
	else if(bmi>=18.5 && bmi<25.0)
	{
		cate = "Normal";
	}
	else if(bmi>=25.0 && 30)
	{
		cate = "Overweight";
	}
	else if(bmi>=30 && bmi<35.0)
	{
		cate = "Obese Class I(Moderately obese)";
	}
	else if(bmi>=35.0 && bmi<40)
	{
		cate = "Obese Class II(Severely obese)";
	}
	else
	{
		cate = "Obese Class III(Very severely obese)";
	}
	return cate;
};
