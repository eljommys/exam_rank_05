#include "Fireball.hpp"

Fireball::Fireball()
{
    name = "Fireball";
    effects = "burnt to a crisp";
}

Fireball *Fireball::clone() const
{
    return (new Fireball);
}