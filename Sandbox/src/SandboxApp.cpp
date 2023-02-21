#include <AI22M020.h>

class Sandbox : public ai22m020::Application
{
public :
	Sandbox() {

	}

	~Sandbox() {

	}

};

ai22m020::Application* ai22m020::CreateApplication()
{
	return new Sandbox();
}