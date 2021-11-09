#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
// //#include <SDL2/SDL_mixer.h>


void loadSounds()
{
    SDL_Init(SDL_INIT_AUDIO);
//     // Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
//     // // BGMusic         = Mix_LoadMUS("assets/sounds/happy.mp3");
//     // // SFX[SFX_BASKET] = Mix_LoadWAV("assets/sounds/basketthud.wav");
//     // Mix_Volume(-1, 25);
//     // Mix_VolumeMusic(10);
//     // Mix_PlayMusic(BGMusic, -1);
}

// // void playSFX(SFXType type) { Mix_PlayChannel(-1, SFX[type], 0); }

void freeSounds()
{
//     // Mix_FreeMusic(BGMusic);
//     // Mix_CloseAudio();
    SDL_Quit();
}
