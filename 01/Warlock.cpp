#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title):name(name),title(title)
{
    spells = NULL;
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const
{
    return name;
}

const std::string &Warlock::getTitle() const
{
    return title;
}

void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void learnSpell(ASpell *obj)
{
    std::string *aux;
    int i;

    for(i = 0; spells[i] && spells[i] != obj.getName(); i++);
    if (!spells[i])
        aux = new std::string[i + 1];
    for (int j = 0; j <= i; j++)
        aux[j] = spells[j];
    aux[i + 1] = NULL;
    delete[] spells;
    spells = aux;
}

void forgetSpell(std::string)
{

}

void launchSpell(std::string, ATarget &)
{

}
