/**
 * @file party.cpp
 *
 * @version 01.01 2021514
 *
 * @brief
 *
 * @ingroup party
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
#define DEBUG
using namespace std;

// Variabiles
int T, N, sol, tmp;

// Main code
int main()
{
    // Cncomment the following lines if you want to read/write from files
    freopen("party_input_1.txt", "r", stdin);
    freopen("party_output_1.txt", "w", stdout);

    // Input
    cin >> T;

    for (size_t t = 0; t < T; ++t)
    {
        cin >> N;
        sol = 0;

        for (size_t i = 0; i < N; ++i) {
            cin >> tmp;
            if (tmp > 0)
                sol += tmp;
        }

        cout << "Case #" << t + 1 << ": " << sol << endl;
    }

    // End
    return 0;
}
