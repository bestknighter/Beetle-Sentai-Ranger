#include "Column.h"
#include <iostream>

Column::Column(GameObject* associated, string file, TileSet* tileSet) : Component(associated){
	this->tileSet = tileSet;
	Load(file);
	associated->Box.w = tileSet->GetTileWidth()*3;
	associated->Box.h = tileSet->GetTileHeight()*tileNumber;

	Collider* colisor = new Collider(associated);
	associated->AddComponent(colisor);
}

Column::~Column(){}

void Column::Load(string file){

	ifstream mapa(file);
	string aux;
	int ancora;
	tileNumber = 0;

	if (!mapa.good()){
		SDL_Log("problema ao carregar o mapa");
	}

	while(getline(mapa,aux,',')){
		ancora = atoi(aux.c_str());
		ancora--;
		tileList.push_back(ancora);
		tileNumber++;
	}
	mapa.close();
}

void Column::SetTileSet(TileSet* tileSet){
	this->tileSet = tileSet;
}

void Column::RenderColumn(int cameraX, int cameraY){

	float x = associated->Box.x;
	float y = associated->Box.y;

	float aux_y = y;

	for(int j = 0; j < 3; ++j)
	{
		for (int i = 0; i < tileNumber; ++i)
	  {
			tileSet->RenderTile(tileList[i], x-cameraX, y-cameraY);
			y+= tileSet->GetTileHeight();
		}
		x+= tileSet->GetTileWidth();
		y = aux_y;
	}
}
void Column::Render()
{
	RenderColumn(Camera::pos.x, Camera::pos.y);
}

int Column::GetTileNumber(){
	return(tileNumber);
}

void Column::Update(float dt){}

bool Column::Is(string type){
	return(type == "Column");
}

void Column::NotifyCollision(GameObject* other){}
