#include "GameWorld.h"

GameWorld::GameWorld (ApplicationMode mode) : asset_manager(std::make_shared<GameAssetManager>(mode)) {
	
	bool cubes = true;
	for(int i=0; i<5; i++) {		
		for(int j=0; j<5; j++) {
			for(int k=0; k<5; k++) {		
	if(cubes == true) {
	auto cube = std::make_shared<CubeAsset>();
		asset_manager->AddAsset(cube);
			}
		}
	}	
}	
}
