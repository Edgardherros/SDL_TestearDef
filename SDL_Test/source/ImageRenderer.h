#pragma once
#include "Renderer.h"

class ImageRenderer : public Renderer
{
public:
	void Update() override;
	void LoadTexture(std::string texturePath, SDL_Renderer* renderer) override;
	void Render(SDL_Renderer* renderer) override;
	
};