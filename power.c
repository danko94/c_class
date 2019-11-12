#include <stdio.h>
#include "myMath.h"
#define e 2.718282

double Pow(double x, int y){
	double f = x;
	int n = 0;
	for(n=1; n<y; n++){
		f*=x;
	}
	return f;
}
double Exp(int x){
	double sum = 1;
	for(int i = 0; i<x; i++){
		sum*=e;
	}
	return sum;
}
