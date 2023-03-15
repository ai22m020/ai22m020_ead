#include "Application.h"

#include "ai22m020/Events/ApplicationEvent.h"
#include "ai22m020/Log.h"

namespace ai22m020 {
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		if (e.IsInCategory(EventCategoryApplication))
		{
			AI_TRACE(e);
		}
		if (e.IsInCategory(EventCategoryInput))
		{
			AI_TRACE(e);
		}

		while (true);
	}
}

