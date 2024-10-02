#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice {
private:
    std::string invoiceId;
    double dollarsOwed;

public:
    // Constructor
    Invoice(const std::string &id) : invoiceId(id), dollarsOwed(0.0) {}

    // Adds service cost to the invoice
    void addServiceCost(double costDollars) {
        if (costDollars > 0) {
            dollarsOwed += costDollars;
        }
    }

    // Returns total dollars owed
    double getDollarsOwed() const {
        return dollarsOwed;
    }

    // Returns the invoice ID
    std::string getInvoiceId() const {
        return invoiceId;
    }
};

#endif
