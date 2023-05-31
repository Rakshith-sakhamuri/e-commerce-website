/*#include<iostream>
#include<thread>
using namespace std ;
#define m 3
#define n 3


void addition(int arr_a[m][n],int  arr_b[m][n] ){
    int add_arr[m][n] ;
    for(int i = 0 ; i < n ; i ++ ){
        for( int j = 0 ; j < m ; j ++ ){
            add_arr[i][j] = arr_a[i][j] + arr_b[i][j] ;
            }
    }

    for(int i = 0 ; i < n ; i ++ ){
        for( int j = 0 ; j < m ; j ++ ){
            cout << add_arr[i][j]<<" " ;
            }
            cout<<endl ;
    }
}

void subtraction(int arr_a[m][n],int  arr_b[m][n] ){
    int add_arr[m][n] ;
    for(int i = 0 ; i < n ; i ++ ){
        for( int j = 0 ; j < m ; j ++ ){
            add_arr[i][j] = arr_a[i][j] - arr_b[i][j] ;
            }
    }

    for(int i = 0 ; i < n ; i ++ ){
        for( int j = 0 ; j < m ; j ++ ){
            cout << add_arr[i][j]<<" " ;
            }
            cout<<endl ;
    }
}

int main(){
    int arr_a[n][m] , arr_b[n][m] ;
    for(int i = 0 ; i < n ; i ++ ){
        for( int j = 0 ; j < m ; j ++ ){
            cin >> arr_a[i][j] ;
            }
    }
    for(int i = 0 ; i < n ; i ++ ){
        for( int j = 0 ; j < m ; j ++ ){
            cin >> arr_b[i][j] ;
            }
    }
    thread worker1(addition, arr_a,arr_b);
    thread worker2(subtraction,arr_a,arr_b);
}          
*/


#include<iostream>
using namespace std;










