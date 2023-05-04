#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
    std::map<std::string, ASpell *>::iterator it = map.begin();
    std::map<std::string, ASpell *>::iterator end = map.end();
    
    while (it != end) {
        delete it->second;
        it++;
    }
    map.clear();
}

void SpellBook::learnSpell(ASpell *spell) {
    if (spell)
        map.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const &name) {
    std::map<std::string, ASpell *>::iterator it = map.find(name);
    std::map<std::string, ASpell *>::iterator end = map.end();
    
    if (it != end) {
        delete it->second;
        map.erase(name);
    }
}

ASpell* SpellBook::createSpell(std::string const &name) {
    ASpell *spell = map[name];
    return spell;
}

