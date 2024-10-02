#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testConstructor();
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
    }

private:
    void testConstructor() {
        Invoice invoice("INV001");
        if (invoice.getDollarsOwed() != 0.0) {
            std::cout << "Constructor test failed!" << std::endl;
        } else {
            std::cout << "Constructor test passed!" << std::endl;
        }
    }

    void testAddServiceCost() {
        Invoice invoice("INV002");

        invoice.addServiceCost(100.0);
        if (invoice.getDollarsOwed() != 100.0) {
            std::cout << "AddServiceCost test failed!" << std::endl;
        } else {
            std::cout << "AddServiceCost test passed!" << std::endl;
        }

        invoice.addServiceCost(-50.0);  // Should not change dollars owed
        if (invoice.getDollarsOwed() != 100.0) {
            std::cout << "Negative cost test failed!" << std::endl;
        } else {
            std::cout << "Negative cost test passed!" << std::endl;
        }
    }

    void testGetDollarsOwed() {
        Invoice invoice("INV003");

        invoice.addServiceCost(50.0);
        if (invoice.getDollarsOwed() != 50.0) {
            std::cout << "GetDollarsOwed test failed!" << std::endl;
        } else {
            std::cout << "GetDollarsOwed test passed!" << std::endl;
        }
    }

    void testGetInvoiceId() {
        Invoice invoice("INV004");
        if (invoice.getInvoiceId() != "INV004") {
            std::cout << "GetInvoiceId test failed!" << std::endl;
        } else {
            std::cout << "GetInvoiceId test passed!" << std::endl;
        }
    }
};
