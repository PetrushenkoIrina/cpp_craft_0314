#include <iostream>
#include <map>

#include "messages_counter.h"

class average_calculator
{
private:
	const size_t MAX_BUFF_SIZE = 2048;
	messages_counter counter;

public:
	void calc( std::ifstream& in );
	void write( std::ofstream& out );
};