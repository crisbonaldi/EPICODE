
def perimetro_quadrato():

  lato = int(input("Inserisci un numero:\n"))
  perimetro = int(lato * 4)
  print("\nIl perimetro del quadrato è:", perimetro)



def perimetro_rettangolo():

  base = int(input("Inserire la base:\n"))
  altezza = int(input("Inserire l'altezza:\n"))  
  perimetro = base * 2 + altezza * 2
  print("\nIl perimetro del rettangolo è:" , perimetro)



def circonferenza():

  pi_greco = 3.14
  r = float(input("Inserire raggio\n"))
  circonferenza = float(2* pi_greco * r)
  print("La circonferenza è:", circonferenza)
  print(bool(r < circonferenza))


def menu():

  print("Cosa vuoi fare?\n")
  print("A. Voglio calcolare il perimetro di un quadrato")
  print("B. Voglio calcolare il perimetro di un rettangolo")
  print("C. Voglio calcolare la circonferenza")

tua_scelta = input("Fai la tua scelta:\n")

if tua_scelta == "A":
   perimetro_quadrato()
elif tua_scelta == "B":
   perimetro_rettangolo()
elif tua_scelta == "C":
   circonferenza()
else:
   print("Mi dispiace, non ho capito.\n")
