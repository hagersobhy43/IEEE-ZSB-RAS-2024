#include <stdio.h>
int main(){
    int x=3 , y=4 , z=9 , *p , *q , *r;
    p=&x , q=&y , r=&z;
    printf("x=%d , y=%d , z=%d\np=%d , q=%d , r= %d\n*p=%d , *q=%d , *r=%d\n",x,y,z,p,q,r,*p,*q,*r);
    printf("Swapping pointers\n");
    r=p;
    p=q;  
    q=r;
    printf("x=%d , y=%d , z=%d\np=%d , q=%d , r= %d\n*p=%d , *q=%d , *r=%d\n",x,y,z,p,q,r,*p,*q,*r);

}