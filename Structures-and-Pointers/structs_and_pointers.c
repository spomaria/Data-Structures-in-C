#include <stdio.h>

struct point{
    double x;
    double y;
};

int main(){
    void func();

    
    
    struct point pt, *pp;
    pp = &pt;

    pt.x = 3.0;
    (*pp).y = 4.0;

    printf("%p %f %f\n", pp, pt.x, pp->y);

    /* Call by Value*/
    printf("\nThis demonstrates Call by Value:\n");
    printf("main: %f %f\n", pt.x, pp->y);
    func(pt);
    printf("back: %f %f\n", pt.x, pp->y);

    /* Call by Reference*/
    printf("\nThis demonstrates Call by Reference:\n");
    printf("main: %f %f\n", pt.x, pp->y);
    func(&pt);
    printf("back: %f %f\n", pt.x, pp->y);

}

void func(pp) struct point *pp;{
    pp->x = 8.0;
    pp->y = 9.0;
    printf("func: %f %f\n", pp->x, pp->y);
}