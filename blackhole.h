#pragma once

#include "logger.h"

class BlackHoleLogger : public Logger<BlackHoleLogger>
{
protected:
	void debugImplementation(const std::string& log) {}
	void errorImplementation(const std::string& log) {}
	void fatalImplementation(const std::string& log) {}
	void flushImplementation() {}
	void infoImplementation(const std::string& log) {}
	void traceImplementation(const std::string& log) {}
	void warningImplementation(const std::string& log) {}

public:
	BlackHoleLogger() {}
	~BlackHoleLogger() {}
};
