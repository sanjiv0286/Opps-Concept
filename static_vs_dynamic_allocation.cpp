// #include <iostream>
// using namespace std;
// const int n = 5; // Size of the array

// int main()
// {
//     int arr[n]; // Static memory allocation for the array

//     // Input phase
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }

//     // Output phase
//     for (int i = 0; i < n; ++i)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// ************* Dynamic Memory allocation************************************

// ******acha to iski help hmne memory jo use ki usko khali krke save kr liya jo future me usable ho

// *dynamic memory ko allocate karte hain, toh aapko wahi memory future me dusre operations ke liye bhi use karni hoti hai. Agar aap us memory ko free nahi karte, toh wo memory 'leak' ho jati hai, yaani wo memory available nahi hoti future ke use ke liye aur aapka program over time jyada memory consume kar leta hai, jo ki performance ko affect karta hai. Isliye, sahi memory management ke liye, jab bhi aap dynamic memory allocate karte hain, usko release karna (deallocation) zaroori hota hai delete[] ka istemal karke.


#include <iostream>
using namespace std;
int main() {
    int n;

    // Input the size of the array
    cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    // Input phase
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Output phase
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}
