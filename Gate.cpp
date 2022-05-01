#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

class Gate{
public: 
  void guard_dialogue(int num_keys){
    string okay = "";
    cout << "\nThe guard calls out to you, 'Hello Traveller, do you posess the three keys \nneeded to complete the King's Challenge?' \nDo you have the keys? (y/n) ";
    cin >> okay;
    if (okay == "y" || okay == "Y"){
      if (num_keys < 3){
        cout << "\nSorry you don't have all three keys. Return when you have found them all ";
      }
      else if (num_keys == 3){
        cout << "Congrats! See King Blade to redeem your prize.";
      }
    }else if (okay == "n"||okay == "N"){
      cout << "Guard: Go young adventurer and find all three keys. ";
    }
    
    cout << "\nWhat do you want to do? (talk/leave) ";
    cin >> okay;
    if (okay == "talk" || okay == "Talk" || okay == "TALK"){
      cout << "Hello traveller, how may I help you?\n[] Talk \n[] Give Keys\n";
      cin >> okay;
        if (okay == "talk" || okay == "Talk" || okay == "TALK"){
          cout << "Guard: I've been at it for years and I cannot find the other keys, if you beat me in my game I will give you the one key I possess. Whaddaya say? Want to play a game? (y/n) ";
          
        }else if (okay == "give keys" || okay == "Give Keys" || okay == "Give keys"|| okay == "GIVE KEYS"){
          check_keys(num_keys);
        }
    }else if (okay == "leave" || okay == "Leave" || okay == "LEAVE"){
      return;
    }
      

  }
/*
  void check_keys(int num_keys){
    if (num_keys < 3){
        cout << "\nSorry you don't have all three keys. Return when you have found them all ";
      }else if (num_keys == 3){
        cout << "Congrats! See King Blade to redeem your prize.";
      }
  }
*/
};
