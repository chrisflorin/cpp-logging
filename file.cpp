#include "file.h"

FileLogger::FileLogger()
{

}

FileLogger::~FileLogger()
{
	if (this->outputFile.is_open() && this->outputFile.good()) {
		this->flush();
		this->outputFile.close();
	}
}

void FileLogger::debugImplementation(const std::string& log)
{
	if (this->outputFile.is_open() && this->outputFile.good()) {
		this->outputFile << "DEBUG: " << log << std::endl;
	}
}

void FileLogger::errorImplementation(const std::string& log)
{
	if (this->outputFile.is_open() && this->outputFile.good()) {
		this->outputFile << "ERROR: " << log << std::endl;
	}
}

void FileLogger::fatalImplementation(const std::string& log)
{
	if (this->outputFile.is_open() && this->outputFile.good()) {
		this->outputFile << "FATAL: " << log << std::endl;
	}
}

void FileLogger::flushImplementation()
{
	if (this->outputFile.is_open() && this->outputFile.good()) {
		this->outputFile.flush();
	}
}

void FileLogger::infoImplementation(const std::string& log)
{
	if (this->outputFile.is_open() && this->outputFile.good()) {
		this->outputFile << "INFO: " << log << std::endl;
	}
}

void FileLogger::initialize(const std::string& fileName)
{
	this->outputFile.open(fileName, std::ofstream::app);
}

void FileLogger::traceImplementation(const std::string& log)
{
	if (this->outputFile.is_open() && this->outputFile.good()) {
		this->outputFile << "TRACE: " << log << std::endl;
	}
}

void FileLogger::warningImplementation(const std::string& log)
{
	if (this->outputFile.is_open() && this->outputFile.good()) {
		this->outputFile << "WARNING: " << log << std::endl;
	}
}
