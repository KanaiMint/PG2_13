#include "Object.h"
#include<math.h>
bool Object::DeadCount = false;

Object::Object()
{
	Pos={500,500};
	Speed={5,5};
	radius=20;
	DeadCount = false;
}
Object::~Object()
{
	DeadCount=true;
}

void Object::Update()
{
	Pos.y += Speed.y;
	if (Pos.y >= 720 || Pos.y <= 0) {
		Speed.y *= -1;
	}
}

void Object::Draw()
{
	Novice::DrawEllipse(Pos.x, Pos.y, radius, radius, 0, WHITE, kFillModeSolid);
}

void Object::Collision(Vec2 vec) {
	int a = Pos.x - vec.x;
	int b = Pos.y - vec.y;
	int c = sqrtf((a * a) + (b * b));

	if (c <= radius) {
		Object::DeadCount = true;
	}
}