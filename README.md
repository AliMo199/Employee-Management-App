
# Employee Management Application

## Description
This project is an Employee Management Application designed to help manage employee information, benefits, reporting, and searching functionalities. It provides a menu-driven interface for users to navigate through various services offered by the application.

![UML design](https://i.imgur.com/jNOdAkj.png)

## Features
1. **Employee Information Management:** Allows users to add new employees, edit existing employee details, and delete employees from the system.
2. **Benefits Modification:** Provides functionality to modify employee benefits.
3. **Reporting:** Offers reporting features such as displaying employee information, benefits information, and salary calculation.
4. **Search:** Enables users to search for employees by name, job title, or ID.

## Files
1. **main.cpp:** Contains the main function and menu-driven interface for the application.
2. **hrsystem.h:** Header file declaring the `hrsystem` class and its member functions.
3. **hrsystem.cpp:** Implementation file defining the member functions of the `hrsystem` class.
4. **department.h:** Header file declaring the `Department` class.
5. **benefit.h:** Header file declaring the `Benefit` class.
6. **employee.h:** Header file declaring the `Employee` class.
7. **hourlyemployee.h:** Header file declaring the `HourlyEmployee` class.
8. **salaryemployee.h:** Header file declaring the `SalaryEmployee` class.
9. **comissionemployee.h:** Header file declaring the `CommissionEmployee` class.
10. **manageremployee.h:** Header file declaring the `ManagerEmployee` class.

## Compilation and Execution
The project can be compiled and executed using any C++ compiler. Simply compile all the source files together and execute the resulting executable file.

## Usage
1. Upon running the application, a menu will be displayed with different services numbered from 1 to 4, with an option to quit (0).
2. Choose a service by entering the corresponding service number.
3. Follow the prompts and instructions to perform desired actions such as adding, editing, or deleting employees, modifying benefits, generating reports, or searching for employees.
4. Use the application until finished, then choose the option to quit.

## Dependencies
1. C++ Standard Library
2. `conio.h` for console input/output operations (Windows)
3. `unistd.h` for sleep function (Unix/Linux)

## Note
1. This application is designed for console-based interaction.
2. Ensure proper inclusion of necessary header files and libraries during compilation.
3. The application may need modifications or adjustments based on specific requirements or platform differences.
