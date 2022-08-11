#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int binary(int array[],int key,int n){
int low,high,mid;
low=0;
high=n-1;
while(low<high){
    mid=(low+high)/2;
    if(key==array[mid]){
       return  mid;
    }
    else if(key<array[mid])
        high=mid-1;
    else
        low=mid+1;
}
return -1;
}
int linary(int array[],int key,int n){
int i;
for(i=0;i<n;i++){
    if(array[i]==key)
        return 1;
        else
            return -1;
}
}
void delay(){
    int j;
    for(j=0;j<70000000;j++);
}
void main(){
int n,array[5000],key,ch;
unsigned long int i,flag;
clock_t s,e;
while(1){
    printf("\nEnter your search choice:\n1. Binary search 2. Linear search\n");
    scanf("%d",&ch);
    switch(ch){
case 1: n=1000;
    while(n<=3000){
    for(i=0;i<n;i++){
        array[i];
    }
    key=array[n-1];
    s=clock();
    flag=binary(array,key,n);
    if(flag>=1)
    printf("\n Element found");
    else
    printf("Element not found");
    delay();
    e=clock();
    printf("\n Time taken for %d elements is %f\n",n,((double)(e-s))/CLOCKS_PER_SEC);
    n=n+1000;
    }
    break;
case 2: n=1000;
while(n<=3000){
    for(i=0;i<n;i++){
        array[i];
    }
    key=array[n-1];
    s=clock();
    flag=linary(array,key,n);
    if(flag=1)
    printf("\nElement found");
    else
    printf("Element not found");
    delay();
    e=clock();
    printf("\n Time taken for %d elements is %f\n",n,((double)(e-s))/CLOCKS_PER_SEC);
    n=n+1000;
    }
    break;
default:exit(0);
}
}
}
