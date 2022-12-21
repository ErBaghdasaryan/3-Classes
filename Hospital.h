#ifndef HOSPITAL_h
#define HOSPITAL_h
#include <string>
#include <iostream>

class Hospital {

public: 
        Hospital();
        void setHospitalName(const std::string& name);
        std::string getHospitalName();
        void setHospitalCity(const std::string& city);
        std::string getHospitalCity();
        void patientsNumber();
        void patienthosp(const std::string& name);
private:
        std::string hospitalCountry;
        std::string hospitalCity;
        std::string hospitalName;
        int hosDepar = 4;
        int wards = 48;
        int patients = 0;
        int departments;
        enum Departments{
            department_1 = 1,
            department_2,
            department_3,
            department_4
        };

};

#endif