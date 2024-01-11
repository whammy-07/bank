// transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "account.h"

typedef struct {
    Account sender;
    Account receiver;
} Transaction;

void performTransaction(Transaction *transaction, double amount);

#endif // TRANSACTION_H
