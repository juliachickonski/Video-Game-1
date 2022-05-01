#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;

class Gate{

public: 
  
  //determines if user has the three keys needed to get through the gate
  void check_keys(int num_keys){
      if (num_keys < 3){
          cout << "\nSorry you don't have all three keys. Return when you have found them all ";
        }else if (num_keys == 3){
          cout << "\nCongrats! See King Blade to redeem your prize.";
        }
    }

  bool guard_game(bool guard_key){
    cout << "\n To win this game, you must correctly guess the suit of the card I draw. \nIs the card: Heart, Diamond, Spade, or Club? ";
    int guard_random = rand() % 3;
              string guard_card;
              string user_card;
              cin >> user_card;
              switch (guard_random){
                case 0:
                  guard_card = "heart";
                case 1:
                  guard_card = "diamond";
                case 2:
                  guard_card = "spade";
                case 3:
                  guard_card = "club";
                }
              if (guard_card == user_card){
                cout << "You win! Here is your reward.";
                guard_key = true;
                return guard_key;
              }else {
                cout << "You loose. The card was "+ guard_card +". Play again if you want to win.";
                guard_key = false;
                return guard_key;
              }
  }

  void guard_dialogue(int num_keys){
    string okay = "";
      
    cout << "\nThe guard calls out to you, 'Hello Traveller, do you posess the three keys \nneeded to complete the King's Challenge?' \nDo you have the keys? (y/n) ";
    cin >> okay;
    check_keys(num_keys);
    bool stay = true;
    do {   
      cout << "\nWhat do you want to do? (talk/leave) ";
      cin >> okay;
      if (okay == "talk" || okay == "Talk" || okay == "TALK"){
        cout << "Hello traveller, how may I help you?\n[] Talk \n[] Give_Keys\n";
        cin >> okay;
          if (okay == "talk" || okay == "Talk" || okay == "TALK"){
            bool guard_key = false; // false if user hasnt recieved key from guard
            cout << "\nGuard: I've been at it for years and I cannot find the other keys, if you beat me in my game I will give you the one key I possess. Whaddaya say? Want to play a game? (y/n) ";
            cin >> okay;
            if (okay == "y" || okay == "Y"){
                guard_game(guard_key);
                
            }else if (okay == "n" || okay == "N"){
              cout << "Good luck on your adventure! See you later.";
              }
          }else if (okay == "give_keys" || okay == "Give_Keys" || okay == "Give_keys"|| okay == "GIVE_KEYS"){
            check_keys(num_keys);
          }
      }else if (okay == "leave" || okay == "Leave" || okay == "LEAVE"){
        stay = false;
      }
  }while(stay == true);
}
};
