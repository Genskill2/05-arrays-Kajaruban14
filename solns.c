/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[], int n){

int max_num=-32768;

 for(int i=0;i<n;i++){
    if (max_num<arr[i])
        max_num=arr[i];
 }
return max_num;
}

int min(int arr[], int n){

int min_num=32767;

 for(int i=0;i<n;i++){
    if (min_num>arr[i])
        min_num=arr[i];
 }
return min_num;
}

float average(int arr[], int n){

float sum=0;

 for(int i=0;i<n;i++){
    sum += arr[i];
 }
return (sum/n);
}
