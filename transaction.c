// transaction.c

#include "transaction.h"

void performTransaction(Transaction *transaction, double amount) {
    // Perform a basic funds transfer transaction
    withdraw(&transaction->sender, amount);
    deposit(&transaction->receiver, amount);
}
