#pragma once

#include <iostream>

class ASpell;

class ATarget
{
    protected:
        std::string type;

    public:
        ATarget();
        ATarget(std::string);
        ATarget(const ATarget &);
        virtual ~ATarget();
        std::string getType() const;
        virtual ATarget *clone() const = 0;
        ATarget &operator=(const ATarget &);
        void       getHitBySpell(const ASpell &) const;
};

#include "ASpell.hpp"