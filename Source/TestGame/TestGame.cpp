#include "TestGameApp.h"

int main(int argc, char *argv[])
{
    TestGameApp app(argc, argv);

    app.InitInstance(argc, argv);

    return app.exec();
}
