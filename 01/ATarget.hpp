#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget{
    protected:
        std::string type;

    public:
        ATarget();
        ATarget(const ATarget &);
        ~ATarget();

        const std::string &getType() const;
        virtual ATarget *clone() const = 0;
        void    getHitBySpell(const ASpell &) const;
};