/*
** Pol Bachelin, 2021
** redCodeEngine
** File description:
** ComponentPool
*/

#ifndef COMPONENTPOOL_HPP_
#define COMPONENTPOOL_HPP_

#include "IComponentPool.hpp"
#include <list>
#include "loguru/loguru.hpp"

template<class T>
class ComponentPool : public IComponentPool {
    public:
        ComponentPool() {
            LOG_F(INFO, "Creating Component Pool");
        }
        virtual ~ComponentPool() {};

        const char *getTypeName() const override {
            static const char *name { typeid(T).name() };
            return name;
        }
        
        void addComponent(AComponent *c)
        {
            _objects.push_back(c);
        }

        AComponent *createComponent() {
            AComponent *c = new AComponent();

            _objects.push_back(c);
            return c;
        }

        void destroyComponent(AComponent *c) {
            _objects.remove(c);
            delete c;
        }

    protected:
        std::list<AComponent *> _objects;
    private:
};

#endif /* !COMPONENTPOOL_HPP_ */
