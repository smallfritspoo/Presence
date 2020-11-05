#pragma once


#ifdef PR_PLATFORM_WINDOWS

extern Presence::Application* Presence::CreateApplication();

int main(int argc, char** argv) {

	Presence::Log::Init();
	PR_CORE_WARN("Core Logger Initialized");
	PR_INFO("Client Logger Initialized");
	int a = 5;
	PR_INFO("var={0}", a);

	auto app = Presence::CreateApplication();
	app->Run();
	delete app;
}

#endif