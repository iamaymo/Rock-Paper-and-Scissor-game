#include <iostream>

// Constant variables
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

using namespace std;
void playAgian();


char getComputerOption() {
    srand(time(0));
    // Random number
    int num = rand() % 3 + 1;
    // Random number between 1 and 3

    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
}

char getUserOption() {
    char c;
    cout << "Rock, Paper and Scissors Game!" << endl;
    cout << "Choose one of the following options"  << endl;
    cout << "-----------------------------------"  << endl;
    cout << "(r) for rock " << " - "<< "(p) for paper" << " - " << "(s) for scissors " << endl;
    cout <<" --\n "<< "To Exit enter \'#\'" << endl;
    cout << "-------------------------------------------------"  << endl;
    cout << "choose : ";
    cin >> c;

    while (c!='r' && c!='p' && c!='s' && c!='#')
    {
        system("cls");
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << " - "<< "(p) for paper" << " - " << "(s) for scissors " << endl;
        cout <<" --\n "<< "To Exit enter \'#\'" << endl;
        cout << "-------------------------------------------------"  << endl;
        cout << "choose : ";
        cin >> c;
    }
    
    return c;
}

void showSelectedOption(char option) {
    if (option == 'r') cout << "Rock" << endl;
    if (option == 'p') cout << "Paper" << endl;
    if (option == 's') cout << "Scissors" << endl;
}

void chooseWinner(char uChoice, char cChoice) {
    if (uChoice == ROCK && cChoice == PAPER) {
        cout << "Computer Wins! Paper wraps Rock."<< endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS) {
        cout << "Computer Wins! Scissors cut Paper."<< endl;
        
    }
    else if (uChoice == SCISSORS && cChoice == ROCK) {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;
        
    }
    else if (uChoice == ROCK && cChoice == SCISSORS) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == PAPER && cChoice == ROCK) {
        cout << "You Win! Paper wraps Rock."<< endl;
        
    }
    else if (uChoice == SCISSORS && cChoice == PAPER) {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else if(uChoice == cChoice){
        cout << "Equals" << endl;
    }
    else{
        system("cls");
        if(uChoice == '#')
            cout<<"You exit from the game";
        else
            cout << "Something wronge happend !!" << endl;
    }
}

void play(){
    //User's choice
    char uChoice; 
    //Compter's choice
    char cChoice;
    
    uChoice = getUserOption();
    system("cls");
    cout << "Your choice is: ";
    showSelectedOption(uChoice);
    
    cout << "Computer's choice is: ";
    cChoice = getComputerOption();
    showSelectedOption(cChoice);
    
    chooseWinner(uChoice, cChoice);
    
    }
    
    void playAgian(){
    char PG;
    cout<<"Do you want to play one more time [y/n] :";
    cin >> PG;
    if(PG == 'y'){
        system("cls");
        play();
    }
    else if(PG == 'n')
        cout<<"Have good time";
    else{
        cout<<"only choose [y/n]"<<endl;
        playAgian();
    }
    }
int main() {
    
    play();
    playAgian();
    playAgian();
    return 0;
}