class rallyCar {
public:
        string carMake;
        string carModel;
        int modelYear;
        double displacement;
};

int main() {
    rallyCar carInfo1;
    carInfo1.carMake = "Peugeot";
    carInfo1.carModel = "306 Maxi";
    carInfo1.modelYear = 1998;
    carInfo1.displacement = 2.0;

    rallyCar carInfo2;
    carInfo2.carMake = "Ford";
    carInfo2.carModel = "Escort RS Codsworth";
    carInfo2.modelYear = 1998;
    carInfo2.displacement = 2.0;

    rallyCar carInfo3;
    carInfo3.carMake = "Mistsubishi";
    carInfo3.carModel = "Lancer Evo V";
    carInfo3.modelYear = 1998;
    carInfo3.displacement = 2.0;

    rallyCar carInfo4;
    carInfo4.carMake = "Subaru";
    carInfo4.carModel = "Impreza 22B";
    carInfo4.modelYear = 1998;
    carInfo4.displacement = 2.0;
    
    cout << "Vehicle 1 Information: " << carInfo1.carMake << ", " << carInfo1.carModel << ", " << carInfo1.modelYear << ", " << carInfo1.displacement << "\n";
    cout << "Vehcile 2 Information: " << carInfo2.carMake << ", " << carInfo2.carModel << ", " << carInfo2.modelYear << ", " << carInfo2.displacement << "\n";
    cout << "Vehicle 3 Information: " << carInfo3.carMake << ", " << carInfo3.carModel << ", " << carInfo3.modelYear << ", " << carInfo3.displacement << "\n";
    cout << "Vehicle 4 Information: " << carInfo4.carMake << ", " << carInfo4.carModel << ", " << carInfo4.modelYear << ", " << carInfo4.displacement << "\n";

    return 0;
}   
