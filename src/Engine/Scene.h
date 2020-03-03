#ifndef ENGINE_SCENE_H_
#define ENGINE_SCENE_H_
#include "Engine.h"
#include "Entity.h"
#include <functional>
#include <vector>

class Scene {
private:
	std::function<void(Scene*)> storedBehavior; //allows us to store a function within a variable
	Engine* knownEngine; //this gives our scene the current active engine
	static std::vector<Scene*> allScenes; //all of the scenes loaded into memory
	static unsigned int numscenes; //this is the total number of scenes instanciated
	std::vector<Entity*> entitiesInScene; //all of the entities within the scene instance

public:
	void giveEngine(Engine*); //gives an engine to the Scene
	void setBehavior(void newBehavior(Scene* ns));
	void addEntity(Entity*);

	void execute();

	static void cleanup();	//deletes all instances of Scenes

	Scene(Engine*);
	virtual ~Scene();
};

#endif /* ENGINE_SCENE_H_ */
