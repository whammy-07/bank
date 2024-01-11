// account.c

#include <stdio.h>
#include "account.h"

void deposit(Account *account, double amount) {
    account->balance += amount;
}

int withdraw(Account *account, double amount) {
    if (account->balance >= amount) {
        account->balance -= amount;
        return 1;  // Successful withdrawal
    } else {
        printf("Insufficient funds!\n");
        return 0; // Failed withdrawal
    }
}

void displayAccount(const Account *account) {
    printf("Account Number: %d, Balance: $%.2f\n", account->accountNumber, account->balance);
}
