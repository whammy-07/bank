// main.c

#include <stdio.h>
#include "account.h"
#include "transaction.h"

int main() {
    // Create accounts
    Account account1 = {12345, 1000.0};
    Account account2 = {67890, 2000.0};

    // Create a transaction
    Transaction transaction = {account1, account2};

    // Perform a transaction
    performTransaction(&transaction, 500.0);

    // Display account details after the transaction
    displayAccount(&account1);
    displayAccount(&account2);

    return 0;
}
