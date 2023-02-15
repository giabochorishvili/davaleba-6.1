#include <iostream>
using namespace std;

int function(int n , int m){
    if (n==m)
    {
        return n; 
    }else{
        return n+function(n+1 , m);
    }
}

int main(){

    int n , m;
    cout << "enter your numbers: ";
    cin >> n >> m;
    
    int numbers = function(n , m);
    cout << numbers;


    cin.get();
    return 0;
}