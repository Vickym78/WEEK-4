//2.	Find Max and Min element in array.

#include<iostream>
using namespace std;
int main(){
        int arr [8]={4,2,6,8,3,12,7,9};
        int min= INT32_MAX,max=INT32_MIN;
        for(int i=0;i<8;i++){
                if(max<arr[i]) max= arr[i];
                if(min>arr[i]) min= arr[i];
        }
        cout<<"max is "<<max<<" MIN IS "<<min;
}