#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    if (daysUntilExpiration > 10) {
        cout << "You have an active subscription.\n";
    } else if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired.\n";
    } else if (daysUntilExpiration <= 1) {
        cout << "Your subscription expires within a day!\nRenew now and save 20%!\n";
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days\nRenew now and save 10%!\n";
    } else {
        cout << "Your subscription will expire soon. Renew now!\n";
    }

    return 0;
}
