#pragma once

#ifdef AI_PLATFORM_WINDOWS

extern ai22m020::Application* ai22m020::CreateApplication();

int main(int argc, char** argv)
{
	auto app = ai22m020::CreateApplication();
	app->Run();
	delete app;
}

#endif