#include <malloc.h>
#include "circle.h"

typedef struct circle {
	int r;
	point p;
} circle;

/*add your definition of circle here. You need top call it "circle"*/


void fiveCircles(circle c[]) {
	/*post: returns an array with five circles - solution to 6.b*/
	for(int i = 0; i < 5; i++){
		c[i].p.x = i;
		c[i].p.y = i;
		c[i].r = i;
	}
}

int circleIsValid(const circle * c) {
/*post: answer to exercise 6.c*/
	if(c->r > 0) {
		//returns true
		return 1;
	} else {
		//returns false
		return 0;
	}
}

void translate(circle* c, const point* gp) {
	/*ansver to exercise 6.d*/
	c->p.x += gp->x;
	c->p.y += gp->y;
}