#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXSIZE 8
int main()
{
    int a[MAXSIZE], tmp;
    printf("Enter your array enter\n");
    for(int i=0; i<MAXSIZE; i++){
        scanf("%d", &a[i]);
    }
    separatePosNeg(a,0,MAXSIZE-1);
    for(int i=0; i<MAXSIZE; i++)
        printf("%d \t", a[i]);
    return 0;
}
void separatePosNeg(int a[],int l,int r){
    if (l==r)
        return 0;
    else{
        separatePosNeg(a, l, floor((l+r)/2));
        separatePosNeg(a, floor((l+r)/2)+1, r);
        for(int i=0; i< r;i++){
            if (a[i] > 0&& a[i+1] < 0){
                int tmp= a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
                i=i-2;
            }
        }
    }
}
