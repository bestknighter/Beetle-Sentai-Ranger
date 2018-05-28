#ifndef GAMEDATA
#define GAMEDATA

#define STAGE1_BACKGROUND "assets/img/Background/6000x600.png"
#define STAGE1_TILESET "assets/img/Background/TitleSet1.png"
#define STAGE1_GROUND_ENEMY_IDLE_ANIMATION "assets/img/GroundEnemy1/Louva-God.png"
#define STAGE1_GROUND_ENEMY_PUNCH_ANIMATION "assets/img/GroundEnemy1/Punch Louvagod_spritesheet.png"
#define STAGE1_GROUND_ENEMY_JUMP_ANIMATION "assets/img/GroundEnemy1/Jumping.png"
#define STAGE1_GROUND_ENEMY_DEATH_ANIMATION "assets/img/GroundEnemy1/Enemy death.png"
#define STAGE1_GROUND_ENEMY_ATTACK_SOUND "assets/audio/Sounds/Ataque Louva-Deus 1 16 bit stereo.wav"

#define STAGE1_BOSS_IDLE_ANIMATION "assets/img/Grande Sapo.png"
#define STAGE1_BOSS_BACKGROUND "assets/img/Background/Boss1.png"
#define STAGE1_BACKGROUNDMUSIC "assets/audio/Musics/TemadaFloresta.ogg"

#define PLATFORM_TYPE1 "assets/map/Platform.txt"

#define PROTAGONIST_IDLE_ANIMATION "assets/img/Beetle/Fightpose.png"
#define PROTAGONIST_RUN_ANIMATION "assets/img/Beetle/Run_sprite_.png"
#define PROTAGONIST_JUMP_ANIMATION "assets/img/Beetle/Jump Beetle.png"
#define PROTAGONIST_SHITBALL_ANIMATION "assets/img/Beetle/Shit_spritesheet.png"
#define PROTAGONIST_ACID_ANIMATION "assets/img/Beetle/Acid.png"
#define PROTAGONIST_PUNCH_ANIMATION "assets/img/Beetle/Punch_spritesheet.png"
#define PROTAGONIST_DEATH_ANIMATION "assets/img/Beetle/Death.png"
#define PROTAGONIST_FLY_ANIMATION "assets/img/Beetle/Flying.png"
#define PROTAGONIST_HEALTHBAR "assets/img/Beetle/heart.png"
#define PROTAGONIST_ACID_SOUND "assets/audio/Sounds/Acido.wav"
#define PROTAGONIST_PUNCH_SOUND "assets/audio/Sounds/Soco.wav"

class Protagonist;

class GameData{
	public:
		GameData();
		~GameData();
		static bool playerVictory;
		static Protagonist* Player;
		
};
#endif