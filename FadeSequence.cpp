#include <FadeSequence.h>

FadeSequence::FadeSequence() {

}

FadeSequence::FadeSequence(TriangleSet* triangleSet, int num) {
	red = 255;
	blue = 1;
	green = 1;
	redInc = -1;
	greenInc = 1;
	blueInc = 0;
	triangles = triangleSet;
	triangleListSize = num;
}

void FadeSequence::step() {
	for(int x = 0; x < triangleListSize; x++) {
		triangles[x].manualWrite(red, blue, green);
	}
	red += redInc;
	blue += blueInc;
	green += greenInc;
	if (red == 1 && green == 255) {
		redInc = 0;
		blueInc = 1;
		greenInc = -1;
	}
	else if (green == 1 && blue == 255) {
		greenInc = 0;
		blueInc = -1;
		redInc = 1;
	}
	else if (red == 255 && blue == 1) {
		redInc = -1;
		greenInc = 1;
		blueInc = 0;
	}

}