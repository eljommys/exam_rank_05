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
        ASpell(std::string, std::string);
        ASpell(const ASpell &);
        virtual ~ASpell();
        std::string getName() const;
        std::string getEffects() const;
        virtual ASpell *clone() const = 0;
        ASpell &operator=(const ASpell &);
        void    launch(const ATarget &);
};

#include "ATarget.hpp"