import datetime

def fibonacci(n):
    # Verifica que el valor de n sea menor o igual a 100.
    if n > 100 or n < 1:
        return "Error: n debe estar entre 1 y 100."
    
    # Inicializa una lista con los primeros dos términos de la sucesión de Fibonacci
    fib = [0, 1]
    
    # De manera iterativa, añade a la lista 'fib' la suma de los dos últimos elementos de la lista.
    for i in range(2, n+1):
        fib.append(fib[-1] + fib[-2])
    
    # Retorna el ultimo elemento de la lista que corresponde al n-ésimo término de la sucesión de Fibonacci
    return fib[-1]
        

# Recibe el input del usuario
n = int(input("Ingrese el valor de n: "))

# Guarda el tiempo inicial en la variable 'start_time', luego calcula el n-ésimo valor de la sucesión de Fibonacci y lo imprime.
start_time = datetime.datetime.now()
res = fibonacci(n)
print(res)

# Guarda el tiempo actual en la variable 'end_time', calcula la diferencia con el tiempo inicial 
# y la multiplica por 1000 para imprimir el tiempo de ejecución en milisegundos.
end_time = datetime.datetime.now()
time_diff = (end_time - start_time)
execution_time = time_diff.total_seconds() * 1000
print("Tiempo de ejecución: {} milisegundos.".format( execution_time ))

"""
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
complexity rate is at 80% per hour in the end it doesnt even matter

"""
