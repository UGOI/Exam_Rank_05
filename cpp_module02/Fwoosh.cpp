#include "Fwoosh.hpp"

Fwoosh::Fwoosh(/* args */) : ASpell("Fwoosh", "fwooshed") {}
Fwoosh::~Fwoosh() {}
Fwoosh *Fwoosh::clone() const {
    return new Fwoosh();
}