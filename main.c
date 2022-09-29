#include <stdio.h>
#include<malloc.h>
#include "circle.h"
#include"jollyjumper.h"
#include <assert.h>

void printCircle(circle c) {
	printf("p.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

int main(void) {
	/*testing circles - make sure that you know how it works and what it is supposed to print out*/
	/*yep understood*/
	circle c[5];
	fiveCircles(c);
	for (int i = 0; i < 5; i++) {
		printCircle(c[i]);
	}
	point p;
	p.x = 2;
	p.y = 2;
	translate(&c[1], &p);
	printCircle(c[1]);
	printf("isValid: %d", circleIsValid(&c[1])); 
	
	/*answer to exercise 7.b*/
	int n; /*number of numbers to read*/
	
	/*readin n and check that is is OK*/
	
	printf("\nNumbers to read n:\n");
	scanf("%d", &n);
	//Pre-condition
	assert(n > 0);

	int *numbers = malloc(sizeof(int) * n); /*the numbers read, numbers is a array, size n*/

	printf("Numbers in the array, type %d numbers:\n", n);

	/*reading the n numbers in the array numbers*/
	int num;
	for(int i = 0; i < n; i++) {
		scanf("%d", &num);
		numbers[i] = num;
	}

	if (isJollyJumber(numbers, n)) {
		printf("it is a Jolly Jumper");}
	else {
		printf("not a Jolly Jumper");}
	return 0;

}
