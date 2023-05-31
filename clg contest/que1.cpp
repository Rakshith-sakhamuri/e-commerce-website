#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> l2r(n);
    vector<int> r2l(n);
    int sum;
    for(int i = 0 ; i < n ;  i++){
        cin >> arr[i];
    }
    
 
    l2r[0] = 1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1]){
            l2r[i] = l2r[i-1]+1;
        } 
        else{
            l2r[i] = 1;
        }
    }
 
    sum=l2r[n-1];
    r2l[n-1] = 1;
 
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1]){
            r2l[i] = r2l[i+1]+1;
        }
        else{
            r2l[i] = 1;
        }
        if(l2r[i]>r2l[i]){
            sum = l2r[i];
        }
        else{
            r2l[i];
        }
 
    
    }
        
    
}
