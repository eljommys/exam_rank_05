#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects):name(name), effects(effects){
}

ASpell::ASpell(){

}

ASpell::ASpell(const ASpell &obj):name(obj.getName()), effects(obj.getEffects()){

}

ASpell::~ASpell(){

}

std::string ASpell::getName() const{
    return name;
}

std::string ASpell::getEffects() const{
    return name;
}

void ASpell::launch(const ATarget &obj) const{
    obj.getHitBySpell(*this);
}