#pragma once
#include "GameObject.h"
#include "ImageRenderer.h"

class ImageObject : public Object
{
public:
	ImageObject(std::string texturePath, SDL_Renderer* renderer)
	{
		_renderer = new ImageRenderer();
		_renderer->LoadTexture(texturePath, renderer);
		_renderer->SetDestinationRect({ _position.x, _position.y,100.0f,100.0f });
	}
	~ImageObject()
	{
		delete _renderer;
	}
};