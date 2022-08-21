#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <algorithm>
#include <typeinfo>

using namespace std;

string suits [4] {"Hearts", "Diamonds", "Spades", "Clubs"};
string ranks [13] {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
std::unordered_map<std::string, int> values{
    {"Two", 2}, {"Three", 3}, {"Four", 4}, {"Five", 5}, {"Six", 6}, {"Seven",7}, {"Eight", 8}, {"Nine", 9},
    {"Ten", 10}, {"Jack", 10}, {"Queen", 10}, {"King", 10}, {"Ace", 11}
    };
