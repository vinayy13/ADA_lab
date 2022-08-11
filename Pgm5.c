#include<stdio.h>
#include<time.h>
#include<windows.h>
void insertsort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;

        while(j>=0 && temp <= a[j])
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }
}
void main(){
clock_t s,e;
int a[100000],n,i,j,num;
    printf("INSERTION SORT\n");
  n=1000;
    while(n<10000){
        for(i=0;i<n;i++){
        a[i]=n-i;}
    s=clock();
    insertsort(a, n);
    Sleep(200);
    e=clock();

    printf("\nthe time taken for sorting the elements where n:%d is %f",n,((double)(e-s))/CLK_TCK);
    n=n+2000;
}
}
