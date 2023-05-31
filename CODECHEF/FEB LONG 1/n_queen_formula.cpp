#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int tc;
    cin >> tc ;
    while ( tc-- ){
        float n ;
        cin >> n ;
        int dup_n ;
        float res ;
        // (0.143⋅N)N 
        res = 0.143 * n ;
        res = pow(res , n) ;
        dup_n = res ;
        if ( (dup_n - res ) < 0.5 ){
            cout << dup_n << endl ;
        }
        else{
            cout << ( dup_n + 1 ) << endl ;

        }



    }

    return 0 ;

}