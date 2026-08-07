#define "Application.h"
// Imgui?

class Application
{
private:
    bool is_running;

public: // member functions
    void initalize();
    void run();
    bool is_running();
    void stop();
};

void initalize() {

}

void run() {
    while (true) {
        // ...
    }
}

bool is_running();
void stop();