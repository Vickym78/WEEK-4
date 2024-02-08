#include<iostream>
using namespace std;
//1.	Find Element present in Array or Not? (return bool answer)
int main(){
        int arr [8]={4,2,6,8,3,12,7,9};
        int find= 9;
        for(int i=0;i<8;i++){
                if(arr[i]==find){ cout<<true; break;}
        }
}