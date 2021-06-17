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
