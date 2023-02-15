# include <iostream>
using namespace std;

/* პირველი 50 ნატურალური რიცხვის დაბეჭვდა */
int numbers(int n ){
    if (n<50)
    {
        cout << n << " ";
        return numbers(n+1);
    }
    
}


int main(){

    int start = 1;
    int function = numbers(start);

    cout << function;


    cin.get();
    return 0;
}