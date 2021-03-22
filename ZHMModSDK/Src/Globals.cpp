#include "Globals.h"
#include "GlobalsImpl.h"

PATTERN_RELATIVE_GLOBAL(
	"\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x4C\x89\x64\x24\x30",
	"xxx????x????xxxxx",
	3,
	ZGameLoopManager*, GameLoopManager
)

PATTERN_RELATIVE_GLOBAL(
	"\x48\x8B\x1D\x00\x00\x00\x00\x48\x85\xDB\x75\x00\xE8\x00\x00\x00\x00\x48\x8B\x1D\x00\x00\x00\x00\x48\x8D\x15",
	"xxx????xxxx?x????xxx????xxx",
	3,
	ZTypeRegistry**, TypeRegistry
)

PATTERN_RELATIVE_GLOBAL(
	"\x48\x8D\x0D\x00\x00\x00\x00\xF3\x0F\x7F\x45\xF7\xF3\x0F\x7F\x45\x17",
	"xxx????xxxxxxxxxx",
	3,
	ZGameTimeManager**, GameTimeManager
)

PATTERN_RELATIVE_GLOBAL(
	"\x48\x89\x3D\x00\x00\x00\x00\x48\x89\x1D\x00\x00\x00\x00\x66\x89\x5C\x24\x40",
	"xxx????xxx????xxxxx",
	3,
	ZHitman5Module**, Hitman5Module
)

PATTERN_RELATIVE_GLOBAL(
	"\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x88\x87\x89\x00\x00\x00",
	"xxx????x????xxxxxx",
	3,
	ZGameContext*, GameContext
)

PATTERN_RELATIVE_GLOBAL(
	"\x4C\x8D\x25\x00\x00\x00\x00\x83\xFA",
	"xxx????xx",
	3,
	ZActorManager*, ActorManager
)

PATTERN_RELATIVE_GLOBAL(
	"\x8B\x15\x00\x00\x00\x00\x48\x8B\x44\x24\x78",
	"xx????xxxxx",
	2,
	uint16_t*, NextActorId
)

PATTERN_RELATIVE_GLOBAL(
	"\x48\x89\x05\x00\x00\x00\x00\x48\x8B\x48\x10\x48\x8B\xD3\x48\x8B\x01\xFF\x50\x48\x48\x8D\x4E\x60",
	"xxx????xxxxxxxxxxxxxxxxx",
	3,
	ZMemoryManager**, MemoryManager
)

PATTERN_RELATIVE_GLOBAL(
	"\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x40\x0F\xB6\xD5",
	"xxx????x????xxxx",
	3,
	ZRenderManager*, RenderManager
)


PATTERN_RELATIVE_GLOBAL(
	"\x48\x89\x1D\x00\x00\x00\x00\x48\x8D\x15",
	"xxx????xxx",
	3,
	ZApplicationEngineWin32**, ApplicationEngineWin32
)
