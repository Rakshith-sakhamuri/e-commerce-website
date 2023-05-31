#include<iostream>
using namespace std;

int same( int arr[] , int n ){
    for( int i = 1 ; i <  n ; i ++ ){
        if( arr[i] == arr[i-1]){
            continue ;
        }
        else {
            return 0 ;
        }
    }
}

int solve ( vector <int> arr , int n ){
    if( n == 1){
        cout << "0" << endl;
        return 0 ;
    }
    else if ( n == 2){
        if(arr[0] == arr[1] ){
            cout<<"0" << endl ;
        }
        else{
            cout<<"1"<<endl;
        }
        return 0 ;
    }
    else if(same(arr,n) == 0){
            cout<<"0" << endl ;
    }
    else{

    }

}

int main (){
    int tc ; 
    cin >> tc ;
    while ( tc-- ){
        int n ;
        cin >> n ; 
        vector<int> arr ;
        for ( int i = 0 ; i < n ; i++ ){
            int x ;
            cin>> x ;
            arr.push_back(x);
        }
        solve ( arr , n ) ;

    }
}