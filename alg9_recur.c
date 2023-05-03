#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 8
void separatePosNeg(int a[],int l,int r);
int main()
{
    int a[MAXSIZE];
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
        return;
    if (a[l]>0 && a[l+1]<0 && l>=0){
        int tmp=a[l];
        a[l]=a[l+1];
        a[l+1]=tmp;
        separatePosNeg(a, l-1, r);
    }
    else {
        separatePosNeg(a, l+1, r);
    }
}
