/*
** EPITECH PROJECT, 2021
** redCodeEngine
** File description:
** SceneManager
*/

#include "SceneManager.hpp"

SceneManager::SceneManager(SystemManager &systemManager, EntityManager &entityManager) :
_entityManager(entityManager), _systemManager(systemManager)
{
    LOG_F(INFO, "Initializing Scene Manager");
}

SceneManager::~SceneManager()
{
}

void SceneManager::update(float dt)
{
    if (_currentScene == nullptr) {
        LOG_F(INFO, "No scene to Update");
        return;
    }
    _systemManager.update(dt);
    _currentScene->update();
    _entityManager.cleanDestroyedEntities();
}