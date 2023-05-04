#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> targetIndices(vector<int> &nums, int target)
{
    vector<int> guardarIndices;

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            guardarIndices.push_back(i);
        }
    }
    return guardarIndices;
}

vector<int> arrayOrdenado(int tamanioArray)
{
    vector<int> arr(tamanioArray);
    for (int i = 0; i < tamanioArray; i++)
    {
        arr[i] = rand() % 20;
    }
    sort(arr.begin(), arr.end());
    return arr;
}

vector<int> arrayRepetido(int tamanioArray)
{
    vector<int> arr(tamanioArray);
    for (int i = 0; i < tamanioArray / 2; i++)
    {
        arr[i] = rand() % 20;
        arr[tamanioArray - i - 1] = rand() % 20;
    }
    return arr;
}

vector<int> arrayAleatorio(int tamanioArray)
{
    vector<int> arr(tamanioArray);
    for (int i = 0; i < tamanioArray; i++)
    {
        arr[i] = rand() % 20;
    }
    return arr;
}

vector<int> arrayVacio(int tamanioArray)
{
    vector<int> arr(tamanioArray);
    arr.clear();
    return arr;
}

int main()
{
    int tamanioArray = 10;
    vector<vector<int>> arrayCasosPrueba;

    // Genera casos de prueba de un array ordenado
    for (int i = 0; i < 33; i++)
    {
        arrayCasosPrueba.push_back(arrayOrdenado(tamanioArray));
    }

    // Genera casos de prueba de un array de números repetidos
    for (int i = 0; i < 33; i++)
    {
        arrayCasosPrueba.push_back(arrayRepetido(tamanioArray));
    }

    // Genera casos de prueba de un array aleatorio
    for (int i = 0; i < 33; i++)
    {
        arrayCasosPrueba.push_back(arrayAleatorio(tamanioArray));
    }

    // Genera casos de prueba de arrays vacíos
    for (int i = 0; i < 1; i++)
    {
        arrayCasosPrueba.push_back(arrayVacio(tamanioArray));
    }

    // imprimir casos de prueba
    for (int i = 0; i < arrayCasosPrueba.size(); i++)
    {
        int target = rand() % 20;
        cout << "\nCaso de prueba " << i + 1 << ":\n";
        cout << "-Array: [";
        for (int j = 0; j < arrayCasosPrueba[i].size(); j++)
        {
            cout << arrayCasosPrueba[i][j];
            if (j != arrayCasosPrueba[i].size() - 1)
            {
                cout << ",";
            }
        }
        cout << "]";
        cout << " -Target: " << target;
        cout << " -Indices: [";
        vector<int> indices = targetIndices(arrayCasosPrueba[i], target);
        for (int j = 0; j < indices.size(); j++)
        {
            cout << indices[j];
            if (j != indices.size() - 1)
            {
                cout << ",";
            }
        }
        cout << "]\n";
    }
    
}