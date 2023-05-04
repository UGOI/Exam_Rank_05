#pragma once
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
    Fwoosh(/* args */);
    ~Fwoosh();
    virtual Fwoosh *clone() const;

};