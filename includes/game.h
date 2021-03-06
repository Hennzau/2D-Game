#ifndef GAME
#define GAME

#include "window.h"
#include "camera.h"
#include "shader.h"
#include "texture.h"
#include "world.h"
#include "inventory.h"

static const int WIDTH = 1280;
static const int HEIGHT = 720;

class Inventory;

class Game
{
    public:
        Game();
        ~Game();
        void      update();
        void      render();

        Window    *getWindow() { return m_window; }
        Shader    *getMainShader() { return m_mainShader; }
        Input     *getInput() { return m_input; }
        Camera    *getCamera() { return m_camera; }
        Player    *getPlayer() { return m_player; }
        Inventory *getInventory() { return m_inventory; }

    private:
        Window        *m_window;
        Shader        *m_mainShader;
        Input         *m_input;
        Camera        *m_camera;
        Player        *m_player;
        World         *m_world;
        Inventory     *m_inventory;

        std::vector<float>    m_vertices;

        GLuint                m_vao,
                              m_vbo;
};

#endif
