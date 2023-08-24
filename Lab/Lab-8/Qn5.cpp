// Write a program for transaction processing that write and read object randomly to and from a random access file so that user can add, update, delete and display the account information (account-number, last-name, first-name, total-balance).

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Account
{
private:
    int accountNumber;
    char lastName[30];
    char firstName[30];
    double totalBalance;
    const int RECORD_SIZE = sizeof(Account);

public:
    void addAccount(fstream &file, const Account &account)
    {
        file.seekp(0, ios::end);
        file.write(reinterpret_cast<const char *>(&account), RECORD_SIZE); // Putting data into the file: Common approach of serializing data
    }
    void updateAccount(fstream &file, int accountNumber, double newBalance)
    {
        Account account;
        fstream tempFile("temp.dat", ios::in | ios::out | ios::binary | ios::trunc);

        // Find the account with the matching account number and update it
        while (file.read(reinterpret_cast<char *>(&account), RECORD_SIZE))
        {
            if (account.accountNumber == accountNumber)
            {
                account.totalBalance = newBalance;
            }
            tempFile.write(reinterpret_cast<const char *>(&account), RECORD_SIZE);
        }

        // Close the original file and rename the temporary file
        file.close();
        tempFile.close();
        remove("accounts.dat");
        rename("temp.dat", "accounts.dat");

        // Reopen the file for future read/write operations
        file.open("accounts.dat", std::ios::in | std::ios::out | std::ios::binary);
        if (!file)
        {
            std::cerr << "Error opening file." << std::endl;
            return;
        }

        std::cout << "Account updated successfully." << std::endl;
    }
    void displayAllAccounts(fstream &file)
    {
        Account account;
        file.seekg(0);

        while (file.read(reinterpret_cast<char *>(&account), RECORD_SIZE))
        {
            if (account.accountNumber != 0)
            {
                cout << "Account Number: " << account.accountNumber << endl;
                cout << "Last Name: " << account.lastName << endl;
                cout << "First Name: " << account.firstName << endl;
                cout << "Total Balance: " << account.totalBalance << endl;
                cout << "---------------------------" << endl;
            }
        }
    }
};
