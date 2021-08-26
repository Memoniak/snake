/*
** EPITECH PROJECT, 2021
** redCodeEngine
** File description:
** Engine
*/

#include "Engine.hpp"

using namespace ECS;

Engine::Engine()
{
    _systemManager = std::make_shared<SystemManager>();
    _componentManager = std::make_shared<ComponentManager>();
    _entityManager = std::make_shared<EntityManager>(_componentManager.get());
}

Engine::~Engine()
{
}

std::shared_ptr<EntityManager> Engine::getEntityManager() const
{
    return _entityManager;
}

std::shared_ptr<ComponentManager> Engine::getComponentManager() const
{
    return _componentManager;
}

std::shared_ptr<SystemManager> Engine::getSystemManager() const
{
    return _systemManager;
}

void Engine::update(float dt)
{
    _systemManager->update(dt);
    _entityManager->cleanDestroyedEntities();
}