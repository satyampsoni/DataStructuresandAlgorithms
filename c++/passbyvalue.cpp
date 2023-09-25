#include <bits/stdc++.h>
using namespace std;

/*Pass by value sends the copy the variable to the function */

void pass(int a){
    cout<<a<<endl;
    a +=5;

    cout<<a<<endl;
    a+=15;

    cout<<a<<endl;
    
}

int main(){
    int a = 5;
    pass(a);
    cout<<a<<endl; // 5 will be printed at the end

    return 0;
}

