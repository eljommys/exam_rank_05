#include "TargetGenerator.hpp"

TargetGenerator::~TargetGenerator()
{
    std::vector<ATarget *>::iterator i;
    for (i = targets.begin(); i < targets.end(); i++)
    {
        delete *i;
        i = targets.erase(i);
    }
}

void TargetGenerator::learnTargetType(ATarget *obj)
{
	if (obj)
	{
		std::vector<ATarget *>::iterator i;
		for (i = targets.begin(); i < targets.end(); i++)
		{
			if ((*i)->getType() == obj->getType())
				return ;
		}
		targets.push_back(obj->clone());
	}
}

void TargetGenerator::forgetTargetType(const std::string &type)
{
	std::vector<ATarget *>::iterator i;
	for (i = targets.begin(); i < targets.end(); i++)
	{
		if ((*i)->getType() == type)
		{
			delete *i;
			i = targets.erase(i);
		}
	}
}

ATarget    *TargetGenerator::createTarget(std::string const &type)
{
	std::vector<ATarget *>::iterator i;
	for (i = targets.begin(); i < targets.end(); i++)
	{
		if ((*i)->getType() == type)
			return (*i)->clone();
	}
    return NULL;
}