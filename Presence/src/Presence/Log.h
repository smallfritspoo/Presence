#pragma once


#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"


namespace Presence {

	class PRESENCE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}


// macros for core logging
#define PR_CORE_TRACE(...) ::Presence::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PR_CORE_INFO(...)  ::Presence::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PR_CORE_WARN(...)  ::Presence::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PR_CORE_ERROR(...) ::Presence::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PR_CORE_FATAL(...) ::Presence::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// macros for CLIENT logging
#define PR_TRACE(...) ::Presence::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PR_INFO(...)  ::Presence::Log::GetClientLogger()->info(__VA_ARGS__)
#define PR_WARN(...)  ::Presence::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PR_ERROR(...) ::Presence::Log::GetClientLogger()->error(__VA_ARGS__)
#define PR_FATAL(...) ::Presence::Log::GetClientLogger()->fatal(__VA_ARGS__)