#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }

    int sum=0;
    int index = 0;    int count=0;
    int current=0;
    for(int i=0; i<n; i++){
        if(count<3){
            count++;
            current+=arr[i];
            sum+=arr[i];
          
        }
        else{
            current+=arr[i];
            current-=arr[i-k];
             if(current<sum)
                sum=current;
        }
    }
    
    
    cout<<sum;
    return 0;
}