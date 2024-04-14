#include <iostream>
#include "Tic.h"
using namespace std;

int main(){
    ttt tictac;
    
    cout << "Tic-Tac-Toe\n";
    tictac.board();
    for (int i = 0; i < 9; i++) {
        tictac.turn();
        tictac.board();
        if(tictac.result('X')){
            cout << "Player X wins!";
            return 0;
        }
        if(tictac.result('O')){
            cout << "Player O wins!";
            return 0;
        }}
    cout << "Draw!";
    return 0;
}