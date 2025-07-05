/*****************************************************************//**
 * \file   Application.h
 * \brief  
 * 
 * \author kruth
 * \date   May 2025
 *********************************************************************/
#pragma once
#include "Core.h"

namespace Hazel
{
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	
	//To be defined on Client side
	Application* CreateApplication();
}

