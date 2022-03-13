#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int arr[100001]; int k=INT_MIN;
    
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int i=0;i<n;i++){
            k=max(arr[i],k);
        }
        
        int count[100]={0};
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        
        for(int i=1;i<=k;i++){
            count[i]+=count[i-1];
        }
        
        int output[n];
        for(int i=n-1;i>=0;i--){
            output[--count[arr[i]]]=arr[i];
        }
        
        for(int i=0;i<n;i++){
            arr[i]=output[i];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    
    return 0;
}               // https://www.youtube.com/watch?v=imqr13aIBAY
