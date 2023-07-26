#pragma once
#include <string>


#ifdef MYLIBDINAMICWORK2_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

namespace lib_dinamic_work_2
{
	class Leaver
	{
	public:
		MATHPOWERLIBRARY_API std::string leave(std::string z);
	};
}