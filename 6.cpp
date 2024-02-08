//6.	Find Last Occurrence (last index) of element in given array.

#include<iostream>
using namespace std;
int main(){
        int arr [8]={1,2,5,1,3,5,1,6};
       int val =1; int idx =-1;
        for(int i=7;i>=0;i--){
                if(arr[i]==val){ idx=i;break;}
        }
        cout<<idx;
}