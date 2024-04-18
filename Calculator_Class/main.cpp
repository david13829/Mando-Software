#include <iostream>
#include "calculator.h"
using namespace std;

int main(){
    calc cal;
    double n1,n;
    char oper;
    
    cout << " Enter Number: " << endl;
    cin >> n1;
    cal.setresult(n1);
    
    do{
    cout << " Enter Operation: " << endl;
    cin >> oper;
    
    if(oper == 'c'){
        cal.clear;
        cout << cal.result << endl;
    }
    else if(oper == 'q'){
        cout << "End" << endl;
        break;
    }
    else{
        cout << " Enter Number: " << endl;
        cin >> n;
        cal.setoperation(oper);
        cal.setnumber(n);
        cout << cal.result() << endl;
    }
    }while(true);
}