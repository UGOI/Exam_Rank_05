#pragma once

#include "iostream"
#include "map"
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell *> map;
        SpellBook book;
        
        Warlock();
        Warlock(Warlock const &other);
        Warlock &operator=(Warlock const &other);

    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(std::string const &title);
        void introduce() const;
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &name);
        void launchSpell(std::string const &name, ATarget const &atarget);


};