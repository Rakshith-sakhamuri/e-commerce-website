#include<iostream>
using namespace std ;

int main(){
    int tc ;
    cin >> tc;
    while( tc --){
        int n , k ;
        cin >> n >> k ;
        string str ;
        cin >> str ;
        int flag = 0 ;
        for ( int i = 0 ; i < n ; i ++ ){
            if( str[i] != str[n - i - 1] ){
                flag = 1 ;
                break ;
            }
        }
        if ( flag == 0 ){
            cout << "0" << endl ;
            break ;
        }
        

    }
}