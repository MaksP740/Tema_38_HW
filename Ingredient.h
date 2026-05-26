#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::priority_queue;


class Ingredient {
    string name;
    int time;
public:
    Ingredient();
    Ingredient(string name, int time);

    string getName() const;
    int getTime() const;

    bool operator < (const Ingredient& obj) const;

    void showMulti() const;
};

