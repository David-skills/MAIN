/* c++ fanction with player structure
Auther:David Kariuki
Reg No: BSCIT-05-0042/2024
Date:13/3/2025
Version 1
*/
#include <iostream>
using namespace std;
struct player
{
    string name;
    int score;
    int level;
};
void displayplayer(const player &p){
    cout<<"player name:" <<p.name<<endl;
    cout<<"player score:" <<p.score<<endl;
    cout<<"player level:" <<p.level<<endl;
}
void inputplayer(player &p){

     cout<< "Enter player name: ";
   cin >> p.name;

    cout<<"Enter player score: ";
   cin >> p.score;

    cout<<"Enter player level: ";
    cin >> p.level;
}
int main() {
    player player1{"John",30,3};
    player player2{"Mark",25,4};
    
    displayplayer(player1);
    displayplayer(player2);


    return 0;
}