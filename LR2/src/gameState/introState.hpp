#pragma once

#include <SDL2/SDL.h>
#include "gameState.hpp"
#include <memory>

namespace gameEngine { class engine; }

class introState : public gameState::state
{
private:

public:
    introState(/* args */)
    {

    }

    ~introState() override
    {
        cleanup();
    }

    int init() override;
    void cleanup() override;

    void pause() override;
    void resume() override;

    void events(gameEngine::engine * game) override;
    void update(gameEngine::engine * game) override;
    void draw(gameEngine::engine * game) override;
};