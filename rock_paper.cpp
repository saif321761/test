#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

srand (time(NULL));

int computer_kaChoice = rand() % 3 + 1;

int apka_choice = 0;
  
  
    string rock = "1) Rock\n";
    string paper = "2) Paper\n";
    string scissor = "3) Scissors\n";
  
    cout<<"NAME: SAIF UD DIN: "<<endl;
    cout<<"ID: 32065: "<<endl;
    cout << "<--------------->"<<endl;
    cout << "rock paper scissors "<<endl;
    cout << "<---------------> "<<endl;
    cout << rock;
    cout << paper;
    cout << scissor;

 cout << "Apka choice: ";
 cin >>apka_choice;

  
    cout << "Apka choice ";
  
  
  switch(apka_choice){
    case 1 :
    	cout << rock;
    	break;
    case 2 :
    	cout << paper;
    	break;
    case 3 :
    	cout << scissor;
    	break;
    default :
    cout << "Ghalt choice";
  }
    cout << "Computer ka choice ";
    switch(computer_kaChoice){
    case 1 :
    	cout << rock;
    	break;
    case 2 :
    	cout << paper;
    	break;
    case 3 :
    	cout << scissor;
    	break;
    default :
    	cout << "Ghalt Choice ";
  }
  
  if(apka_choice == computer_kaChoice){
    cout<< "Draw "<<endl;
  }
  else if(apka_choice == 1 && computer_kaChoice == 3){
    cout << "Tum jeet gai"<<endl;
  }
  else if(apka_choice == 3 && computer_kaChoice == 2){
    cout << "Tum jeet gai"<<endl;
  }
  else if(apka_choice == 2 && computer_kaChoice == 1){
    cout << "Tum jeet gai"<<endl;
  }
  else{
    cout << "Ap har gai computer jeet gaya"<<endl;
  }
  
}
