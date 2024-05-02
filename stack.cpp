#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<int> s;
    int choice, newValue;  
    cout << "1) Push" << endl;  
    cout << "2) Pop" << endl;  
    cout << "3) Display stack" << endl;  
    cout << "4) Exit" << endl;  
    do {  
        cout << "Choice: ";  
        cin >> choice;  
        switch (choice) {  
        case 1: {  
            if(s.top() > 4)
            cout << "Over";
            else{
            cout << "Enter number: ";  
            cin >> newValue;  
            s.push(newValue);}
            break;  
        }  
        case 2: {  
            if(s.top() < 0)
            cout << "Unavailable";
            else
            s.pop();  
            break;  
        }  
        case 3: {  
            for(int i = 0; i < s.size(); i++){
                cout << s[i];
            }  
            break;  
        }  
        case 4: {  
            cout << "Exiting the program" << endl;  
            break;  
        }  
        default: {  
            cout << "Invalid Choice" << endl;  
        }  
        }  
    } while (choice != 4);  
    return 0;  
}  
