#include <iostream>
using namespace std;

char space[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char t = 'X';

void board(){

    for(int i = 0; i < 3; i++) {
        cout << "---|---|---" << endl;
        cout << " " << space[i][0] << " | " << space[i][1] << " | " << space[i][2] << endl;
    }
    cout << "---|---|---" << endl;
}

void turn(){
    int number, row, column;

    if(t == 'X') 
        cout << "Player X turn: ";
    else if(t == 'O') 
        cout << "Player O turn: ";
    cin >> number;

     switch(number){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default: cout << "Wrong number! ";
    }

    if(space[row][column] != 'X' && space[row][column] != 'O') {
        space[row][column] = t;
        t = (t == 'X') ? 'O' : 'X';
    }
    else{
        cout << "Choose another number!\n";
        turn();
    }
}

bool result(char sign) {
    for(int i = 0; i < 3; i++) {
        if (space[i][0] == sign && space[i][1] == sign && space[i][2] == sign)
            return true;
        if (space[0][i] == sign && space[1][i] == sign && space[2][i] == sign)
            return true;
    }

    if (space[0][0] == sign && space[1][1] == sign && space[2][2] == sign)
        return true;
    if (space[0][2] == sign && space[1][1] == sign && space[2][0] == sign)
        return true;
    
    return false;
}

int main(){
    cout << "Tic-Tac-Toe\n";
    board();
    for (int i = 0; i < 9; i++) {
        turn();
        board();
        if(result('X')){
            cout << "Player X wins!";
            return 0;
        }
        if(result('O')){
            cout << "Player O wins!";
            return 0;
        }}
    cout << "Draw!";
    return 0;
}