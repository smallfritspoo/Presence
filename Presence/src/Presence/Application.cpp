#include "prpch.h"
#include "Application.h"

#include "Presence/Events/applicationEvent.h"
#include "Presence/Log.h"

namespace Presence {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication)) {
			PR_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput)) {
			PR_TRACE(e);
		}

		while (true);
	}
}
