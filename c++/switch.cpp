#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cout<<"Enter a number between 1 and 7"<<endl;
    cin>>day;

    switch (day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2: 
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
            // default is used when none of the cases are true
        default:
            cout<<"Invalid input"<<endl;
            break;
    }
}

// flow of switch case:
// 1. The expression is evaluated once.
// 2. The value of the expression is compared with the values of each case.
// 3. If there is a match, the associated block of code is executed.
// 4. If there is no match, the default code block is executed.
//5. The break keyword breaks out of the switch block.