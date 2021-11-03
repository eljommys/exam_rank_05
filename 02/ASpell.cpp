#include "ASpell.hpp"

ASpell::ASpell()
{

}

ASpell::ASpell(std::string name, std::string effects): name(name), effects(effects)
{

}

ASpell::ASpell(const ASpell &obj)
{
    name = obj.getName();
    effects = obj.getEffects();
}

ASpell::~ASpell()
{

}

std::string ASpell::getName() const
{
    return name;
}

std::string ASpell::getEffects() const
{
    return effects;
}

ASpell &ASpell::operator=(const ASpell &obj)
{
    name = obj.getName();
    effects = obj.getEffects();
    return *this;
}

void    ASpell::launch(const ATarget &obj)
{
    obj.getHitBySpell(*this);
}