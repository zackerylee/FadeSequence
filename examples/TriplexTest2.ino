#include <FadeSequence.h>
#include <TriangleSet.h>
#include <TriplexWriter.h>

TriplexWriter triplexWriter = TriplexWriter();

// set the number of levels on the triplex
const int NUM_LEVELS = 2; 
TriangleSet set1 = TriangleSet(3, 5, 6, triplexWriter);
TriangleSet set2 = TriangleSet(9, 10, 11, triplexWriter);
TriangleSet layers[] = {set1, set2};
FadeSequence seq;

void setup() {
  seq = FadeSequence(layers, NUM_LEVELS);
}

void loop() {
	int delayVal = 5;
        seq.step();
        delay(delayVal);
}
