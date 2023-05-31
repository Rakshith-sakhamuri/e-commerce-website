#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc ;
    cin >> tc ;
    while(tc--){
        string str;
        int n;
        cin >> n ;

        for(int i = 0 ; i < n ; i ++){
            cin>>str[i];
        }
        int ctr=0;
        for(int i = 0 ; i < ( n-1 );i++){
            if(str[i]== '0' && str[i+1]== '0'){
                ctr=ctr + 2;
            }
            if(str[i]== '0' && str[i+1]== '1' && str[i+2]== '0' && i<(n-2)){
                ctr++;
            }
        }
        cout<<ctr<<endl;

    }
    return 0 ;
}