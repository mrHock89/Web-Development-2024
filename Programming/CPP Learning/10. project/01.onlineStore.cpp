#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<ctime>
#include<unordered_set>
#include<unordered_map>


using namespace std;

struct Product{
    int productId;
    string name;
    string category;
};

struct Order {
    int orderId;
    int ProductId;
    int quantity;
    string vudtomerId;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Smart Phone", "Electronics"},
        {103, "Coffe Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk lamp", "Home"}
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001",time(0)});
    orderHistory.push_back({2, 102, 2, "C002",time(0)});
    orderHistory.push_back({3, 103, 1, "C003",time(0)});

    set<string> categories;
    for(const auto &product: products) {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    unordered_map<string, string> customerData = {
        {"C001", "Alice"},
        {"C002", "Anirban"},
        {"C003", "Archo"},
        {"C004", "Boki"},
        {"C005", "Lol"},
    };

    unordered_set<int> uniqueProductIds;
    for(const auto &product: products){
        uniqueProductIds.insert(product.productId);
    }

    return 0;
}