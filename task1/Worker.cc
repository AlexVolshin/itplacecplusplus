#include "Worker.hh"

int Worker::Part1 = 0x11;
const int Worker::Part2;
const int Worker::Part3 = 0x44;

int Worker::part2()
{
	return Worker::Part2;
}

int Worker::part3()
{
	return Part3;
}
