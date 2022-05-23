#include <iostream>
#include <stdlib.h>
#include<bits/stdc++.h>
using namespace std;

char Board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

int choice;
int row,column;
char turn = 'X';
bool draw = false;
//Display Board
void display_board(){



    cout<<"PLAYER - 1 [X]\t PLAYER - 2 [O]\n\n";
    cout<<"\t\t\t\t     |     |     \n";
    cout<<"\t\t\t\t  "<<Board[0][0]<<"  |  "<<Board[0][1]<<"  |  "<<Board[0][2]<<" \n";
    cout<<"\t\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t\t     |     |     \n";
    cout<<"\t\t\t\t  "<<Board[1][0]<<"  |  "<<Board[1][1]<<"  |  "<<Board[1][2]<<" \n";
    cout<<"\t\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t\t     |     |     \n";
    cout<<"\t\t\t\t  "<<Board[2][0]<<"  |  "<<Board[2][1]<<"  |  "<<Board[2][2]<<" \n";
    cout<<"\t\t\t\t     |     |     \n";
}
void player_turn(){
    if(turn == 'X'){
        cout<<"\ntPlayer - 1 [X] turn : ";
    }
    else if(turn == 'O'){
        cout<<"\ntPlayer - 2 [O] turn : ";
    }

    cin>> choice;



    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }

    if(turn == 'X' && Board[row][column] != 'X' && Board[row][column] != 'O'){

        Board[row][column] = 'X';
        turn = 'O';
    }else if(turn == 'O' && Board[row][column] != 'X' && Board[row][column] != 'O'){

        Board[row][column] = 'O';
        turn = 'X';
    }else {

        cout<<"Box already filled!\n Please choose another!!\n\n";
        player_turn();
    }

    display_board();
}
