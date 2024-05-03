def oito(senha):
    tamanho = len(senha)
    if tamanho >= 8:
        return True
    else:
        return False

def maiuscula(senha):
    if any(x.isupper() for x in senha):
      return True
    else:
        return False

def minuscula(senha):
    if any(x.islower() for x in senha):
      return True
    else:
        return False

def numero(senha):
    if any(x.isdigit() for x in senha):
      return True
    else:
        return False
