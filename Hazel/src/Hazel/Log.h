#pragma once
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Hazel
{
	class Log
	{
	
		public:
			void Init();

			inline static std::shared<spd>GetHazelLogger();
		private:
	};
}

