//#define SDL_MAIN_HANDLED

#include "Engine/GameApp/MainLoop.h"
#include "ClawGameApp.h"

ClawGameApp testApp;

/*
 * SDL 2.30.x AndroidActivity starts the application by resolving a named
 * function from the game shared library.  The original OpenClaw Android
 * integration used the old nativeInit JNI entry point.  Keep the real game
 * entry point as an unmangled C symbol so modern SDLActivity can invoke it.
 */
extern "C" int OpenClawMain(int argc, char* argv[])
{
    return RunGameEngine(argc, argv);
}

int main(int argc, char* argv[])
{
#ifdef _CRTDBG_MAP_ALLOC
    _CrtSetReportMode( _CRT_WARN, _CRTDBG_MODE_FILE );
    _CrtSetReportFile( _CRT_WARN, _CRTDBG_FILE_STDOUT );
    _CrtSetReportMode( _CRT_ERROR, _CRTDBG_MODE_FILE );
    _CrtSetReportFile( _CRT_ERROR, _CRTDBG_FILE_STDOUT );
    _CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
#endif
    return OpenClawMain(argc, argv);
}
