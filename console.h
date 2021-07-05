#pragma once

#include <iostream>

#include "logger.h"

class ConsoleLogger : public Logger<ConsoleLogger>
{
	friend Logger;
protected:
	void debugImplementation(const std::string& log);
	void errorImplementation(const std::string& log);
	void fatalImplementation(const std::string& log);
	void flushImplementation();
	void infoImplementation(const std::string& log);
	void traceImplementation(const std::string& log);
	void warningImplementation(const std::string& log);

public:
	ConsoleLogger();
	~ConsoleLogger();
};
