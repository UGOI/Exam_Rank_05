#pragma once
#include <iostream>

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        ASpell();
        ASpell(ASpell const &other);
        ASpell &operator=(ASpell const &other);
        ASpell(const std::string &name, const std::string &effects);
        virtual ~ASpell();
        std::string const &getName() const;
        std::string const &getEffects() const;
        virtual ASpell *clone() const = 0;
        void launch(ATarget const &atarget) const;

};