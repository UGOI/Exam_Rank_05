#pragma once 

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(Warlock &other);
        Warlock &operator=(Warlock const &other);
        std::map<std::string, ASpell *> arr;
    public:
        ~Warlock();
        Warlock(std::string const &name, std::string const &title);
        std::string const &getName() const;
        std::string const &getTitle() const;
        void setTitle(std::string const &title);
        void introduce() const;

        void learnSpell(ASpell const *spell);

        void forgetSpell(std::string const &name);

        void launchSpell(std::string const &name, ATarget &target);
};