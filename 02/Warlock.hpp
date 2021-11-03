#pragma once

#include <iostream>
#include <vector>
#include   "ASpell.hpp"
#include    "ATarget.hpp"
#include    "SpellBook.hpp"

// class SpellBook
// class ASpell
// class ATarget

class Warlock
{
    private:
        std::string name;
        std::string title;
        SpellBook spellbook;
    
    public:
        Warlock(const std::string &, const std::string &);
        ~Warlock();
        const std::string &getName() const;
        const std::string &getTitle() const;
        void    setTitle(const std::string &);
        void    introduce() const;

        void learnSpell(ASpell *);
        void forgetSpell(std::string);
        void launchSpell(std::string, ATarget &);
};
