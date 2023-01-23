#include "Enemy.h"
#include "Novice.h"

void EnemyA::Update()
{
	Pos.y += Speed.y;
	if (Pos.y >= 720 || Pos.y <= 0) {
		Speed.y *= -1;
	}
}

void EnemyA::Draw()
{
	if (Object::DeadCount == false) {
		Novice::DrawEllipse(Pos.x, Pos.y, radius, radius, 0, RED, kFillModeSolid);
	}
}

void EnemyB::Update()
{
	Pos.x += Speed.x;
	if (Pos.x >= 1280 || Pos.x <= 0) {
		Speed.x *= -1;
	}
}

void EnemyB::Draw()
{
	if (Object::DeadCount == false) {
		Novice::DrawEllipse(Pos.x, Pos.y, radius, radius, 0, BLUE, kFillModeSolid);
	}
}
