/*
 * displaygrowth.cpp
 *
 *  Created on: Oct 2, 2015
 *      Author: niloofar Dadras
 */
#include <iostream>
using namespace std;
#include "header.h"
#include <math.h>
#include <cmath>

void growth (double N[])//function to print out the input array N[]
{
int i;
cout<<"hour"<<"   "<<"population"<<endl;
for(i=0; i<11; i++)
	 {

	cout<<i<<"      "<<N[i]<<endl;
	 }

}

