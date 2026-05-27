#include <RaylibFramework/Config.h>
#include <RaylibFramework/Window.h>

int main()
{
	shared_ptr<Config> cfg = std::make_shared<Config>("Engine");
	Window* window = new Window{ cfg };

	if (!window->Open())
	{
		return EXIT_FAILURE;
	}

	while (window->isOpen())
	{
		window->BeginFrame();
		window->EndFrame();
	}

	window->Close();

	delete window;

	return 0;
}
