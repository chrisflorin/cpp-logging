#pragma once

#include <cstdint>
#include <string>

template <class T>
class Logger
{
public:
	static constexpr std::uint32_t DEBUG = 200;
	static constexpr std::uint32_t FATAL = 600;
	static constexpr std::uint32_t ERROR = 500;
	static constexpr std::uint32_t INFO = 300;
	static constexpr std::uint32_t TRACE = 100;
	static constexpr std::uint32_t WARNING = 400;

	Logger() {};
	~Logger() {};

    void debug(const std::string& log)
    {
        static_cast<T*>(this)->debugImplementation(log);
    }

	void error(const std::string& log)
	{
		static_cast<T*>(this)->errorImplementation(log);
	}

	void fatal(const std::string& log)
	{
		static_cast<T*>(this)->fatalImplementation(log);
	}

	void flush()
	{
		static_cast<T*>(this)->flushImplementation();
	}

	void info(const std::string& log)
	{
		static_cast<T*>(this)->infoImplementation(log);
	}

	void trace(const std::string& log)
	{
		static_cast<T*>(this)->traceImplementation(log);
	}

	void warning(const std::string& log)
	{
		static_cast<T*>(this)->warningImplementation(log);
	}
};
