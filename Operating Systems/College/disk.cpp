#include <iostream>
#include <conio.h>
#include <stdlib.h>
// #include<time.h>
 using namespace std;

int request[100], st, cylinders, n;
// time_t t;
void rrandom(void)
{

    for (int i = 0; i < n; i++)
    {
        // srand(request[(rand()%n)]);
        request[i] = rand() % cylinders + 1;
    }
}

void display(void)
{
    cout << "\nThe requests are : \n";
    for (int i = 0; i < n; i++)
        cout << " " << request[i] << " ";
}

int main()
{
    int choice;
    void fcfs(void);
    void scan(void);
    cout << "\nEnter no. of cylinders in hard disk and starting cylinder : ";
    std::cin >> cylinders >> st;

    cout << "\npress 0 to generate rrandom disk requests and any other no. to give your own requests : ";

        cin >>choice;
    if (choice == 0)
    {
        cout << "\nEnter no. of requests to generate rrandomly : ";
        cin >> n;
        rrandom();
    }
    else
    {
        cout << "\nEnter the cylinders requested (0 to break): \n";
        while (1)
        {
            cin >> request[n++];
            if (request[n - 1] == 0 || n == 100)
            {
                n--;
                break;
            }
        }
    }

    cout << "\nEnter the scheduling algo that you want to implement(0:FCFS,1:Scan) : ";
    cin >> choice;
    switch (choice)
    {
        case 0:
        fcfs();
        break;
    case 1:
        scan();
        break;
    default:
        break;
    }

    getch();
    return 0;
}

void fcfs(void)
{
    int total = 0, i; // no of cylinders traversed
    display();
    cout << "\n\n The traversal is shown below : \n\n"
         << st;
    for (i = 0; i < n; i++)
    {
        cout << "-->" << request[i];
        total = total + abs(request[i] - st);
        st = request[i];
    }
    cout << "\n\nNo. of cylinders traversed : " << total;
}
    void scan(void)
{
    int total = 0, i, j, temp;
    display();
    for (i = 0; i < n; i++)
        for (j = 0; j < n - 1 - i; j++)
        {
            if (request[j] > request[j + 1])
            {
                temp = request[j];
                request[j] = request[j + 1];
                request[j + 1] = temp;
            }
        }
    display();

    cout << " \nThe traversal is shown below : \n\n"
         << st;

    if (st < request[0])
    {
        for (i = 0; i < n; i++)
        {
            cout << "-->" << request[i];
            total += abs(request[i] - st);
            st = request[i];
        }
    }
    else
    {

        i = 0;
        temp = 0;
        while (st > request[i++])
            temp++;
        for (i = temp; i < n; i++)
        {
            cout << "-->" << request[i];
            total += abs(request[i] - st);
            st = request[i];

            if (i == n - 1)
            {

                total = total + 2 * cylinders - request[i];
                st = 0;
                i = 0;
                n = temp;
                if (st != cylinders)
                {
                    cout << "-->" << cylinders;
                    cout << "-->" << 1;
                }
            }
        }
    }

    cout << "\nTotal cylinders traversed : " << total;
}