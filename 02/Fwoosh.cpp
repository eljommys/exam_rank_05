#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
    name = "Fwoosh";
    effects = "fwooshed";
}

Fwoosh *Fwoosh::clone() const
{
    return (new Fwoosh);
}