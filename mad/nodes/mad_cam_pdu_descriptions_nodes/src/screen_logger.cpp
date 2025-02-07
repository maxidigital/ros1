#include "screen_logger.h"
#include <ros/ros.h>

ScreenLogger::LogStream::LogStream(LogLevel lvl) : level(lvl) {}

ScreenLogger::LogStream::LogStream(LogStream&& other) noexcept 
    : ss(std::move(other.ss)), level(other.level) {}

ScreenLogger::LogStream::~LogStream() {
    switch(level) {
        case LogLevel::DEBUG: ROS_DEBUG_STREAM(ss.str()); break;
        case LogLevel::INFO:  ROS_INFO_STREAM(ss.str());  break;
        case LogLevel::WARN:  ROS_WARN_STREAM(ss.str());  break;
        case LogLevel::ERROR: ROS_ERROR_STREAM(ss.str()); break;
        case LogLevel::FATAL: ROS_FATAL_STREAM(ss.str()); break;
    }
}

ScreenLogger::LogStream ScreenLogger::debug()   { return LogStream(LogLevel::DEBUG); }
ScreenLogger::LogStream ScreenLogger::print()   { return LogStream(LogLevel::INFO); }
ScreenLogger::LogStream ScreenLogger::warning() { return LogStream(LogLevel::WARN); }
ScreenLogger::LogStream ScreenLogger::error()   { return LogStream(LogLevel::ERROR); }
ScreenLogger::LogStream ScreenLogger::fatal()   { return LogStream(LogLevel::FATAL); }

void ScreenLogger::printInternal(const std::string& message) {
    ROS_INFO_STREAM(message);
}