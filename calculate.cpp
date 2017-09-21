/*
 * calculate.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: niloofar Dadras
 */

#include <iostream>
using namespace std;
#include "header.h"
#include <math.h>//library to use exp 
#include <cmath>

 void calculate (int n,int k, double N[])//function to calculate the population of bacteries
{
	 //float e=2.718;
	 int i;
	 int t=0;
	for(i=0; i<11; i++)
	 {
	  N[i]=n*exp(k*t);
	 t++;
	 }

}

