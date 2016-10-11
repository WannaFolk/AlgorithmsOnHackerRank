#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    double positive=0,negtive=0,zero=0;            //根据数组中正数,负数,零的个数来输出
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        if(arr[arr_i]<0)  negtive++;
        if(arr[arr_i]==0)  zero++;
        if(arr[arr_i]>0)  positive++;
    }
    printf("%6lf\n",positive/n);
    printf("%6lf\n",negtive/n);
    printf("%6lf\n",zero/n);
    return 0;
}