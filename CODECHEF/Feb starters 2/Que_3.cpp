#include<iostream>
using namespace std ;

int main (){
    int tc ;
    cin >> tc ;
    while ( tc-- ){
        int m  , x ;
        cin>> x >>  m ;
        int arr[m] ;
        arr[0] =1 ;
        arr[1] = 1 ;
        int sum = 0 ,count = 0;
        for( int i = 2 ; i < m ; i++ ){
            arr[i] = arr[i-1] ;
            sum = sum + arr[i] ;
            if(sum = x ){
                count = count + 1 ;
                sum = 0 ;
            }

        }   
        cout<< count << endl ;  

    }
    return 0 ;
}