
#include "UserCharacter.h"
#include <cstdlib>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

// different items recieved in game
int num_keys = 0;
bool hero_sword = false;
bool mountain_key = false;
bool guard_key = false;
bool plains_key = false;
bool skeleton_bone = false;

int enter_castle = 4;

int health = 20;
int base_attack = 5;
int sword_attack = 10;

void player_stats() {}

// setter and getter for total number of keys
void set_num_keys() { num_keys = num_keys + 1; }
int get_num_keys() { return num_keys; }

// does the user have the key from the guard or not
void set_guard_key() { guard_key = true; }
bool get_guard_key() { return guard_key; }

void set_plains_key() { plains_key = true; }
bool get_plains_key() { return plains_key; }

void set_skele_bone() { skeleton_bone = true; }
bool get_skele_bone() { return skeleton_bone; }

void set_mountain_key() { mountain_key = true; }
bool get_mountain_key() { return mountain_key; }

int user_attack() {
  int attack;
  if (hero_sword == true) {
    attack = sword_attack;
  }else {
    attack = base_attack;
  }

  return attack;
  }

int get_enter_castle(){
  return enter_castle;
}
  
