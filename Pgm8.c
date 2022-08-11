
 #include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
void split(int a[],int low,int high)
{
 int mid;
 if(low<high)
 {
  mid=(low+high)/2;
  split(a,low,mid);
  split(a,mid+1,high);
  mergesort(a,low,mid,high);
 }
}
void mergesort(int a[],int low,int mid,int high){
int i,j,k,c[10000];
i=low;
j=mid+1;
k=low;
while(i<=mid && j<=high){
    if(a[i]<a[j]){
        c[k]=a[i];
        i=i+1;
        k=k+1;
    }
    else{
        c[k]=a[j];
        j=j+1;
        k=k+1;
    }
    }
if(j>high){
while(i<=mid){
    c[k]=a[i];
    k=k+1;
    i=i+1;
}
    }
if(i>mid){
while(j<=high){
    c[k]=a[j];
    k=k+1;
    j=j+1;
}
    }
}
void main ()
{
int a[10000],i,j,k,n;
clock_t s,e;
printf("Merge sort\n");
n=1000;
while(n<10000){
for(i=0;i<n;i++){
    a[i]=n-i;
}
s=clock();
split(a,0,n-1);
Sleep(150);
e=clock();
printf("\nTime taken for Merge sort where n : %d is: %f\n",n,((double)(e-s))/CLK_TCK);
n=n+1000;
}
}
