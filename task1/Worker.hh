#ifndef WORKER_H
#define WORKER_H

class Worker {
public:
    static int Part1;
	static const int Part2 = 0x22;
	static const int Part3;
	int part1() { return Part1; }
	int part2();
	int part3();
};

#endif //WORKER_H
