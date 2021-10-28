#include "Clock.h"

Clock::Clock()
{
	restart();
}

void Clock::start()
{
	m_startTicks = SDL_GetTicks();
}

void Clock::restart()
{
	m_startTicks = 0;
	start();
}

Uint32 Clock::getTicks()
{
	return SDL_GetTicks() - m_startTicks;
}

float Clock::getTicksAsSeconds()
{
	return getTicks() / 1000.0f;
}