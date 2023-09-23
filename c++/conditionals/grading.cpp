#include<bits/stdc++.h>
using namespace std;

int main (){
    int marks;
    cout<<"Enter your marks:"<<endl;
    cin>>marks;

    if (marks>=80 && marks<=100){
        cout<<"Grade A"<<endl;
    }
    else if (marks>=60){
        cout<<"Grade B"<<endl;
    }
    else if (marks>=40){
        cout<<"Grade C"<<endl;
    }
    else if (marks<40){
        cout<<"Grade D"<<endl;
    }

    return 0;
    
    }