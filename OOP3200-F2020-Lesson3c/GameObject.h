#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__

#include "Vector2D.h"

class GameObject
{
public:
	
	//Constructors
	GameObject();
	GameObject(int id, float x, float y);	
	GameObject(int id, const Vector2D position);

	//Rule of three
	~GameObject(); //Destructor
	GameObject(const GameObject& other_object); //Copy Constructor
	GameObject& operator=(const GameObject& other_object); //Assignment operator

	//Accessors
	Vector2D GetPosition() const;
	int GetID() const;
	
	//Mutators
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position);
	void SetID(int id);

	//Utility Function
	std::string ToString() const;
	

private:
	Vector2D m_position;
	int m_id;
};

#endif /* defined (__GAME_OBJECT__) */

