#pragma once
#include <SDL3/SDL.h>
#include "Renderer.h"
#include "Transform.h"
class Object
{
private:
	bool _isPendingDestroy = false;
protected:
	//Vector2 _position;
	Renderer* _renderer = nullptr;
	Transform* _transform;
public:
	Object() { _transform = new Transform(); }
	~Object()
	{
		delete _transform;
		_transform = nullptr;

		delete _renderer;
		_renderer = nullptr;
	}
	virtual void Update() { _renderer->Update(0.02f); }
	void Render() { _renderer->Render(); }
	Transform* GetTransform() { return _transform; } // De momento no hace nada
	bool IsPendingDestroy() const { return _isPendingDestroy; }
	virtual void Destroy() { _isPendingDestroy = true; }

};