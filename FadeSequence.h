#include "TriangleSet.h"

class FadeSequence {
	public:
		FadeSequence();
		FadeSequence(TriangleSet* triangleSet, int num);
		void step();
	private:
		int red;
		int blue;
		int green;
		int redInc;
		int blueInc;
		int greenInc;
		TriangleSet* triangles;
		int triangleListSize;
};