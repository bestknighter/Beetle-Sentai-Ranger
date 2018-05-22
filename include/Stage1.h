#ifndef STAGE1
#define STAGE1

#include "State.h"
#include "Sprite.h"
#include "Protagonist.h"
#include "Camera.h"
#include "CameraFollower.h"
#include "Music.h"
#include "TileSet.h"
#include "Platform.h"
#include "GroundEnemy.h"
#include "Collision.h"
#include "BossStage1.h"

class Stage1 : public State{
	public:
		Stage1();
		~Stage1();

		void LoadAssets();
        void Update(float dt);
        void Render();

        void Start();
        void Pause();
        void Resume();

    private:
        Music backgroundMusic;
        int portal;
	
};

#endif