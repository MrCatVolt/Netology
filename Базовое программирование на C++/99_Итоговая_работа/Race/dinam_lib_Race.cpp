#include <string>
#include "dinam_lib_Race.h"


namespace dinam_lib_Race {

    double camel::funk_camel(int long_distance) {
        int time_out_1 = 5, time_out_all = 8, z = 0;
        double x = 0, y = 0;

        y = static_cast <double> (long_distance) / speed;
        z = (long_distance / speed) / time_to_out;
        if (((long_distance / speed) % time_to_out) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
            // static_cast <double> (x);
            return x;
        }

        else if (z == 1) {
            x = y + time_out_1;
            // static_cast <double> (x);
            return x;
        }

        else if (z > 1) {

            x = y + time_out_1;
            for (int i = 1; i < z; ++i) {
                x += time_out_all;
            }
            // static_cast <double> (x);
            return x;
        }
        return 0;
    }



    double camel_speedboat::funk_camel_speedboat(int long_distance) {
            int time_out_1 = 5, time_out_all = 8, z = 0;
            double x = 0, time_out_2 = 6.5, y = 0;

            y = static_cast <double> (long_distance) / speed;
            z = (long_distance / speed) / time_to_out;
            if (((long_distance / speed) % time_to_out) == 0) {
                z -= 1;
            }

            if (z == 0) {
                x = y;
                return x;
            }

            else if (z == 1) {
                x = y + time_out_1;
                return x;
            }

            else if (z == 2) {
                x = y + time_out_1 + time_out_2;
                return x;
            }

            else if (z > 2) {

                x = y + time_out_1 + time_out_2;
                for (int i = 2; i < z; ++i) {
                    x += time_out_all;
                }
                return x;
            }
            return 0;
        

    }

    

    double centaur::funk_centaur(int long_distance) {
        int time_out_all = 2, z = 0;
        double x = 0, y = 0;

        y = static_cast <double> (long_distance) / speed;
        z = (long_distance / speed) / time_to_out;
        if (((long_distance / speed) % time_to_out) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
            return x;
        }

        else if (z > 0) {
            for (int i = 0; i < z; ++i) {
                x += time_out_all;
            }
            x += y;
            return x;
        }
        return 0;


    }



    double all_terrain_boots::funk_all_terrain_boots(int long_distance) {
        int time_out_1 = 10, time_out_all = 5, z = 0;
        double x = 0, y = 0;

        y = static_cast <double> (long_distance) / speed;
        z = (long_distance / speed) / time_to_out;
        if (((long_distance / speed) % time_to_out) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
            // static_cast <double> (x);
            return x;
        }

        else if (z == 1) {
            x = y + time_out_1;
            // static_cast <double> (x);
            return x;
        }

        else if (z > 1) {

            x = y + time_out_1;
            for (int i = 1; i < z; ++i) {
                x += time_out_all;
            }
            // static_cast <double> (x);
            return x;
        }
        return 0;


    }


    double eagle::funk_eagle(int long_distance) {
        int percent_all = 6;
        double x = 0, y = 0, z = 0;

        y = static_cast<double>(long_distance - (long_distance * percent_all / 100));

        x = y / speed;

        return x;

    }


    double broom::funk_broom(int long_distance) {
        int percent_all = long_distance / 1000;
        double x = 0, y = 0, z = 0;



        if (percent_all > 0) {
            y = static_cast<double>(long_distance - (long_distance * percent_all / 100));

            x = y / speed;

            return x;
        }

        else {

            x = static_cast<double>(long_distance / speed);

            return x;
        }



    }



    double  Magic_carpet::funk_Magic_carpet(int long_distance) {
        int percent_all = 6;
        double x = 0, y = 0, z = 0;

        if (long_distance < 1000) {
            int percent_all = 6;
        }

        else if (long_distance > 1000 && long_distance < 5000) {
            percent_all = 3;
        }

        else if (long_distance > 5000 && long_distance < 10000) {
            percent_all = 10;
        }

        else if (long_distance > 10000) {
            percent_all = 5;
        }


        y = static_cast<double>(long_distance - (long_distance * percent_all / 100));

        x = y / speed;

        return x;


    }



}

