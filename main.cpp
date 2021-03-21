#include <QCoreApplication>
#include "authhandler.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AuthHandler authHandler;

    //Set your API Key here
    authHandler.setAPIKey("YOUR_API_KEY_HERE");

    //This is the call to sign a user up using Email/Password
    authHandler.signUserUp("EMAIL_ADDRESS", "PASSWORD");

    //This is the call to sign an existing user in
    //authHandler.signUserIn("EMAIL_ADDRESS", "PASSWORD");

    return a.exec();
}
