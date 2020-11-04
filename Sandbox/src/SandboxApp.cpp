#include <Presence.h>

class Sandbox : public Presence::Application
{
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Presence::Application* Presence::CreateApplication() {
	return new Sandbox();
}