Solucion de fibonacci y calculo de su complejidad temporal en notacion asintotica

import datetime

def fibonacci(n):
    # Verifica que el valor de n sea menor o igual a 100.
    if n > 100 or n < 1:-------------------------------------------------------------------------------------------------------------> O(1)
        return "Error: n debe estar entre 1 y 100."
    
    # Inicializa una lista con los primeros dos términos de la sucesión de Fibonacci
    fib = [0, 1]---------------------------------------------------------------------------------------------------------------------> O(1)
    
    # De manera iterativa, añade a la lista 'fib' la suma de los dos últimos elementos de la lista.
    for i in range(2, n+1):----------------------------------------------------------------------------------------------------------> O(n)
        fib.append(fib[-1] + fib[-2])------------------------------------------------------------------------------------------------> O(1)
    
    # Retorna el ultimo elemento de la lista que corresponde al n-ésimo término de la sucesión de Fibonacci
    return fib[-1]
        

# Recibe el input del usuario
n = int(input("Ingrese el valor de n: "))--------------------------------------------------------------------------------------------> O(1)

# Guarda el tiempo inicial en la variable 'start_time', luego calcula el n-ésimo valor de la sucesión de Fibonacci y lo imprime.
start_time = datetime.datetime.now()-------------------------------------------------------------------------------------------------> O(1) Complejidad del metodo tomada de realpython.com
res = fibonacci(n)-------------------------------------------------------------------------------------------------------------------> O(1)
print(res)

# Guarda el tiempo actual en la variable 'end_time', calcula la diferencia con el tiempo inicial 
# y la multiplica por 1000 para imprimir el tiempo de ejecución en milisegundos.
end_time = datetime.datetime.now()---------------------------------------------------------------------------------------------------> O(1) Complejidad del metodo tomada de realpython.com
time_diff = (end_time - start_time)--------------------------------------------------------------------------------------------------> O(1)
execution_time = time_diff.total_seconds() * 1000------------------------------------------------------------------------------------> O(1) Complejidad del metodo tomada de realpython.com
print("Tiempo de ejecución: {} milisegundos.".format( execution_time ))

O(1)+O(1)+O(n)+O(1)+O(1)+O(1)+O(1)+O(1)+O(1)+O(1)=O(9)+O(n)
Usando la propiedad O(f(n)+g(n))=max{f(n),g(n)}-->O(9)+O(n)=O(n)

Solucion find-password con el calculo de su complejidad temporal en notacion asintotica

import time

def password_lookup(target):----------------------------------------------------------------------O(n*m*s)
    password = [ 48, 48, 48, 97, 97, 97 ] --------------------------------------------------------O(1)
    rounds = 0 -----------------------------------------------------------------------------------O(1)
    
    while password != [ 57, 57, 57, 122, 122, 122 ]:--------------------------------------------- O(n)
        rounds += 1 ------------------------------------------------------------------------------O(1)
        password[5] += 1 -------------------------------------------------------------------------O(1)

        for i in range(len(password)): -----------------------------------------------------------O(m)
            if i < 3 and password[i] == 58: ------------------------------------------------------O(1)
                password[i] = 48 -----------------------------------------------------------------O(1)
                password[i - 1] += 1 -------------------------------------------------------------O(1)
            
            if i >= 3 and password[i] == 123: ----------------------------------------------------O(1)
                password[i] = 97 -----------------------------------------------------------------O(1)
                password[i - 1] += 1 -------------------------------------------------------------O(1)
            
        if ''.join([ chr(i) for i in password ]) == target:---------------------------------------O(s)
            return 'found it in {} rounds!'.format(rounds) ---------------------------------------O(1)

    return 'not found! {} rounds'.format(rounds) -------------------------------------------------O(1)

starts_at = time.time() --------------------------------------------------------------------------O(1)
sorted = password_lookup('595alg') ---------------------------------------------------------------O(n*m*s)
ends_at = time.time() ----------------------------------------------------------------------------O(1)

print(sorted) #O(1)
print('finished in {}s'.format(ends_at - starts_at)) ---------------------------------------------O(1)

O(1)+O(1)[O(n)[O(1)+O(1)[O(m)[O(1)+O(1)+O(1)]+[O(a)+O(1)]]]]=O(n*m*s)
O(1)+O(n*m)+O(1)+O(1)+O(1)=f(n)=O(n*m*s)