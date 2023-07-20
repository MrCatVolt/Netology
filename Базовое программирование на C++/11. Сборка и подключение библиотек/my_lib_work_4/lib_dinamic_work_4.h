#pragma once

#include <string>


#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif
namespace lib_work_4
{
	class Leaver
	{
	public:
		MATHPOWERLIBRARY_API std::string leave(std::string z);
	};
}
