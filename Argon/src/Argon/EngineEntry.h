#pragma once

#ifdef ARG_PLATFORM_WINDOWS

extern Argon::Application* Argon::CreateApplication();

int main(int argc, char** argv)
{
	printf("Argon Engine Compiled\n");
	auto app = Argon::CreateApplication();
	app->Run();

	delete app;

}
#endif