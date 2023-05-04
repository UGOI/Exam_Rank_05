#include "ATarget.hpp"
#include "ASpell.hpp"


ATarget::ATarget() {}


ATarget::ATarget(ATarget const &other) : type(other.type) {}

ATarget &ATarget::operator=(ATarget const &other) {
    this->type = other.type;
    return *this;
}

ATarget::ATarget(const std::string &type) : type(type) {
}
ATarget::~ATarget() {
}
std::string const &ATarget::getType() const { return this->type; }

void ATarget::getHitBySpell(ASpell const &spell) const {
    // <TYPE> has been <EFFECTS>!

    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}

