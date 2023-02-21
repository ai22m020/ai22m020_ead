#pragma once

#include "Core.h"

namespace ai22m020 {

	class AI22M020_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in Client
	Application* CreateApplication();
}


