import numpy as np


def gradientDescent(x,y):
    m_curr = b_curr = 0
    iterations = 1000
    n = len(x)
    learningRate = 0.008
    for i in range(iterations):
        y_predicted = m_curr * x + b_curr
        cost = (1/n) * sum([val**2 for val in (y-y_predicted)])
        md = -(2/n) * sum(x*(y-y_predicted))
        bd = -(2/n) * sum(y-y_predicted)
        m_curr = m_curr - learningRate * md
        b_curr = b_curr - learningRate * bd
        print(f"{m_curr = } \t {b_curr = } \t {i = } \t {cost = }")

x = np.array([1,2,3,4,5])
y = np.array([5,7,9,11,13])

gradientDescent(x, y)