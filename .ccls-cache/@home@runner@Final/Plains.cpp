#include <iostream>
#include <string>

using std::cout;
using std::string;

class Plain {
public:
  void plain_interaction() {
    int choice;
    cout << "You journey across the wide plains of yonder and come across a "
            "wolf. You notice something shining from the neck of the beast. Do "
            "you... \n[1] Grab\n[2] Leave";
    std::cin >> choice;
    switch (choice){
      case 1:
        return;
      case 2:
        return;
      }
  }
};