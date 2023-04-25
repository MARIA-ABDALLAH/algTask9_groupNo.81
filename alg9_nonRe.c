#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 8
int main()
{
    int a[MAXSIZE], tmp;
    printf("Enter your array enter\n");
    for(int i=0; i<MAXSIZE; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<MAXSIZE; i++){
        if (a[i] > 0&& a[i+1]<0){
            tmp=a[i];
            a[i]=a[i+1];
            a[i+1]=tmp;
            i=i-2;
        }
    }
    for(int i=0; i<MAXSIZE; i++)
        printf("%d \t", a[i]);
    return 0;
}
