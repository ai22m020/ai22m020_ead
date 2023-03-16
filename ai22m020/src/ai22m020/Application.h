#pragma once

#include "Core.h"
#include "Events/Event.h"
#include "ai22m020/Events/ApplicationEvent.h"

#include "Window.h"

namespace ai22m020 {

	class AI22M020_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);
	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	//To be defined in Client
	Application* CreateApplication();
}


