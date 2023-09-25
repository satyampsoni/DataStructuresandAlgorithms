#include <bits/stdc++.h>
using namespace std;
//There are four types of functions 
// void - does not return anything
// return - returns something that can be later assigned
// parameterised - functions having parametes
// Non parameterised

void PrintName(string name){
    cout<<"hey "<<name;
}

int main (){
    string name;
    cin>>name;

    PrintName(name);

    return 0;
}