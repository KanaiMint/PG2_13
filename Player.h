#include<Novice.h>
#include"Vector2.h"



class Player {
	typedef struct Bullet {
		Vec2 Pos;
		int rad;
		bool set = false;
	};
	Vec2 Pos;
	Bullet bullet[50];
	int flame;
	
public:
	Player();
	void UpDate(char keys[]);
	void Draw();
	Vec2 GetBullet(int i) {
		return bullet[i].Pos;
	}
	
};