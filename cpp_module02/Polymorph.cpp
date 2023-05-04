#include "Polymorph.hpp"

Polymorph::Polymorph(/* args */) : ASpell("Polymorph", "turned into a critter") {}
Polymorph::~Polymorph() {}
Polymorph *Polymorph::clone() const {
    return new Polymorph();
}
