#include <Presence.h>

class ExampleLayer : public Presence::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		PR_INFO("ExampleLayer::Update");
	}

	void OnEvent(Presence::Event& event) override
	{
		PR_TRACE("{0", event);
	}
};

class Sandbox : public Presence::Application
{
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
	}

	~Sandbox() {

	}
};

Presence::Application* Presence::CreateApplication() {
	return new Sandbox();
}