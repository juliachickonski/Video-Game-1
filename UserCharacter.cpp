#include <cstdlib>
#include <iostream>
#include <string>
#include "UserCharacter.h"

using std::cin;
using std::cout;
using std::string;

class Character {
public:

  int num_keys = 0;
  bool hero_sword = false;
  bool mountain_key = false;
  bool guard_key = false;
  bool plains_key = false;

  void player_stats() {
    int health = 20;
    int base_attack = 5;
    int sword_attack = 10;
  }

  // setter and getter for total number of keys 
  void set_num_keys() { num_keys += 1; }
  int get_num_keys() { return num_keys; }

  // does the user have the key from the guard or not
  void set_guard_key() {guard_key = true; }
  bool get_guard_key() { return guard_key; }
};