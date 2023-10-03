#include "Charmander.hpp"
#include "Nurse.hpp"
#include "Pikachu.hpp"

void dump_charm(const pkmn::Charmander &charm)
{
    std::cout << charm.species() << " -- of type: " << charm.type()
              << " -- named: " << charm.name() << " -- hp " << charm.hp()
              << std::endl;
}

int main(void)
{
    pkmn::Charmander charm("Antoine");

    dump_charm(charm);
    charm.health() -= 10;
    dump_charm(charm);
}