#pragma once
#include <SDL3/SDL.h>
#include <map>
#include <string>
#include <iostream>

#define RM RenderManager::GetInstance()

class RenderManager
{
public: 
	static RenderManager* GetInstance()
	{
		static RenderManager instance;
		return &instance;
	}

	const unsigned int WINDOW_WIDTH = 1360;
	const unsigned int WINDOW_HEIGHT = 768;
	void SayHi()
	{
		std::cout << "HIIIII";
	}

	void Init();
	void Release();
	void ClearScreen();
	void RendeScreen();

	SDL_Renderer* GetRenderer() { return _renderer; }
	void LoadTexture(std::string path);
	SDL_Texture* GetTexture(std::string path);

private:
	RenderManager() = default;
	RenderManager(RenderManager&) = default;
	RenderManager& operator=(const RenderManager&) = default;
	~RenderManager();

	SDL_Window* _window;
	SDL_Renderer* _renderer;
	std::map<std::string, SDL_Texture*> _textures;

	void InitSDL();
	void CreateWindowAndRenderer();

};
