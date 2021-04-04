#pragma once

#include "Core.h"
#include "Window.h"
#include "Presence/LayerStack.h"
#include "Presence/Events/Event.h"
#include "Presence/Events/applicationEvent.h"

namespace Presence {
	class PRESENCE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// TO BE DEFINED IN CLIENT
	Application* CreateApplication();
}

