#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell{
    protected:
        std::string name;
        std::string effects;
    public:
        ASpell(std::string, std::string);
        ASpell();
        ASpell(const ASpell &);
        ~ASpell();

        std::string getName() const;
        std::string getEffects() const;

        virtual ASpell  *clone() const = 0;
        void launch(const ATarget &) const;
};
