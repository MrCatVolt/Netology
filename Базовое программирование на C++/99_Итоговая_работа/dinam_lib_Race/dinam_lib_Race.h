#pragma once
#include <string>


#ifdef DINAMLIBRACE_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif




namespace dinam_lib_Race
{

	class ground {
	public:
		int speed;
		int time_to_out;
	};


	class camel : public ground {   // ÂÅÐÁËÞÄ
	public:
        MATHPOWERLIBRARY_API camel() {
			this->speed = 10;
			this->time_to_out = 30;
		}

		 double MATHPOWERLIBRARY_API funk_camel(int long_distance);
	};


    class camel_speedboat : public ground {   // âåðáëþä áûñòðîõîä
    public:
        MATHPOWERLIBRARY_API camel_speedboat() {
            this->speed = 40;
            this->time_to_out = 10;
        }

		 double MATHPOWERLIBRARY_API funk_camel_speedboat(int long_distance);

    };

	class centaur : public ground {   // ÊÅÍÒÀÂÐ
	public:
        MATHPOWERLIBRARY_API centaur() {
			this->speed = 15;
			this->time_to_out = 8;
		}

		 double MATHPOWERLIBRARY_API funk_centaur(int long_distance);

	};


    class all_terrain_boots : public ground {   // ÁÎÒÈÍÊÈ-ÂÅÇÄÅÕÎÄÛ
    public:
        MATHPOWERLIBRARY_API all_terrain_boots() {
            this->speed = 6;
            this->time_to_out = 60;
        }

		double MATHPOWERLIBRARY_API funk_all_terrain_boots(int long_distance);
    };


    class air {
    protected:
        int speed;
    };


    class eagle : public air {   // ÎÐ¨Ë
    public:
        MATHPOWERLIBRARY_API eagle() {
            this->speed = 8;
        }

        double MATHPOWERLIBRARY_API funk_eagle(int long_distance);

    };


    class broom : public air {   // ÌÅÒËÀ
    public:
        MATHPOWERLIBRARY_API broom() {
            this->speed = 20;
        }

        double MATHPOWERLIBRARY_API funk_broom(int long_distance);

    };



    class Magic_carpet : public air {   // ÊÎÂ¨Ð-ÑÀÌÎË¨Ò
    public:
        MATHPOWERLIBRARY_API Magic_carpet() {
            this->speed = 10;
        }

        double MATHPOWERLIBRARY_API funk_Magic_carpet(int long_distance);

    };


}