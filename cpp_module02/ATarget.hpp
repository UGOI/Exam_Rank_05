#pragma once

#include <iostream>

class ASpell;

class ATarget
{
    private:
        std::string type;

    public:
        ATarget();
        ATarget(ATarget const &other);
        ATarget &operator=(ATarget const &other);
        ATarget(const std::string &type);
        virtual ~ATarget();
        std::string const &getType() const;
        virtual ATarget *clone() const = 0;
        void getHitBySpell(ASpell const &spell) const;
};