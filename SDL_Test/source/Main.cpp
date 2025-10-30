#include <SDL3/SDL.h>
#include <iostream>
#include <exception>
#include "Game.h"
#include "RenderManager.h"
int main()
{

	RM->SayHi();


	
	Game game;

	try
	{
		game.Init();		
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what();
		game.Realease();
		return -1;
	}

	while (game.isRunning())
	{
		game.HandleEvents();
		game.Update();
		game.Render();
		
	}
	game.Realease();
	
	return 0;
}