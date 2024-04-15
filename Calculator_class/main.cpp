#include <iostream>
#include "calculator.h"
using namespace std;

int main(){
    calculator cal;
    double sum, n2;
    char p;
    
    cin >> sum >> p >> n2;
    switch(p){
        
        case '+':
        sum = cal.addition(sum, n2);
        cout << sum;

        case '-':
        sum = cal.subtraction(sum, n2);
        cout << sum;

        case '*':
        sum = cal.multiplication(sum, n2);
        cout << sum;

        case '/':
        sum = cal.division(sum, n2);
        cout << sum;

        default:
        cout << "Error";
    }
    
    while(true){
        cin >> p >> n2;
        if(p == "q"){
            cout << "종료" << endl;
            break;
    }
        else if(p == "c"){
            cout << cal.clear() << endl;   
    }
        /* 
        else안에 switch문을 사용하여 사칙연산을 class에서 받아 계산을한다
        */
}