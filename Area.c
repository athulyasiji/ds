#include<stdio.h>
void main(){
float l,b,r,rect_area,cir_area;
printf("enter the length and breadth of rectangle");
scanf("%f%f",&l,&b);
printf("enter radius of circle");
scanf("%f",&r);
rect_area=l*b;
cir_area=3.14*r*r;
printf("Area of rectangle is %f\n",rect_area);
printf("Area of circle is %f",cir_area);
getch();

}
