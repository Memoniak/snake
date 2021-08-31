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

    engine.getSceneManager()->createScene<MainMenuScene>(*engine.getSystemManager(), *engine.getEntityManager());
    engine.getSceneManager()->openScene<MainMenuScene>();
    engine.update(1.0f);
    return 0;
}