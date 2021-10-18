#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class Warlock{
    private:
        std::string name;
        std::string title;
        std::string *spells;
    public:
        Warlock(std::string, std::string);
        ~Warlock();

        const std::string &getName() const;
        const std::string &getTitle() const;

        void setTitle(const std::string &);
        void introduce() const;

        void learnSpell(ASpell *);
        void forgetSpell(std::string);
        void launchSpell(std::string, ATarget &);
};