#include <fstream>
#include <iostream>
#include <string>

#include "Enemies.cpp"
#include "Background.cpp"
#include "Items.cpp"
#include "Gate.cpp"

using std::cin;
using std::cout;
using std::string;

Enemies en = Enemies();
Background ba = Background();
Items item = Items();
Gate gate = Gate();


int main() {
  string okay;
  int num_keys = 0;
  
  cout << "\n\nBefore you begin, make sure this line is fully across your screen to make sure \nthe art does not warp (press any key + enter). \n\n" ;
    cout << "_______________________________________________________________________________";
    //cin >> okay;
  
  cout << ba.redraw_background();
  const string intro = R"(
   Your feet ache as you finally reach the gates of Snowchester (which is  
     unsettling as the place is covered in flames,, and has a volcano?).
       Nevermind that, you're here to complete King Blade's Challenge.
  )";
  cout << intro;
  cout << ba.gate();

  while (bool all_keys = true){ 
    gate.guard_dialogue(num_keys);

    cout << ba.redraw_background();
    cout << ba.crossroad();
    cout <<" You leave the gate and wonder back off to the path. You encounter a fork in the road with a sign between reading: \n'left: mountain'\n'right: mountain'";
    
    
    cout << "success";
    exit(0);
    return(0);
    }


  
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