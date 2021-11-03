#pragma once

#include <iostream>
#include <vector>


class ASpell;
class ATarget;

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::vector<ASpell *> spells;
    
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

#include   "ASpell.hpp"
#include    "ATarget.hpp"