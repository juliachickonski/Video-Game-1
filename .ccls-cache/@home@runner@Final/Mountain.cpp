#include "UserCharacter.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

class Mountain {
private:
  bool skeleton_defeat = false;

public:
  void skeleton_battle() {
    bool go_battle = this->skeleton_defeat;
    int user_choice;

    if (go_battle == false) {
      cout << "You see a clearing in the cave and are put face to face with an "
              "Undead Warrior!! Do you...\n [1] Attack \n[2] Run Away ";
      switch (user_choice) {
      case 1: 
        
        break;
      case 2:
        
        break;
      }
    } else {
      cout << "You enter the cave and all thats left is a pile of bones. ";
    }
  }

  void cave_enterance() {
    cout << "You approach an opening in the side of the mountain and see the "
            "iron bars \nprotecting the cave are broken. \nDo you... \n[1] "
            "investigate \n[2] turn back? ";
    int user_choice;
    std::cin >> user_choice;
    string decision;
    switch (user_choice) {
    case 1:
      cout << "You squeeze between the bars and begin to wonder the dark, damp "
              "cave... (any key + enter)";
      std::cin >> decision;
      // enter maze
      // skeleton fight ?? maybe
      break;
    case 2:
      cout << "Not quite up for damp caves right now. I'll be back later. (any "
              "key + enter)";
      string confirm;
      std::cin >> confirm;
      break;
    }
    return;
  }
};