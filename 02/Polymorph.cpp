#include "Polymorph.hpp"

Polymorph::Polymorph()
{
    name = "Polymorph";
    effects = "turned into a critter";
}

Polymorph *Polymorph::clone() const
{
    return (new Polymorph);
}