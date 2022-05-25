/*
 * Output.cpp
 *
 *  Created on: May 23, 2022
 *      Author: Nirava
 */
#include "Complex_Num.h"
#include<iostream>
using namespace std;
int main()
{
	Complex_num c1(3,4);
	Complex_num c2(2,-1);
	float abs = c1.Absolute();
	cout<<"Absolute Value: "<<abs<<endl;
	c1.Argument();
	c1.Reciprocal();
	c2.Reciprocal();
	Complex_num c3;
	c3.Addition(c1, c2);
	c3.Subtraction(c1, c2);
	c3.Multiplication(c1, c2);
	c3.Division(c1,c2);
	/*float r,im;
	cin>>r>>im;
	Complex_num c4(r,im);
	c4.Absolute();*/
}


