#pragma once

#ifdef AI_PLATFORM_WINDOWS

extern ai22m020::Application* ai22m020::CreateApplication();

int main(int argc, char** argv)
{
	ai22m020::Log::Init();
	AI_CORE_WARN("init log!");
	int a = 0;
	AI_INFO("Hello! Var={0}", a);



	auto app = ai22m020::CreateApplication();
	app->Run();
	delete app;
}

#endif