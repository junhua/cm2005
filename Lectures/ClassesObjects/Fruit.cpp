#include <iostream>
#include <string>
#include <ctime>

class Fruit{
    public:
        // Constructor
        Fruit(std::string name, std::string color, double weight,
              int days, double price, time_t prod_date)
            : name(name), color(color), weight(weight),
              shelf_life(days), price(price), production_date(prod_date){}
    
        // Member functions
        std::string get_color() const { return color; }
        double get_weight() const { return weight; }
        std::string get_name() const { return name; }
        int get_shelf_life() const { return shelf_life; }
        double get_price() const { return price; }
    
        bool edible() const{
            // Calculate if  edible based on production date and shelf life
            time_t current_time = time(nullptr);
            double seconds_elapsed = difftime(current_time, production_date);
            int days_elapsed = static_cast<int>(seconds_elapsed / (60 * 60 * 24));
    
            return days_elapsed <= shelf_life;
        }
    
        double set_price(double new_price){
            price = new_price;
            return price;  
        }
    
    private:
        std::string name;
        std::string color;
        double weight;
        int shelf_life; // in days
        double price;
        time_t production_date;
    };
    
    // Example usage
    int main()
    {
        // Current time
        time_t now = time(nullptr);
    
        // Create a fruit produced 10 days ago with 14-day shelf life
        time_t ten_days_ago = now - (10 * 24 * 60 * 60);
        Fruit apple("Apple", "Red", 0.2, 14, 1.99, ten_days_ago);
    
        // Display information about the fruits
        std::cout << "--- " << apple.get_name() << " ---" << std::endl;
        std::cout << "Price: $" << apple.get_price() << std::endl;
        std::cout << "Shelf life: " << apple.get_shelf_life() << " days" << std::endl;
        std::cout << "Edible: " << (apple.edible() ? "Yes" : "No") << std::endl;
    
        // Create a fruit produced 20 days ago with 14-day shelf life
        time_t twenty_days_ago = now - (20 * 24 * 60 * 60);
        Fruit banana("Banana", "Yellow", 0.15, 14, 0.99, twenty_days_ago);
        std::cout << "\n--- " << banana.get_name() << " ---" << std::endl;
        std::cout << "Price: $" << banana.get_price() << std::endl;
        std::cout << "Shelf life: " << banana.get_shelf_life() << " days" << std::endl;
        std::cout << "Edible: " << (banana.edible() ? "Yes" : "No") << std::endl;
    
        return 0;
    }