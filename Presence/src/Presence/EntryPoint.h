#pragma once


#ifdef PR_PLATFORM_WINDOWS

extern Presence::Application* Presence::CreateApplication();

int main(int argc, char** argv) {
	auto app = Presence::CreateApplication();
	app->Run();
	delete app;
}

#endif