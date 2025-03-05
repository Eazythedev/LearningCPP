class Spartan {                // The class named 'Spartan'
    public:                    // It's public
        int spartanServiceIDNum;  // Attribute (int spartanServiceID)
        string spartanName;    // Attribute (string spartanName)
};

int main() {
    Spartan spartanInfo; // Object

    // Access attributes
    spartanInfo.spartanServiceIDNum;
    spartanInfo.spartanName;

    cout << "Please enter Spartan Service ID Number:  ";
    cin >> spartanInfo.spartanServiceIDNum;
    cout << "Please enter Spartan Name: ";
    cin >> spartanInfo.spartanName;

    if (spartanInfo.spartanServiceIDNum == 117 && spartanInfo.spartanName == "John") {
        cout << "It's the chief!";
    }
    else {
        cout << "Your Spartan Sevice ID Number is: " << spartanInfo.spartanServiceIDNum << ". Correct?" << "\n";
        cout << "Your Spartan Name is: " << spartanInfo.spartanName << ". Correct?" << "\n";
    }
    /*
    cout << "Spartan Service ID Number: " << spartanInfo.spartanServiceIDNum << "\n";
    cout << "Spartan Name: " << spartanInfo.spartanName << "\n";
    */
    return 0;
}
