#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title)
{
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

void	Warlock::setTitle(const std::string &title)
{
	this->title = title;
}

void	Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *obj)
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

void Warlock::forgetSpell(std::string name)
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

void Warlock::launchSpell(std::string name, ATarget &obj)
{
	std::vector<ASpell *>::iterator i;
	for (i = spells.begin(); i < spells.end(); i++)
	{
		if ((*i)->getName() == name)
		{
			(*i)->launch(obj);
			return;
		}
	}
}
