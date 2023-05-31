#include<iostream>
#include<string>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while( tc--){
        string str;
        cin>>str;
        int k ;
        cin >> k ;
        int count = 0 ;
        int n = str.length();
        for( int  i = 0 ;i < n/2 ; i ++ ){
            if(str[i] != str[n - 1 - i]){
                count = count + 1;
            }
        }

        if( count == k){
            cout<<"YES"<<endl ;
            continue ;
        }

        if( n%2 != 0 && count < k ){
            cout<<"YES"<<endl ;
            continue ;
        }
        if(count < k && (k - count)%2 == 0 && n%2 == 0){
            cout<<"YES"<<endl ;
            continue ;
        }
        cout<< "NO" << endl ;

    }
    return 0;
}