/*
** Pol Bachelin, 2021
** snake
** File description:
** main
*/

#include <iostream>
#include "Engine.hpp"
#include "Snake.hpp"
#include "MainMenuScene.hpp"

int main(void)
{
    ECS::Engine engine;

    EntityID snake = engine.getEntityManager()->createEntity<Snake>();

    engine.getSceneManager()->createScene<MainMenuScene>();
    engine.getSceneManager()->openScene<MainMenuScene>();
    engine.update(1.0f);
    return 0;
}