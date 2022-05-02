#include <fstream>
#include <iostream>
#include <string>

#include "UserCharacter.h"
#include "Background.cpp"
#include "Enemies.cpp"
#include "Gate.cpp"
#include "Items.cpp"
#include "Mountain.cpp"
#include "Plains.cpp"

using std::cin;
using std::cout;
using std::string;


Enemies en = Enemies();
Background ba = Background();
Items item = Items();
Gate gate = Gate();
Mountain mountain = Mountain();
Plain plain = Plain();

int main() {
  string okay;
  int num_keys = 0;
  bool all_keys = true;

  cout << "\n\nBefore you begin, make sure this line is fully across your "
          "screen to make sure \nthe art does not warp (press any key + "
          "enter). \n\n";
  cout << "____________________________________________________________________"
          "___________";
  // cin >> okay;

  cout << ba.redraw_background();
  const string intro = R"(
   Your feet ache as you finally reach the gates of Snowchester (which is  
     unsettling as the place is covered in flames,, and has a volcano?).
       Nevermind that, you're here to complete King Blade's Challenge.
  )";
  cout << intro;

  cout << ba.gate();
  gate.guard_dialogue(num_keys, item.read_key());

  do {
    cout << ba.redraw_background();
    cout << ba.crossroad();

    cout << "\nYou turn back to the path and encounter a fork in the road with "
            "a sign between reading: \n[1] 'left: mountain'\n[2] 'right: "
            "plains'\n[3] 'down: Snowchester'";
    int direction;
    cout << "\nWhich way do you want to go? (1,2,3) ";
    cin >> direction;
    switch (direction) {
    case 1:
      cout << ba.redraw_background();
      cout << ba.mountain();
      cout << "You decide to head to the mounains to see if you can find "
              "any clues.\n(any key + enter) ";
      cin >> okay;

      cout << ba.redraw_background();
      cout << ba.cave();
      mountain.cave_enterance();
      break;

    case 2:
      cout << ba.redraw_background();
      cout << ba.plains();
      plain.plain_interaction(item.read_key());
      break;
      
    case 3:
      cout << ba.redraw_background();
      cout << ba.gate();
      gate.guard_dialogue(num_keys, item.read_key());
      break;
    }
  } while (all_keys == true);

  cout << "\n\nend of program";
  exit(0);
  return (0);

  cout << item.read_key();
  cout << ba.redraw_background();

  cout << item.read_sword();
  cout << ba.redraw_background();

  cout << en.skeleton();
  cout << ba.redraw_background();

  cout << en.boss();
  cout << ba.redraw_background();

  cout << ba.plains();
  cout << ba.redraw_background();

  cout << ba.crossroad();
  cout << ba.redraw_background();

  cout << ba.cave();
  cout << ba.redraw_background();

  cout << ba.mountain();
  cout << ba.redraw_background();
}