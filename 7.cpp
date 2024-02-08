//7.	In given array, [1,3,2,4,3,4,1,6].  Find Combination of two numbers sum in array is equal to 7.

#include<iostream>
using namespace std;
int main(){
      int arr[8]={1,3,2,4,3,4,1,6};
      int sum=7;
      for(int i=0;i<7;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j]==sum) cout<<arr[i]<<" "<<arr[j]<<"= with index of "<<i<<" "<<j<<endl;
      }
}
}