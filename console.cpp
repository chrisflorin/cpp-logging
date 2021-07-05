#include "console.h"

ConsoleLogger::ConsoleLogger()
{

}

ConsoleLogger::~ConsoleLogger()
{

}

void ConsoleLogger::debugImplementation(const std::string& log)
{
	std::cout << "DEBUG: " << log << std::endl;
}

void ConsoleLogger::errorImplementation(const std::string& log)
{
	std::cout << "ERROR: " << log << std::endl;
}

void ConsoleLogger::fatalImplementation(const std::string& log)
{
	std::cout << "FATAL: " << log << std::endl;
}

void ConsoleLogger::flushImplementation()
{
	std::cout << std::flush;
}

void ConsoleLogger::infoImplementation(const std::string& log)
{
	std::cout << "INFO: " << log << std::endl;
}

void ConsoleLogger::traceImplementation(const std::string& log)
{
	std::cout << "TRACE: " << log << std::endl;
}

void ConsoleLogger::warningImplementation(const std::string& log)
{
	std::cout << "WARNING: " << log << std::endl;
}
