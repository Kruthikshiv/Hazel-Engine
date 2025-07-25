#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc,char** argv)
{
	auto appSandBox = Hazel::CreateApplication();
	appSandBox->Run();
	delete appSandBox;
}

#endif
