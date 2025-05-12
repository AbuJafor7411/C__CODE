#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 50

struct Item {
    int id;
    char name[50];
    float price;
    int stock;
    char category[20];
};

struct OrderItem {
    char name[50];
    int quantity;
    float unitPrice;
    float subtotal;
};

struct SalesRecord {
    int id;
    int quantitySold;
    float totalEarned;
};
void showMenu(struct Item menu[], int itemCount) {
    char *categories[] = {"Breakfast", "Snacks", "Lunch", "Beverage"};
    printf("\n===== Menu =====\n");
    for (int c = 0; c < 4; c++) {
        printf("\n--- %s ---\n", categories[c]);
        printf("%-4s %-20s %-10s %-10s\n", "ID", "Item", "Price", "Stock");
        for (int i = 0; i < itemCount; i++) {
            if (strcmp(menu[i].category, categories[c]) == 0) {
                printf("%-4d %-20s %-10.2f %-10d\n", menu[i].id, menu[i].name, menu[i].price, menu[i].stock);
            }
        }
    }
}
void showInventory(struct Item menu[], int itemCount) {
    printf("\n=====  Inventory Status =====\n");
    printf("%-4s %-20s %-10s\n", "ID", "Item", "Stock");
    for (int i = 0; i < itemCount; i++) {
        printf("%-4d %-20s %-10d\n", menu[i].id, menu[i].name, menu[i].stock);
    }
}

void showSalesReport(struct SalesRecord sales[], struct Item menu[], int itemCount) {
    float grandTotal = 0;
    printf("\n=====  Daily Sales Report =====\n");
    printf("%-4s %-20s %-10s %-10s\n", "ID", "Item", "Sold", "Earned");
    for (int i = 0; i < itemCount; i++) {
        if (sales[i].quantitySold > 0) {
            printf("%-4d %-20s %-10d %-10.2f\n", menu[i].id, menu[i].name, sales[i].quantitySold, sales[i].totalEarned);
            grandTotal += sales[i].totalEarned;
        }
    }
    printf("\n Total Earnings Today: %.2f Tk\n", grandTotal);
}

void placeOrder(struct Item menu[], int itemCount, struct SalesRecord sales[]) {
    struct OrderItem orderList[50];
    int orderCount = 0;
    float total = 0.0;
    int id, qty;

    printf("\nEnter Item ID and Quantity (00 to finish):\n");
    while (1) {
        printf("Item ID: "); scanf("%d", &id);
        if (id == 0) break;
        printf("Quantity: "); scanf("%d", &qty);

        int found = 0;
        for (int i = 0; i < itemCount; i++) {
            if (menu[i].id == id) {
                found = 1;
                if (qty > menu[i].stock) {
                    printf(" Not enough stock for %s\n", menu[i].name);
                } else {
                    menu[i].stock -= qty;
                    strcpy(orderList[orderCount].name, menu[i].name);
                    orderList[orderCount].quantity = qty;
                    orderList[orderCount].unitPrice = menu[i].price;
                    orderList[orderCount].subtotal = qty * menu[i].price;
                    total += orderList[orderCount].subtotal;
                    orderCount++;

                    sales[i].id = id;
                    sales[i].quantitySold += qty;
                    sales[i].totalEarned += qty * menu[i].price;
                }
                break;
            }
        }
        if (!found) printf(" Invalid Item ID\n");
    }

    // Display bill
    printf("\n===== FINAL BILL =====\n");
    printf("%-20s %-10s %-10s %-10s\n", "Item", "Qty", "Price", "Total");
    for (int i = 0; i < orderCount; i++) {
        printf("%-20s %-10d %-10.2f %-10.2f\n",
               orderList[i].name,
               orderList[i].quantity,
               orderList[i].unitPrice,
               orderList[i].subtotal);
    }
    printf("\nGrand Total: %.2f Tk\n", total);
    printf(" Thank you for dining with Northern University Cafeteria!\n");
}

int main() {
    struct Item menu[MAX_ITEMS] = {
        {1, "Parota", 10, 100, "Breakfast"},
        {2, "Daal", 20, 50, "Breakfast"},
        {3, "Dim Bhaji", 20, 30, "Breakfast"},
        {4, "Shobji", 25, 70, "Breakfast"},
        {5, "Chicken Sandwich", 50, 40, "Snacks"},
        {6, "Chicken Burger", 60, 40, "Snacks"},
        {7, "Egg Sandwich", 30, 50, "Snacks"},
        {8, "Chicken Shawarma", 70, 30, "Snacks"},
        {9, "Singara", 10, 100, "Snacks"},
        {10, "Samosa", 15, 100, "Snacks"},
        {11, "Pakora", 10, 150, "Snacks"},
        {12, "Veg Bun", 30, 50, "Snacks"},
        {13, "Veg Roll", 30, 40, "Snacks"},
        {14, "Chowmein", 60, 50, "Snacks"},
        {15, "Shada Vat", 25, 100, "Lunch"},
        {16, "Plain Khichuri", 50, 100, "Lunch"},
        {17, "Morog Polao", 120, 70, "Lunch"},
        {18, "Dim Polao", 70, 70, "Lunch"},
        {19, "Dim Khichuri", 70, 70, "Lunch"},
        {20, "Chicken Curry", 85, 50, "Lunch"},
        {21, "Fish Curry", 75, 35, "Lunch"},
        {22, "Egg Curry", 35, 50, "Lunch"},
        {23, "Daal", 15, 50, "Lunch"},
        {24, "Alu Bharta", 20, 50, "Lunch"},
        {25, "Begun Bharta", 20, 50, "Lunch"},
        {26, "Begun Bhaji", 20, 50, "Lunch"},
        {27, "Mixed Shobji", 30, 50, "Lunch"},
        {28, "Tomato Bharta", 20, 50, "Lunch"},
        {29, "Masala Tea", 10, 100, "Beverage"},
        {30, "Milk Tea", 15, 100, "Beverage"},
        {31, "Coffee", 20, 100, "Beverage"},
        {32, "Water", 20, 100, "Beverage"}
    };

    struct SalesRecord sales[MAX_ITEMS] = {0};

    int choice;
    do {
        printf("\n=====  Northern University Cafeteria =====\n");
        printf("1. Show Menu\n2. Place Order\n3. Show Inventory\n4. Show Sales Report\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: showMenu(menu, 32); break;
            case 2: placeOrder(menu, 32, sales); break;
            case 3: showInventory(menu, 32); break;
            case 4: showSalesReport(sales, menu, 32); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}

