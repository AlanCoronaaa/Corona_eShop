
---

# Corona eShop

**Corona eShop** is a command-line based e-commerce store simulation built using C++. It showcases core object-oriented programming principles, including product management, user account handling, and shopping cart functionality. This project is ideal for understanding file input/output operations and dynamic data management.

---

## Features

- **Product Management**: Browse and manage a dynamic list of products.
- **User System**: Users can log in and manage their shopping experience.
- **Shopping Cart**: Add and remove items from a virtual shopping cart.
- **File Handling**: Products and users are loaded from external files for data persistence.

---

## Project Structure

```plaintext
Corona_eShop/
│
├── Product.h              # Product class to manage item details (name, price)
├── User.h                 # User class to handle account data (username, password)
├── ShoppingCart.h         # Shopping cart class to handle adding/removing items
├── inicializacion.cpp     # Main entry point of the app, initializes the store, products, and users
├── Products.txt           # External file storing product information
└── Users.txt              # External file storing user account information
```

---

## How to Run

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/AlanCoronaaa/Corona_eShop.git
   cd Corona_eShop
   ```

2. **Compile the Code**:
   Ensure you have a C++ compiler (e.g., g++) installed, then run:
   ```bash
   g++ inicializacion.cpp -o Corona_eShop
   ```

3. **Run the Program**:
   ```bash
   ./Corona_eShop
   ```

---

## Usage

- **Product Browsing**: View all available products from the catalog.
- **User Login**: Sign in using a valid username and password from the `Users.txt` file.
- **Cart Management**: Add or remove products from your shopping cart.
- **Checkout**: Complete your shopping and simulate the purchase process.

---

## Contributing

Contributions are welcome! If you'd like to improve the project, feel free to:
- Fork the repository
- Create a new branch
- Make your changes
- Submit a pull request

For any bug reports or feature requests, please open an issue on GitHub.

---

## License

This project is open-source under the MIT License. You can use, modify, and distribute it freely as long as you comply with the license terms.

---

## Contact

For further questions or inquiries, reach out via alanlopez76203@gmail.com or connect with me on [LinkedIn](https://linkedin.com/in/alancoronaa).

---
