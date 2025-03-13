import numpy as np

def cinema(th1, th2, th3, L1, L2):
    # Convertir ángulos de grados a radianes
    th1 = np.deg2rad(th1)
    th2 = np.deg2rad(th2)
    th3 = np.deg2rad(th3)

    # Definir las matrices de transformación
    Ry1 = np.array([
        [np.cos(-th1), 0, np.sin(-th1), 0],
        [0, 1, 0, 0],
        [-np.sin(-th1), 0, np.cos(-th1), 0],
        [0, 0, 0, 1]
    ])

    Rx1 = np.array([
        [1, 0, 0, 0],
        [0, np.cos(th2), -np.sin(th2), 0],
        [0, np.sin(th2), np.cos(th2), 0],
        [0, 0, 0, 1]
    ])

    Tz1 = np.array([
        [1, 0, 0, 0],
        [0, 1, 0, 0],
        [0, 0, 1, -L1],
        [0, 0, 0, 1]
    ])

    Ry2 = np.array([
        [np.cos(-th3), 0, np.sin(-th3), 0],
        [0, 1, 0, 0],
        [-np.sin(-th3), 0, np.cos(-th3), 0],
        [0, 0, 0, 1]
    ])

    Tz2 = np.array([
        [1, 0, 0, 0],
        [0, 1, 0, 0],
        [0, 0, 1, -L2],
        [0, 0, 0, 1]
    ])

    # Calcular la matriz M
    M = Ry1 @ Rx1 @ Tz1 @ Ry2 @ Tz2

    # Multiplicar la matriz M por el vector [0, 0, 0, 1]
    M_simplified = M @ np.array([0, 0, 0, 1])

    # Extraer los valores de x, y, z
    x = M_simplified[0]
    y = M_simplified[1]
    z = M_simplified[2]

    # Retornar los resultados
    return [x, y, z]

# Valores específicos
th1 = 15
th2 = 10
th3 = 15
L1 = 1.5
L2 = 1.8

# Calcular posición
result = cinema(th1, th2, th3, L1, L2)
print(f"x: {result[0]}, y: {result[1]}, z: {result[2]}")
