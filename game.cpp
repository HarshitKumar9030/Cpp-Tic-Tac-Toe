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
