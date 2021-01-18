#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)cin>>arr[i];
    int x,y;
    cin>>x>>y;
    int a=-1,b=-1;
    int m = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(arr[i]==x)a=i;
        if(arr[i]==y)b=i;
        if(a!=-1&&b!=-1){
            m = min(m,abs(a-b));
        }
    }
    cout<<m;
}
