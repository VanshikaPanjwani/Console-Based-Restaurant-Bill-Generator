# Console-Based-Restaurant-Bill-Generator
## 🍽️ Food Ordering and Bill Printing System

Welcome to the **Grill In!** A simple C++ based console application that automates the food ordering and billing process. This project demonstrates a basic login/signup system, menu display, food selection, and final bill generation.

---

## 📌 Overview

This project simulates a basic food ordering and billing system designed for restaurants or small food businesses. It allows users to register or log in, view a menu, place an order, and receive a printed bill – all from the command line.

---

## 🚀 Features

* 🔐 **User Authentication** – Signup and Login functionality
* 📋 **Menu Display** – Reads and displays the food menu from a text file
* 🛒 **Order Management** – Takes multiple dish orders with quantity and serial input
* 🧾 **Bill Generation** – Calculates total cost including GST and prints a formatted bill

---

## 🛠️ How It Works

1. **Authentication**:
   The user either signs up with a username and password or logs in using existing credentials.

2. **Viewing Menu**:
   After logging in, the user can view the restaurant's menu displayed from `menu.txt`.

3. **Placing Orders**:
   The user is prompted to input the number of dishes they want to order, followed by each dish’s name, serial number, and quantity.

4. **Billing**:
   Once the order is placed, the system calculates the total, including GST, and prints a detailed receipt.

---

## 🧑‍💻 Technology Stack

* **Language**: C++
* **File Handling**: Used for reading/writing user details and menu
* **Console I/O**: For user interaction

---

## 📁 Folder Structure

```
/project-root
│
├── main.cpp           # Main application logic
├── menu.txt           # Contains the food menu
├── menu.cpp (optional)# For creating/updating menu
├── userdetail.txt     # Stores user personal information
├── userpass.txt       # Stores usernames
├── usersdata.txt      # Stores passwords
```

---

## 🧪 How to Run

1. **Clone the repository**

   ```bash
   git clone https://github.com/VanshikaPanjwani/online-food-ordering.git
   cd online-food-ordering
   ```

2. **Compile the program**
   Use any C++ compiler like `g++`:

   ```bash
   g++ main.cpp -o GrillIn
   ```

3. **Run the application**

   ```bash
   ./GrillIn
   ```

4. **Edit Menu (Optional)**
   You can modify the food menu directly in `menu.txt`, or use a `menu.cpp` if a separate menu generator is implemented.

---

## 🙌 Contributing

Contributions are welcome!
Feel free to fork the repository and submit a pull request to improve features, UI, or code structure.

---

## 📞 Contact

**Project Maintainer**: Vanshika Panjwani
🔗 GitHub: [VanshikaPanjwani](https://github.com/VanshikaPanjwani)

---

Let me know if you want me to include a license section or GitHub badges (e.g., build passing, repo size, etc.) as well!
