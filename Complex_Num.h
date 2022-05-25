/*
 * Complex_Num.h
 *
 *  Created on: May 23, 2022
 *      Author: Nirava
 */

#ifndef COMPLEX_NUM_H_
#define COMPLEX_NUM_H_
class Complex_num
{
private:
	float re,img;
public:
	Complex_num();
	Complex_num(int re, int img);
	float Absolute();
	void Argument();
	void Reciprocal();
	void Addition(Complex_num,Complex_num);
	void Subtraction(Complex_num,Complex_num);
	void Multiplication(Complex_num,Complex_num);
	void Division(Complex_num,Complex_num);
};




#endif /* COMPLEX_NUM_H_ */
