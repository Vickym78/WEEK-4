//3.	Find Second largest Element and Third Largest element



 #include<iostream>
using namespace std;
int main(){
        int arr [8]={4,2,6,8,3,12,7,9};
        int max=INT32_MIN,max2=INT32_MIN,max3=INT32_MIN;
        for(int i=0;i<8;i++){
                if(max<arr[i]) {
                    max3=max2;
                    max2=max;
                    max=arr[i];
                }

                if(max2<arr[i] && arr[i]!=max){
                     max3=max2;
                    max2=arr[i];
                }

                if(max3<arr[i] &&  arr[i]!=max  && arr[i]!=max2){
                    max3=arr[i];
                }
                
        }
        cout<<"max is "<<max<<" Second max "<<max2 <<" Third Max "<<max3;
}