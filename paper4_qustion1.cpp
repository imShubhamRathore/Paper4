#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    int m = INT_MAX;
    int a,b;
    for(int i = 0 ; i < n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(m>abs(arr[i]+arr[j])){
                a = arr[i];
                b = arr[j];
                m = a+b;
            }
        }
    }
    cout<<a<<"  "<<b<<endl;
}
