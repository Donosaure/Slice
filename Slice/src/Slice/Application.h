#pragma once

#include "Core.h"

namespace Slice {

	class SLICE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}