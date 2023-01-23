#include"Player.h"

Player::Player() {
	flame = 0;
	Pos = { 300,300 };
	for (int i = 0; i < 50; i++) {
		bullet[i].set = false;
		bullet[i].rad = 10;
		bullet[i].Pos = { 9990,0 };

	}
}

void Player::UpDate(char keys[]) {
	if (keys[DIK_A]) {
		Pos.x -= 5;
	}if (keys[DIK_D]) {
		Pos.x += 5;
	}if (keys[DIK_W]) {
		Pos.y -= 5;
	}if (keys[DIK_S]) {
		Pos.y += 5;
	}
	flame++;
	if (keys[DIK_SPACE]) {
		
		for (int i = 0; i < 50; i++) {
			if (flame%10==0&&bullet[i].set == false) {
				bullet[i].Pos = Pos;
				bullet[i].set = true;
				break;
			}
			
		}
	}
	for (int i = 0; i < 50; i++) {
		
		if (bullet[i].set == true) {
			bullet[i].Pos.y -= 5;

			if (bullet[i].Pos.y < 0) {
				bullet[i].set = false;
			}
		}


	}
}

void Player::Draw() {
	Novice::DrawEllipse(Pos.x, Pos.y, 50, 50, 0, RED, kFillModeSolid);

	for (int i = 0; i < 50; i++) {
		Novice::DrawEllipse(bullet[i].Pos.x, bullet[i].Pos.y, 10, 10, 0, WHITE, kFillModeSolid);
	}
}