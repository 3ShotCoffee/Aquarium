// ===============================================//
// ============== program lifecycle ==============//
// ===============================================//
#define "Application.h"

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

void initalize();
void run();
bool is_running();
void stop();