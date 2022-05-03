#include <fstream>
#include <iostream>
#include <string>

#include "Background.cpp"
#include "Enemies.cpp"
#include "Enemies.h"
#include "Gate.cpp"
#include "Items.cpp"
#include "Mountain.cpp"
#include "Plains.cpp"
#include "UserCharacter.h"

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

  if (all_keys == true) {
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

    case 3: {
      cout << ba.redraw_background();
      cout << ba.gate();
      bool go_castle = gate.guard_dialogue(num_keys, item.read_key());

      if (go_castle == false) {
        all_keys = false;
      }
      break;
    }
    }
    // the final scene
    cout << ba.redraw_background();
    cout << "You finally enter the large gate and approach the castle. Before "
            "you even arrive, you are approached...";
    cout << en.boss();
    cout << "King Blade: Hello traveller. I see you have completed my "
            "challenge. You are not the first, and most certainly not the last "
            "to complete my challenge. In reward, I am offering you a seat on "
            "my Royal Guard. Do you accept? \n[1] Yes \n[2] No";
    int user_choice;
    switch (user_choice) {
    case 1:
      cout << "Welcome to the guard! I will have the servants set a room for "
              "you.";
      break;
    case 2:
      cout << "I see, you'd much rather continue on your journey. Well thank "
              "you for completing my quest";
      break;
    }

    cout << "\n\nend of program";

    exit(0);
    return (0);

    cout << item.read_key();
    cout << ba.redraw_background();

    cout << item.read_sword();
    cout << ba.redraw_background();

    cout << skeleton();
    cout << ba.redraw_background();

    cout << boss();
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
}