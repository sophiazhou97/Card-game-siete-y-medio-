#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main(){
    Player player1(100);
    cout<<"You have $"<<player1.get_money()<<".Enter bet: ";
    int bet;
    cin>>bet;
    cout<<"Your cards:\n";
    Card card1;
    cout<<card1.get_spanish_rank()<<card1.get_spanish_suit();
    cout<<card1.get_english_rank()<<card1.get_english_suit();
    return 0;
}
