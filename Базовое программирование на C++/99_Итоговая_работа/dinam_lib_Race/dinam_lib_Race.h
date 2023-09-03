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


	class camel : public ground {   // �������
	public:
		camel() {
			this->speed = 10;
			this->time_to_out = 30;
		}

		MATHPOWERLIBRARY_API double funk_camel(int long_distance);
	};


    class camel_speedboat : public ground {   // ������� ���������
    public:
        camel_speedboat() {
            this->speed = 40;
            this->time_to_out = 10;
        }

		MATHPOWERLIBRARY_API double funk_camel_speedboat(int long_distance);

    };

	class centaur : public ground {   // �������
	public:
		centaur() {
			this->speed = 15;
			this->time_to_out = 8;
		}

		MATHPOWERLIBRARY_API double funk_centaur(int long_distance);

	};


    class all_terrain_boots : public ground {   // �������-���������
    public:
        all_terrain_boots() {
            this->speed = 6;
            this->time_to_out = 60;
        }

		double funk_all_terrain_boots(int long_distance);
    };


    class air {
    protected:
        int speed;
    };


    class eagle : public air {   // �Ш�
    public:
        eagle() {
            this->speed = 8;
        }

        double funk_eagle(int long_distance);

    };


    class broom : public air {   // �����
    public:
        broom() {
            this->speed = 20;
        }

        double funk_broom(int long_distance);

    };



    class Magic_carpet : public air {   // ��¨�-����˨�
    public:
        Magic_carpet() {
            this->speed = 10;
        }

        double funk_Magic_carpet(int long_distance);

    };


}