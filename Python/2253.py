import unicodedata

while True:
    try: password = input()
    except EOFError: break
    validation1 = len(password) >= 6 and len(password) <= 32
    validation2 = unicodedata.normalize("NFC", "".join(x for x in password if x.isalnum())) == password
    validation3 = any(x.isupper() for x in password) and any(x.islower() for x in password) and any(x.isnumeric() for x in password)
    print(f"Senha {'valida' if validation1 and validation2 and validation3 else 'invalida'}.")