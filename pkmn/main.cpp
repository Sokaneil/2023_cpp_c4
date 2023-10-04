#include "APokemon.hpp"
#include "Charmander.hpp"
#include "Nurse.hpp"
#include "Pikachu.hpp"

void dump_charm(const pkmn::Apokemon &charm)
{
    std::cout << charm.species() << " -- of type: " << charm.type()
              << " -- named: " << charm.name() << " -- hp " << charm.health()
              << std::endl;
}

void dump_pika(const pkmn::Apokemon &pika)
{
    std::cout << pika.species() << " -- of type: " << pika.type()
              << " -- named: " << pika.name() << "-- hp " << pika.health()
              << std::endl;

    std::string_view given_name{pika.name()};

    auto numberof_e{std::count(given_name.begin(), given_name.end(), 'e')};
    std::cout << "its name contains " << numberof_e << " time·s the letter e."
              << "\n";
}

int main(void)
{
    pkmn::Pikachu    pika("Antoine");
    pkmn::Charmander charm("Daniel");
    pkmn::Nurse      nurse;

    dump_pika(pika);
    pika.health() -= 10;
    dump_pika(pika);
    pika.health() -= 90;
    std::cout << "has fainted? " << ((pika.fainted()) ? "yes" : "no") << "\n";
    dump_charm(charm);
    charm.health() -= 20;
    dump_charm(charm);
    charm.health() -= 80;
    std::cout << "has fainted? " << ((charm.fainted()) ? "yes" : "no") << "\n";
    std::cout << "After the battle" << std::endl;
    nurse.heal(pika);
    nurse.heal(charm);
    std::cout << pika.name() << " is healed back to " << pika.health() << "hp\n";
    std::cout << charm.name() << " is healed back to " << charm.health()
              << "hp\n";

    return 0;
}