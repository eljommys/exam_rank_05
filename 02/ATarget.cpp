#include "ATarget.hpp"

ATarget::ATarget()
{

}

ATarget::ATarget(std::string type): type(type)
{

}

ATarget::ATarget(const ATarget &obj)
{
    type = obj.getType();
}

ATarget::~ATarget()
{

}

std::string ATarget::getType() const
{
    return type;
}

ATarget &ATarget::operator=(const ATarget &obj)
{
    type = obj.getType();
    return *this;
}

void       ATarget::getHitBySpell(const ASpell &obj) const
{
    std::cout << type << " has been " << obj.getEffects() << "!" << std::endl;
}