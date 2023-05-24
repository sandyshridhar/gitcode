#include<stdio.h>
main()
{
int x=20,y=30;
printf("the value before swaping is:x=%d\n y=%d",x,y);
x=x+y;//x=50 (20+30)
y=x-y;//y=10 (50-40)
x=x-y;//x=40 (50-10)
printf("\nthe value after swaping is:x=%d\n y=%d",x,y);
return 0;
}
