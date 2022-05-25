/*
 * Complex_Num.cpp
 *
 *  Created on: May 23, 2022
 *      Author: Nirava
 */
#include "Complex_Num.h"
#include<math.h>
#include<iostream>
using namespace std;

Complex_num::Complex_num():re(0),img(0){}
Complex_num::Complex_num(int r,int i):re(r),img(i){}

float Complex_num::Absolute()
{
	float abs = sqrt((re*re)+(img*img));
	return abs;
}

void Complex_num::Argument()
{
	float arg = img/re;
	cout<<"Argument of "<<re<<"+"<<img<<"i :"<<atan(arg)*180/3.1415<<" degrees"<<endl;
}

void Complex_num::Reciprocal()
{
	float rep = re/(Absolute()*Absolute());
	float imgp = -img/(Absolute()*Absolute());
	if(signbit(imgp)==1)
	{
		cout<<"Reciprocal of "<<re<<"+"<<img<<"i :"<<rep<<imgp<<"i"<<endl;
	}
	else cout<<"Reciprocal of "<<re<<"+"<<img<<"i :"<<rep<<"+"<<imgp<<"i"<<endl;
}

void Complex_num::Addition(Complex_num c1,Complex_num c2)
{
	re = c1.re + c2.re;
	img = c1.img + c2.img;
	cout<<"Addition of ("<<c1.re<<"+"<<c1.img<<"i) + ("<<c2.re<<"+"<<c2.img<<"i) is: "<<re<<"+"<<img<<"i"<<endl;
}

void Complex_num::Subtraction(Complex_num c1,Complex_num c2)
{
	re = c1.re - c2.re;
	img = c1.img - c2.img;
	cout<<"Subtraction of ("<<c1.re<<"+"<<c1.img<<"i) + ("<<c2.re<<"+"<<c2.img<<"i) is: "<<re<<"+"<<img<<"i"<<endl;
}

void Complex_num::Multiplication(Complex_num c1,Complex_num c2)
{
	re = (c1.re*c2.re)-(c1.img*c2.img);
	img =(c1.re*c2.img) + (c2.re*c1.img);
	cout<<"Multiplication of ("<<c1.re<<"+"<<c1.img<<"i) + ("<<c2.re<<"+"<<c2.img<<"i) is: "<<re<<"+"<<img<<"i"<<endl;
}

void Complex_num::Division(Complex_num c1,Complex_num c2)
{
	cout<<"Division of ("<<c1.re<<"+"<<c1.img<<"i) + ("<<c2.re<<"+"<<c2.img<<"i) is: ("<<c1.re<<"+"<<c1.img<<"i)("<<c2.re<<"+"<<c2.img<<"i)/"<<c2.Absolute()*c2.Absolute()<<endl;
}



