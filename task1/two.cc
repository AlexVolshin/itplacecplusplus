#include "start.hh"
#include "stop.hh"
#include "act.hh"
#include "Worker.hh"

static bool prepared = false;
extern int GoodWork;

void prepare_two()
{
	prepared = true;
	Worker::Part1 = 0x88;
}

void work_two()
{
	start();
	Worker w;
	if ( GoodWork == ( w.part1() | w.part2() | w.part3() ) )
	{
		act( "two" );
	}
	stop();
}
