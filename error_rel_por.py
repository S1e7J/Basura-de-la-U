def err_por(T , E):
    err = (E - T)/E
    return err*100
Teo = float(input("Ingrese el valor teorico: "))
Exp = float(input("Ingrese el valor experimenta: "))
print('Su error relativo porcentual es:{}'.format(err_por(Teo, Exp)))
