//oop244
//025 741 125
//Hyungi Kim
//w5.Fraction.cpp
//07/05/2013
#include <iostream>
using namespace std;
#include "Fraction.h"

Fraction::Fraction(){
	int i=1;
	int numerator=0;
	int denominator=0;
	int simp_n=0;
	int simp_d=0;
}//safe empty state

Fraction::Fraction(int x, int y){
	simplify();
}
void Fraction::enter(){
cout<<"Numerator?";
cin>>numerator;
simp_n=numerator;
cout<<"Dinominator?";
cin>>denominator;
simp_d=denominator;
Fraction(simp_n, simp_d);
}

void Fraction::simplify(){
	i=1;
	if(simp_n%2 ==0 &&  simp_d%2==0){//even numbers//
do{
simp_n= simp_n/2;
simp_d=simp_d/2;
if(simp_n%2|| simp_d%2 !=0){
	i=0;}
}while(i!=0);
}
else if(simp_n%3 ==0 && simp_d%3 ==0){//odd numbers//
	i=1;
while(i!=0){
simp_n=simp_n/3;
simp_d=simp_d/3;
if(simp_n%3 !=0 ||simp_d%3 !=0){
	i=0;}
}
}

else if(simp_n%5 ==0 && simp_d%5 ==0){//multiple of 5//
	i=1;
while(i!=0){
simp_n=simp_n/5;
simp_d=simp_d/5;
if(simp_n%5 !=0 || simp_d%5 !=0){
	i=0;}
}
}
}//end of simplify

void Fraction::display() const{
	cout<<simp_n<<"/"<<simp_d;
}
Fraction Fraction::operator +=(const	Fraction& rightOp){
	if(simp_d == rightOp.simp_d){
	simp_n=simp_n+rightOp.simp_n;
	}
	else if(rightOp.simp_d%simp_d==0 || simp_d%rightOp.simp_d==0){
		if(rightOp.simp_d%simp_d==0){
			temp=rightOp.simp_d/simp_d;
			simp_n=(simp_n*temp)+rightOp.simp_n;
			simp_d=rightOp.simp_d;
		}
		else{
			temp=simp_d/rightOp.simp_d;
			simp_n=simp_n+(rightOp.simp_n*temp);
			
		}
	}
	else{
		simp_n=(simp_n*rightOp.simp_d)+(rightOp.numerator*simp_d);
		simp_d=simp_d*rightOp.simp_d;	
	}
	return *this;
}
Fraction operator +(const Fraction&leftOp, const Fraction&rightOp){
	Fraction result = leftOp;
	result += rightOp;
	result.simplify();
	return result;
}
bool operator==(const Fraction& leftOp, const Fraction& rightOp){
	int temp;
	if(leftOp.simp_n == rightOp.simp_n && leftOp.simp_d == rightOp.simp_d){
		return true;
	}
	else if(rightOp.simp_d%leftOp.simp_d==0){
		temp=rightOp.simp_d/leftOp.simp_d;
		if(temp*leftOp.simp_n==rightOp.simp_n){
			return true;
		}
	}
	else if(leftOp.simp_d%rightOp.simp_d==0){
		temp=leftOp.simp_d/rightOp.simp_d;
		if(temp*rightOp.simp_n==leftOp.simp_n){
			return true;
		}
	}
	return false;
}
