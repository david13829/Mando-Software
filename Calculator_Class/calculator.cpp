#include <iostream>
#include "calculator.h"
using namespace std;
    
    void calc::setresult(double n1){
        sum = n1;
    }
    
    void calc::setnumber(double n){
        x = n;
    }
    
    void calc::setoperation(char oper){
        swtich(oper){
            case '+':
                sum += x;
                break;
            case '-':
                sum -= x;
                break;
            case '*':
                sum *= x;
                break;
            case '/':
                sum /= x;
                break;
            default:
                cout << "Error" << endl;
                break;
        }
    }
    
    void calc::clear(){
        sum = 0;
    }
  
    double calc::result(){
        return sum;
    }




    
