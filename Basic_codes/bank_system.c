#include <stdio.h>
#include<string.h>

//Define structure for a customer
typedef struct customer 
{
    int acc_no;
    char name[50];
    int balance;
}cus;

//function to print customer details (balance<100)
void print(cus *arr)
{
    printf("\n");
    for( int i=0;i<200;i++)
    {
        if(arr[i].balance<1000)
        {
            printf("Customer Name: %s\t\t",arr[i].name);
            printf("Account Number: %d\t\t",arr[i].acc_no);
            printf("Balance: %d\n",arr[i].balance);
        }
    }
    printf("\n");
}

//fuction to print all customers details
void all(cus *arr)
{
    printf("\n");
    for( int i=0;i<200;i++)
    {
            printf("Customer Name: %s\t\t",arr[i].name);
            printf("Account Number: %d\t\t",arr[i].acc_no);
            printf("Balance: %d\n",arr[i].balance);
    }
    printf("\n");
}

//function for withdrawal
void withdrawal(cus *arr)
{
    int acc,amt;
    printf("Enter the Account Number: ");
    scanf("%d",&acc);
    printf("Enter the Amount: ");
    scanf("%d",&amt);
    for(int i=0;i<200;i++)
    {
        if(acc==arr[i].acc_no)
        {
            if(arr[i].balance - amt < 1000)
            {
                printf("\nThe balance is insufficient for the specified withdrawal. \n");
            }
            else
            {
                printf("\n");
                printf("Account Number: %d\n",acc);
                printf("Name: %s\n",arr[i].name);
                printf("Balance Before Withdrawal: %d\n",arr[i].balance);
                printf("Withdrawal Ammount: %d\n",amt);
                printf("__WITHDRAWAL DONE__\n");
                printf("Current Balance: %d\n",arr[i].balance - amt);
                printf("Thank You.\n\n");
                arr[i].balance -= amt;
            }
        }
    }
}

//function for deposit
void deposit(cus *arr)
{
    int acc,amt;
    printf("Enter the Account Number: ");
    scanf("%d",&acc);
    printf("Enter the Amount: ");
    scanf("%d",&amt);
    for(int i=0;i<200;i++)
    {
        if(acc==arr[i].acc_no)
        {
            printf("\n");
            printf("Account Number: %d\n",acc);
            printf("Name: %s\n",arr[i].name);
            printf("Balance Before Deposit: %d\n",arr[i].balance);
            printf("Deposit Ammount: %d\n",amt);
            printf("__DEPOSIT DONE__\n");
            printf("Current Balance: %d\n",arr[i].balance + amt);
            printf("Thank You.\n\n");
            arr[i].balance += amt;    
        }
    }
}

int main()
{
    cus arr[200]={
    {11100, "Rudranil Roy", 500},
    {11101, "Amit Das", 3450},
    {11102, "Sourav Sen", 1200},
    {11103, "Riya Ghosh", 6780},
    {11104, "Ankit Pal", 2500},
    {11105, "Sneha Dey", 890},
    {11106, "Arjun Roy", 4320},
    {11107, "Taniya Paul", 7650},
    {11108, "Sumit Saha", 1350},
    {11109, "Debjani Nandi", 9870},
    {11110, "Rahul Sharma", 780},
    {11111, "Moumita Das", 6250},
    {11112, "Soham Banerjee", 4390},
    {11113, "Payel Mitra", 2750},
    {11114, "Biswajit Kar", 5580},
    {11115, "Priya Sen", 6790},
    {11116, "Rajiv Ghosh", 1100},
    {11117, "Kajal Dutta", 8740},
    {11118, "Animesh Mondal", 2090},
    {11119, "Debasish Saha", 4300},
    {11120, "Tithi Mukherjee", 2100},
    {11121, "Rupam Sinha", 3400},
    {11122, "Swapan Nandi", 920},
    {11123, "Jayeeta Roy", 6750},
    {11124, "Tanmay Das", 1200},
    {11125, "Rima Kar", 5400},
    {11126, "Sanjay Sen", 8000},
    {11127, "Madhumita Pal", 3600},
    {11128, "Aritra Saha", 150},
    {11129, "Nabanita Paul", 9820},
    {11130, "Anirban Dey", 3050},
    {11131, "Sanchita Mondal", 1290},
    {11132, "Rohit Roy", 7100},
    {11133, "Indrani Ghosh", 2540},
    {11134, "Kaushik Das", 5000},
    {11135, "Samiran Kar", 7490},
    {11136, "Suchitra Paul", 4250},
    {11137, "Nilanjan Sen", 8900},
    {11138, "Dibakar Banerjee", 9200},
    {11139, "Payel Dutta", 650},
    {11140, "Sougata Sinha", 7850},
    {11141, "Sudipta Roy", 4560},
    {11142, "Arpita Dey", 3780},
    {11143, "Rajanya Bagdi", 1000},
    {11144, "Suman Das", 2350},
    {11145, "Koushik Nandi", 5680},
    {11146, "Pritam Kar", 9870},
    {11147, "Rajesh Pal", 2140},
    {11148, "Ananya Ghosh", 4500},
    {11149, "Subhadeep Sen", 3450},
    {11150, "Puja Dey", 7820},
    {11151, "Sandeep Roy", 6500},
    {11152, "Tushar Banerjee", 3200},
    {11153, "Ankita Paul", 9050},
    {11154, "Sourin Das", 7600},
    {11155, "Deepshika Saha", 540},
    {11156, "Soumen Dutta", 4650},
    {11157, "Raktim Sinha", 250},
    {11158, "Ipsita Kar", 8300},
    {11159, "Samarpita Paul", 7900},
    {11160, "Harsh Sen", 3690},
    {11161, "Adrija Dey", 2890},
    {11162, "Subham Kar", 970},
    {11163, "Monali Ghosh", 3250},
    {11164, "Souradeep Sinha", 1980},
    {11165, "Rahul Kar", 6020},
    {11166, "Sayantan Roy", 7890},
    {11167, "Anurag Das", 9200},
    {11168, "Pritha Banerjee", 4870},
    {11169, "Trisha Pal", 5230},
    {11170, "Rupsa Nandi", 6700},
    {11171, "Kaustav Saha", 1430},
    {11172, "Sayani Dey", 8950},
    {11173, "Moumita Kar", 3380},
    {11174, "Sudeep Sen", 4560},
    {11175, "Nirjhar Pal", 9990},
    {11176, "Anwesha Ghosh", 2450},
    {11177, "Saptarshi Das", 6100},
    {11178, "Amlan Saha", 4050},
    {11179, "Ranjita Banerjee", 3200},
    {11180, "Dipannita Paul", 7150},
    {11181, "Avijit Roy", 8490},
    {11182, "Torsha Sen", 2650},
    {11183, "Prantik Nandi", 7850},
    {11184, "Kaushani Kar", 9870},
    {11185, "Debraj Sinha", 3650},
    {11186, "Indranil Paul", 4200},
    {11187, "Kamalika Roy", 1520},
    {11188, "Tridib Das", 9310},
    {11189, "Srijan Dey", 8740},
    {11190, "Bidisha Ghosh", 4320},
    {11191, "New Name 1", 2500},
    {11192, "New Name 2", 3600},
    {11193, "New Name 3", 4700},
    {11194, "New Name 4", 5800},
    {11195, "New Name 5", 6900},
    {11196, "New Name 6", 7200},
    {11197, "New Name 7", 8100},
    {11198, "New Name 8", 9300},
    {11199, "New Name 9", 1000},
    {11200, "Arnav Chatterjee", 6500},
    {11201, "Sanjana Bose", 4700},
    {11202, "Kiran Saha", 5300},
    {11203, "Sudeep Roy", 3200},
    {11204, "Paromita Sen", 8900},
    {11205, "Rahul Nandi", 1500},
    {11206, "Sristi Banerjee", 7400},
    {11207, "Aniket Das", 3600},
    {11208, "Ipshita Ghosh", 2800},
    {11209, "Jatin Pal", 5400},
    {11210, "Subhra Paul", 6300},
    {11211, "Rajdeep Dutta", 4100},
    {11212, "Nisha Kar", 9900},
    {11213, "Tanisha Ghoshal", 5800},
    {11214, "Ritwik Sinha", 3200},
    {11215, "Madhurima Das", 4100},
    {11216, "Sambit Roy", 3500},
    {11217, "Priyanka Banerjee", 6200},
    {11218, "Ravi Sen", 7500},
    {11219, "Pritish Mukherjee", 2700},
    {11220, "Rupali Nandi", 9400},
    {11221, "Anushka Choudhury", 4600},
    {11222, "Manas Paul", 3400},
    {11223, "Sweta Das", 7100},
    {11224, "Satyajit Dey", 8000},
    {11225, "Tridib Sen", 2700},
    {11226, "Pratiksha Saha", 5700},
    {11227, "Sounak Kar", 4900},
    {11228, "Bikram Ghosh", 4300},
    {11229, "Sagnik Dutta", 5600},
    {11230, "Ramesh Pal", 7200},
    {11231, "Shreya Nandi", 8100},
    {11232, "Meghna Ghosal", 3700},
    {11233, "Abhirup Das", 6500},
    {11234, "Kritika Banerjee", 8900},
    {11235, "Sohini Roy", 2300},
    {11236, "Ankit Sen", 5100},
    {11237, "Tanay Dutta", 9000},
    {11238, "Indrajit Paul", 7800},
    {11239, "Sonali Bose", 4300},
    {11240, "Pradip Chatterjee", 2700},
    {11241, "Reshmi Mukherjee", 3800},
    {11242, "Koushik Sinha", 5200},
    {11243, "Sanchari Ghosh", 4700},
    {11244, "Hiranmay Kar", 8000},
    {11245, "Chaitali Pal", 6900},
    {11246, "Arpita Roy", 5100},
    {11247, "Gaurav Sen", 7500},
    {11248, "Saptak Das", 6500},
    {11249, "Sujata Banerjee", 3000},
    {11250, "Soumya Dey", 4900},
    {11251, "Satyam Paul", 6800},
    {11252, "Sneha Mukherjee", 8700},
    {11253, "Aniruddha Kar", 9100},
    {11254, "Sucharita Ghosh", 7300},
    {11255, "Sudev Sinha", 5900},
    {11256, "Rajeshwari Das", 6700},
    {11257, "Deepak Banerjee", 7100},
    {11258, "Priyanshi Roy", 4000},
    {11259, "Rishav Nandi", 5500},
    {11260, "Tithir Dutta", 4600},
    {11261, "Vivek Pal", 3300},
    {11262, "Sudeshna Sen", 9000},
    {11263, "Rajendra Paul", 5600},
    {11264, "Sounava Kar", 8300},
    {11265, "Shraboni Ghosh", 4800},
    {11266, "Tushar Saha", 7500},
    {11267, "Madhuri Bose", 6200},
    {11268, "Bobby Roy", 2800},
    {11269, "Sangeeta Chatterjee", 9100},
    {11270, "Aritra Dey", 4200},
    {11271, "Sayan Sen", 5300},
    {11272, "Mahua Mukherjee", 9400},
    {11273, "Satyaki Kar", 3700},
    {11274, "Shibani Pal", 8500},
    {11275, "Rupayan Banerjee", 4600},
    {11276, "Milan Das", 9300},
    {11277, "Soma Roy", 4900},
    {11278, "Jayanta Dutta", 5700},
    {11279, "Debraj Sinha", 8800},
    {11280, "Tanmoy Paul", 6100},
    {11281, "Priyadarshini Sen", 7500},
    {11282, "Subarna Ghosh", 4900},
    {11283, "Deblina Kar", 6800},
    {11284, "Dipayan Chatterjee", 7700},
    {11285, "Sritama Dey", 5400},
    {11286, "Samarjit Banerjee", 8900},
    {11287, "Anushree Roy", 5700},
    {11288, "Raktim Nandi", 7200},
    {11289, "Sayani Paul", 6500},
    {11290, "Pratyusha Saha", 8100},
    {11291, "Ishani Sen", 4900},
    {11292, "Sudev Das", 3800},
    {11293, "Avijit Mukherjee", 5600},
    {11294, "Rashmita Ghosh", 7300},
    {11295, "Pankaj Roy", 9000},
    {11296, "Reshma Dutta", 6200},
    {11297, "Sudhanshu Banerjee", 8500},
    {11298, "Sohini Kar", 4700},
    {11299, "Anish Paul", 8800}
};
    int choice;
    while(1)
    {
        printf("Enter 0: Withdrawal\n");
        printf("Enter 1: Deposit\n");
        printf("Enter 2: Customer Details with balance is below 1000 rs\n");
        printf("Enter 3: All Csutomers Details\n");
        printf("Enter 4: Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 0:
            withdrawal(arr);
            break;
        case 1:
            deposit(arr);
            break;
        case 2:
            print(arr);
            break;
        case 3:
            all(arr);
            break;
        case 4:
            printf("Exied...");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    }
    return 0;
}
