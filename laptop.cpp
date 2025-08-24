#include <iostream>
using namespace std;

class Laptop
{
public:
    string brand;
    string model;
    int ram;     // Dung lượng RAM tính bằng GB
    int storage; // Dung lượng ổ cứng tính bằng GB
    string gpu;  // Card đồ họa

    void displayInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "GPU: " << gpu << endl;
    }

    void checkRAM(int requiredRAM)
    {
        if (ram >= requiredRAM)
        {
            cout << "This laptop has enough RAM to run the software." << endl;
        }
        else
        {
            cout << "This laptop does not have enough RAM to run the software." << endl;
        }
    }

    void checkGPU()
    {
        // Giả sử các card mạnh chơi game: RTX 3050, RTX 3060, RTX 3070, RTX 3080, RX 6600, RX 6700, RX 6800
        if (gpu == "RTX 3050" || gpu == "RTX 3060" || gpu == "RTX 3070" || gpu == "RTX 3080" ||
            gpu == "RX 6600" || gpu == "RX 6700" || gpu == "RX 6800")
        {
            cout << "This laptop has a powerful GPU for gaming." << endl;
        }
        else
        {
            cout << "This laptop's GPU is not strong enough for gaming." << endl;
        }
    }

    void upgradeRAM(int additionalRAM)
    {
        ram += additionalRAM;
        cout << "RAM upgraded. New RAM: " << ram << " GB" << endl;
    }
};

int main()
{
    Laptop laptop1;
    laptop1.brand = "Dell";
    laptop1.model = "XPS 13";
    laptop1.ram = 8;
    laptop1.storage = 256;
    laptop1.gpu = "Intel UHD";

    laptop1.displayInfo();
    // Kiểm tra RAM
    laptop1.checkRAM(16);
    // Kiểm tra GPU
    laptop1.checkGPU();
    // Nâng cấp RAM
    laptop1.upgradeRAM(8);
    laptop1.displayInfo();
    return 0;
}