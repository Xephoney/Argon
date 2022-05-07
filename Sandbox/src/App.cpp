#include <Argon.h>

class Sandbox : public Argon::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Argon::Application* Argon::CreateApplication()
{
	return new Sandbox();
}
