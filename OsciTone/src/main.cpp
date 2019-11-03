#include <iostream>
#include <mmeapi.h>
#include "../portaudio/include/portaudio.h"
using namespace std;

signed short* genWave(signed short a, signed short f, signed short rate) {
	signed short* sample = new signed short[rate];

	for (signed short i = 0; i < rate; i++) {
		sample[i] = sin(i);
	}
}



int main() {
	PaStreamParameters outputParams;
	PaStream* stream;
	PaError err;
	
	return 0;
}