// 9.	Find Difference between sum of even and odd position in an array


#include<iostream>
using namespace std;
int main(){
        int arr [8]={1,2,3,4,5,6,7,8};
        int diff;
        for(int i=0;i<8;i++){
            int sodd=0,seven=0;
            if(i%2==0) seven+=arr[i];
            else sodd+=arr[i];
            diff= seven-sodd;
        }
        cout<<diff;
        
}