#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : name(name), title(title) {
    // <NAME>: This looks like another boring day.
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    // <NAME>: My job here is done!
    std::cout << this->name << ": My job here is done!" << std::endl;
    std::map<std::string, ASpell *>::iterator it = map.begin();
    std::map<std::string, ASpell *>::iterator end = map.end();
    
    while (it != end) {
        delete it->second;
        it++;
    }
    map.clear();
}

std::string const &Warlock::getName() const {return this->name;}
std::string const &Warlock::getTitle() const {return this->title;}
void Warlock::setTitle(std::string const &title) {this->title = title;}
void Warlock::introduce() const {
    // <NAME>: I am <NAME>, <TITLE>!
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
    book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const &name) {
    book.forgetSpell(name);
}

void Warlock::launchSpell(std::string const &name, ATarget const &atarget) {
    ASpell *spell = book.createSpell(name);

    if (spell)
        spell->launch(atarget);
}

