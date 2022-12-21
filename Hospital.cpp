#include "Hospital.h"

Hospital::Hospital(){
    this->hospitalCountry = "Armenia";
}

void Hospital::setHospitalName(const std::string& name){
    this->hospitalName = name;
}

std::string Hospital::getHospitalName(){
    return this->hospitalName; 
}

void Hospital::setHospitalCity(const std::string& city) {
    this->hospitalCity = city;
}

std::string Hospital::getHospitalCity(){
    return this->hospitalCity;
}

void Hospital::patientsNumber() {
    ++this->patients;
    if (this->patients == 5) {
        --this->wards;
    }
    else if (this->wards == 36 || this->wards == 24 || this->wards == 12 || this-> wards == 0) {
        --this->hosDepar;
    }
    std::cout << "Patients number is " << this->patients << "." << std::endl;
    std::cout << "Empty departments are " << this->hosDepar << "." << std::endl;
    std::cout << "The number of wards in which there is a place " << this->wards << "." << std::endl;
}
void Hospital::patienthosp(const std::string& name){
    std::cout << "Patients name is " << name << ". Okay!✍🏻" << std::endl;
    std::cout << "Which department is the patient in?  1, 2, 3 or 4" << std::endl;
    std::cin >> this->departments;
    switch (this->departments)
    {
    case Departments::department_1:
        std::cout << "A patient named " << name << " was in one of the spare rooms of the first ward." << std::endl;
        patientsNumber();
        break;
    case Departments::department_2:
        std::cout << "A patient named " << name << " was in one of the spare rooms of the second ward." << std::endl;
        patientsNumber();
        break;
    case Departments::department_3:
        std::cout << "A patient named " << name << " was in one of the spare rooms of the third ward." << std::endl;
        patientsNumber();
        break;
    case Departments::department_4:
        std::cout << "A patient named " << name << " was in one of the spare rooms of the fourth ward." << std::endl;
        patientsNumber();
        break;
    default:
        std::cout << "Sorry, but we don't have a branch with that name! 📑" << std::endl;
        break;
    }
}
