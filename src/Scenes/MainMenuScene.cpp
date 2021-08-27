/*
** Pol Bachelin, 2021
** snake
** File description:
** MainMenuScene
*/

#include "MainMenuScene.hpp"

MainMenuScene::MainMenuScene(SystemManager &systemManager, EntityManager &entityManager) : Scene<MainMenuScene>(systemManager, entityManager)
{
}

MainMenuScene::~MainMenuScene()
{
}

void MainMenuScene::start()
{
    LOG_F(INFO, "Start scene MainMenu");
}

void MainMenuScene::update()
{
    LOG_F(INFO, "Update scene MainMenu");
}

void MainMenuScene::end()
{
    LOG_F(INFO, "End scene MainMenu");
}
