#ifndef UserCharacter_H
#define UserCharacter_H

#include <string>

int num_keys;
bool hero_sword;
bool mountain_key;
bool guard_key;
bool plains_key;

void player_stats();
void set_num_keys();
int get_num_keys();
void set_guard_key();
bool get_guard_key();

#endif