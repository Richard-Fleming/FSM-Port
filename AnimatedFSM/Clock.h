#include <SDL2/SDL_timer.h>
#include <cstdint>

class Clock
{
private:
	Uint32 m_startTicks;

public:
	Clock();

	void start();
	void restart();
	uint32_t getTicks();
	float getTicksAsSeconds();
};