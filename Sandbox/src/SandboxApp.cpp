#include <Slice.h>

class Sandbox : public Slice::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Slice::Application* Slice::CreateApplication()
{
	return new Sandbox();
}