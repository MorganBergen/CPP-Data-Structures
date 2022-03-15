/**
 * @file    main.cpp
 * @author  Morgan Bergen
 * @date    October 20/2021
 * @brief   This file representes exercise 2 of lab06.  This program will ask the user for what day they want a count of peopel with the flu for.  Then via recursion, the flu_count function will display the amount.  Recursion is therefore used to solve the calcuations of infected for a given day.  This program also assumes that the user will input a valid day.
 */

#include <iostream>
#include <stdexcept>
#include <string>

int flu_count (int n) {
    
    if (n == 1) {
        return (1);
    } else if (n == 2) {
        return (8);
    } else if (n == 3) {
        return(22);
    } else if (n < 1) {
        std::cout << "argument cannot be negative or be equal to zero." << std::endl;
    } else {
        return (flu_count(n - 1) + flu_count(n - 2) + flu_count(n - 3));
    }
    return (0);
}

int main () {
    
    int count_day;
    std::cout << std::endl;
    std::cout << "OUTBREAK!\nWhat day do you want a sick count for?: ";
    std::cin >> count_day;
    
    std::cout << "Total people with flu: " << flu_count(count_day) << std::endl;
    std::cout << std::endl;
    
    return (0);
}


/*
 
 
 Write-up Instructions:
 You will make a program that will ask the user for what day they want a count of peopel with the flu for.
 Then display the amount.  You must use recursion to solve the calcuations of infected for a given day.  Assume the user will input a valid day.
 
 Exercise 2 Outbreak Returns:
 Flu Season is upon us and the number of people getting sick is growing
 On day 1, there was only 1 person with the flu
 On day 2, it jumped to 8
 On day 3, there were 22
 Every day since, the number of people who have the flu is equal to the last 3 days combined
 Thus, when n > 3 = total is last three days combined
 
 Verification Table with Sample Test Days:
 day(n) ==> day(n - 3) + day(n - 2) + day(n - 1)
 day(8) ==> 381 = 206 + 114 + 61
 day(7) ==> 206 = 114 + 61 + 31
 day(6) ==> 114 = 61  + 31 + 22
 day(5) ==> 61  = 31  + 22 + 8
 day(4) ==> 31  = 22  + 8  + 1
 day(3) ==> 22
 day(2) ==> 8
 day(1) ==> 1
 
 Table with Test Days:
 day(n) ==> day(n - 3) + day(n - 2) + day(n - 1)
 day(8) ==> day(7) + day(6) + day(5)
 day(7) ==> day(6) + day(5) + day(4)
 day(6) ==> day(5) + day(4) + day(3)
 day(5) ==> day(4) + day(3) + day(2)
 day(4) ==> day(3) + day(2) + day(1)
 day(3) ==> 22
 day(2) ==> 8
 day(1) ==> 1
 
 Sample Runs:
 OUTBREAK!
 What day do you want a sick count for?: 1
 Total people with flu: 1
 
 OUTBREAK!
 What day do you want a sick count for?: 2
 Total people with flu: 8
 
 OUTBREAK!
 What day do you want a sick count for?: 3
 Total people with flu: 22
 
 OUTBREAK!
 What day do you want a sick count for?: 4
 Total people with flu: 31
 OUTBREAK!
 
 What day do you want a sick count for?: 5
 Total people with flu: 61
 
 OUTBREAK!
 What day do you want a sick count for?: 0
 Invalid day
 
 */
