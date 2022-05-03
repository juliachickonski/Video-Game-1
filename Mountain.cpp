#include "Enemies.h"
#include "UserCharacter.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

class Mountain {
private:
  bool skeleton_defeat = false;

public:
  void skeleton_battle(string key_art, string skeleton_art) {
    int user_choice;
    string cont;
    if (this->skeleton_defeat == false) {
      cout << skeleton_art;
      cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout << "You see a clearing in the cave and are put face to face with an "
              "\n"
              "Undead Warrior!! Do you...\n[1] Attack \n[2] Run Away ";
      std::cin >> user_choice;
      switch (user_choice) {
      case 1:
        cout << "You decided to attack the skeleton and knocked him to the "
                "ground. He doesnt get back up. You take his femur in case its "
                "needed later. (any key + enter)";
        set_skele_bone();
        set_mountain_key();
        set_num_keys();
        cout << key_art;
        this->skeleton_defeat = true;
        std::cin >> cont;
        break;
      case 2:
        cout << "You decide to run away like the coward you are.(any key + "
                "enter) ";
        std::cin >> cont;
        break;
      }
    } else {
      cout << "You enter the cave and all thats left is a pile of bones. (any "
              "key + enter)";
      std::cin >> cont;
    }
  }

  void cave_enterance(string key_art, string skeleton_art) {
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
      skeleton_battle(key_art, skeleton_art);
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