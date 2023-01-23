#pragma once
#include<Novice.h>
#include"Vector2.h"
	
class Object
{
protected:
	Vec2 Pos;
	Vec2 Speed;
	int radius;
public:
	static bool DeadCount;

public:
	Object();
	~Object();
	virtual void Update();
	virtual void Draw();
	void Collision(Vec2 vec);

};

