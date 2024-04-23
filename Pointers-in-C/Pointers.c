#include <stdio.h>
main() {
  int empno;
  float rate, hours, pay;
  void calcpay();

  while(1) {
    if ( scanf("%d %f %f",&empno,&rate,&hours) < 3 ) break;
    calcpay(&pay, rate, hours);
    printf("Employee=%d Rate=%.2f Hours=%.2f Pay=%.2f\n",empno, rate, hours, pay);
  } 
}

void calcpay(p,r,h)
    float *p,r,h;
{
  if(h <= 40.0) *p = r *h;
  else *p = r *40.0 + r *(h - 40.0) * 1.5; /*give the employee time-and-a-half for overtime (hours over 40)*/

}