#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n ;
        cin>>n;
        int flag = 0 ;
        string str;
        for(int  i = 0 ; i < n ; i ++){
            cin>>str[i];
            if(str[i] == '1'){
                flag = 1 ;
                
            }
        }
       
        if(flag == 0 ){
            cout<<"0"<<endl;
            continue;
        }
        
        for(int i = 0 ; i < (n-1) ; i ++){
            if(str[i]== 1 && str[i+1]==1){
                flag=1;
                continue;
            }
        }
        if(flag==1){
            cout<<"2"<<endl;
            continue;
        }
        cout<<"1"<<endl;
    
}
return 0 ;
}