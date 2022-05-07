#pragma once
#include "Core.h"

namespace Argon
{
	class ARGON_API Application
	{
	public:
		Application();
		~Application();

		void Run();
	};

	//To be defined! ;)
	Application* CreateApplication();
}
