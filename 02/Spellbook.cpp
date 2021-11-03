#include "SpellBook.hpp"

SpellBook::~SpellBook()
{
    std::vector<ASpell *>::iterator i;
    for (i = spells.begin(); i < spells.end(); i++)
    {
        delete *i;
        i = spells.erase(i);
    }
}

void SpellBook::learnSpell(ASpell *obj)
{
	if (obj)
	{
		std::vector<ASpell *>::iterator i;
		for (i = spells.begin(); i < spells.end(); i++)
		{
			if ((*i)->getName() == obj->getName())
				return ;
		}
		spells.push_back(obj->clone());
	}
}

void SpellBook::forgetSpell(const std::string &name)
{
	std::vector<ASpell *>::iterator i;
	for (i = spells.begin(); i < spells.end(); i++)
	{
		if ((*i)->getName() == name)
		{
			delete *i;
			i = spells.erase(i);
		}
	}
}

ASpell    *SpellBook::createSpell(std::string const &name)
{
	std::vector<ASpell *>::iterator i;
	for (i = spells.begin(); i < spells.end(); i++)
	{
		if ((*i)->getName() == name)
			return (*i)->clone();
	}
    return NULL;
}
