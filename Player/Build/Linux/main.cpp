#include "Polycode.h"
#include "PolycodeView.h"
#include "PolycodeLinuxPlayer.h"

int main(int argc, char *argv[]) {
	PolycodeView *view = new PolycodeView("Polycode Player");
	PolycodeLinuxPlayer *player = new PolycodeLinuxPlayer(view, "main.polyapp", false);
	player->runPlayer();
	return 0;
}
