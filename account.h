// account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef struct {
    int accountNumber;
    double balance;
} Account;

void deposit(Account *account, double amount);
int withdraw(Account *account, double amount);
void displayAccount(const Account *account);

#endif // ACCOUNT_H
