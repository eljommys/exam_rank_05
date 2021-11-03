#pragma once

#include <vector>

class ASpell;

class SpellBook
{
    private:
        std::vector<ASpell *> spells;

    public:
        ~SpellBook();
        void learnSpell(ASpell *);
        void forgetSpell(const std::string &);
        ASpell* createSpell(std::string const &);
};

#include "ASpell.hpp"