#pragma once

#include <fstream>

#include "logger.h"

class FileLogger : public Logger<FileLogger>
{
	friend Logger;
protected:
	std::ofstream outputFile;

	void debugImplementation(const std::string& log);
	void errorImplementation(const std::string& log);
	void fatalImplementation(const std::string& log);
	void flushImplementation();
	void infoImplementation(const std::string& log);
	void traceImplementation(const std::string& log);
	void warningImplementation(const std::string& log);
public:
	FileLogger();
	~FileLogger();

	void initialize(const std::string& fileName);
};
