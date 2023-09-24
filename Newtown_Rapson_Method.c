#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x){
float f;
f = pow(x,3) + pow(x,2) -1;
return f;
}
float df(float x){
float f; f = 3* pow(x,
2)+ 2 * x ; return f;
}
float ddf(float x){
float f; f
= 6*x + 2 ;
return f;
}
void c_t(float x){ float C_T = (f(x) *
ddf(x)) / pow(ddf(x),2); if(C_T < 1){
printf("Process is convergent\n");}
else{
printf("Process is not convergent\n");
}
}
int main()
{
float e, a, b, h, x[50];
int k;
printf("Enter the accuracy : ");
scanf("%f", &e);
do{
printf("Enter the interval : ");
scanf("%f %f",&a,&b);
}while(f(a)*f(b)>0.0);
x[0] = (a + b)/2;
c_t(x[0]);
k = 0;
do{
x[k+1] = x[k] -(f(x[k])/df(x[k]));
h = fabs(x[k+1]-x[k]);
printf("x0 = %f, f of x0 = %f, deriv of f_x0 = %f, x1 = %f, abs diff of x1 and x0 = %f \n\n", x[k], f(x[k]),
df(x[k]), x[k+1], h);
k++;
}while(h >= e);
k--;
printf("Root of the equation x[k+1] = %f \n", x[k+1]);
printf("No. of Iteration = %d \n\n", k+1);
return 0;
}