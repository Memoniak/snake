/*
** Pol Bachelin, 2021
** snake
** File description:
** main
*/

#include <iostream>
#include "Engine.hpp"
#include "Snake.hpp"

int main(void)
{
    ECS::Engine engine;

    EntityID snake = engine.getEntityManager()->createEntity<Snake>();

    return 0;
}