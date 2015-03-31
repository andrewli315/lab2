#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include"bmi.h"
using namespace std;
int main()
{	
	double h,w,bmi;
	BMI x;
	string cate;
	fstream fin,fout;
	fin.open("file_in.txt",ios::in);
	fout.open("file_out.txt",ios::out);
	if(!fin)
	{

		cerr<<"error"<<endl;
	}	
	if(!fout)
	{
		cerr<<"error!"<<endl;
	}	
	while(fin>>h>>w)
	{
		if(h==0 && w==0)
		{
			fout<<"end of file"<<endl;
			fin.close();
			fout.close();
			return 0;
		}
		x.getdata(h,w);
		bmi = x.setbmi();
		cate = x.compare();
		fout<<h<<'\t'<<w<<'\t'<<bmi<<'\t'<<cate<<endl;
	}
	return 0;
}

