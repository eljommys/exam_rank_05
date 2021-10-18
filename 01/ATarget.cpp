#include "ATarget.hpp"

ATarget::ATarget(){

}

ATarget::ATarget(const ATarget &obj):type(obj.getType()){

}

ATarget::~ATarget(){

}

const std::string &ATarget::getType() const{
    return type;
}

void    ATarget::getHitBySpell(const ASpell &obj) const{
    std::cout << type << " has been " <<  obj.getEffects() << "!" << std::endl;
}
