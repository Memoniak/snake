/*
** Pol Bachelin, 2021
** snake
** File description:
** MainMenuScene
*/

#ifndef MAINMENUSCENE_HPP_
#define MAINMENUSCENE_HPP_

#include "Scene.hpp"

class MainMenuScene : public Scene<MainMenuScene> {
    public:
        MainMenuScene(SystemManager &systemManager, EntityManager &entityManager);
        ~MainMenuScene();

        void start() override;
        void update() override;
        void end() override;
    protected:
    private:
};

#endif /* !MAINMENUSCENE_HPP_ */
