//4.	Count the Number of Element in Array greater than given x value.

#include<iostream>
using namespace std;
int main(){
        int arr [8]={4,2,6,8,3,12,7,9};
       int val =6; int count =0;
        for(int i=0;i<8;i++){
                if(arr[i]>val) count++;
        }
        cout<<"No.Of element greater than 6 is "<<count;
}