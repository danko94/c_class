#include <stdio.h>
#include <stdlib.h>

#include "myMath.h"

int main()
{

	float n;
	printf("Enter a real number: ");
	scanf("%f", &n);
	int n_i = (int)n;
	float x = sub(add(Exp(n_i),Pow(n, 3)),2);
	float y = add(mul(n,3),mul(Pow(n, 2),2));
	float z =sub(Div(mul(Pow(n, 3),4),5),mul(n,2));
	printf("Result 1: %.4f\n", x);
	printf("Result 2: %.4f\n", y);
	printf("Result 3: %.4f\n", z);
	
	return 0;


}
