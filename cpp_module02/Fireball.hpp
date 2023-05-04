#pragma once
#include <iostream>
#include "ASpell.hpp"

class Fireball : public ASpell
{
public:
    Fireball(/* args */);
    ~Fireball();
    virtual Fireball *clone() const;

};