#pragma once
#include <iostream>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
    Polymorph(/* args */);
    ~Polymorph();
    virtual Polymorph *clone() const;

};
