#include "GameAsset.h"

GameAsset::GameAsset(){
	glm::mat4 m = glm::mat4(
			glm::vec4(1.0, 0.0, 0.0, 0.0),
             		glm::vec4(0.0, 1.0, 0.0, 0.0),
			glm::vec4(0.0, 0.0, 1.0, 0.0),
			glm::vec4(0.0, 0.0, 0.0, 1.0)
	);
	model_matrix = m;
}

glm::mat4 GameAsset::getModelMatrix(){
return model_matrix;
}
