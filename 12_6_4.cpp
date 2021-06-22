#include <iostream>

float radio_channels[10];

bool get_channel(float* array, int index, float tuning){
    if(index < 0 || 10 < index) return false;
    else array[index] = tuning;
    return true;
}

int main() {

    do{
        int channel;
        float tuning;
        std::cout << "Pick the channel:" << std::endl;
        std::cin >> channel;
        if(channel == 0){
            std::cout << "Radio is OFF.";
            return 0;
        }
        std::cout << "Input the tune:" << std::endl;
        std::cin >> tuning;
        if(!get_channel(radio_channels,channel,tuning)){
            std::cout << "Wrong channel!" << std::endl;
        } else {
            std::cout << "Settings applied" << std::endl;
        }
    } while (true);
}
