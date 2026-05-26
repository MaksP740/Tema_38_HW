#include "Ingredient.h"

Ingredient::Ingredient() {
    name = "Невідомо";
    time = 0;
}

Ingredient::Ingredient(string name, int time) {
    this->name = name;
    this->time = time;
}

string Ingredient::getName() const {
    return name;
}

int Ingredient::getTime() const {
    return time;
}

bool Ingredient::operator<(const Ingredient &obj) const {
    return time < obj.time;
}

void Ingredient::showMulti() const {
}
