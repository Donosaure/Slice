#pragma once

#ifdef SC_PLATFORM_WINDOWS

extern Slice::Application* Slice::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Slice::CreateApplication();
	app->Run();
	delete app;
}

#endif
