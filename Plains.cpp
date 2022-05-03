#include "UserCharacter.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

class Plain {
public:
  // main interaction betweeen user and wolf
  void plain_interaction(string key_art) {
    int choice;
    string cont;
    bool got_key = get_plains_key();
    if (got_key == false) { // sees if user has gotten the plains key already
      cout << "You journey across the wide plains of yonder and come across a "
              "wolf. You notice something shining from the neck of the beast. "
              "Do you... \n[1] Grab\n[2] Leave ";
      std::cin >> choice;
      switch (choice) {
      case 1: {
        bool found_bone = get_skele_bone();
        if (found_bone == false){
          cout << "\nYou extend your hand out towards the wolf and it lunges "
                  "aggressively at you. You decide its not worth the risk to "
                  "loose a hand and decide to come back later.Maybe you can "
                  "find something to distract it. (any key + enter) ";
        std::cin >> cont;
  
        return;
      }
        else {
          set_plains_key();
          got_key = get_plains_key();
          set_num_keys();
          cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "You toss the bone you retrieved to the wolf and he lets you remove the key from his neck. ";
          cout << key_art + "\n(any key + enter)";
          std::cin >> cont;
          return;
        }
      }
    case 2:
      cout << "You decide not to mess with the angry wolf and decide to head "
              "back to the trail (any key + enter)";
      std::cin >> cont;
      return;
    }
  }
  else {
    cout << "The wolf ignores you as he happily munches on his bone.";
  }
}
}
;