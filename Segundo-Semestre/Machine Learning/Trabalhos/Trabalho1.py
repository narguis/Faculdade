pessoas = []

'''1 - Deverá ser criada uma classe chamada Contato, 
com os atributos descritos anteriormente (e-mail, twiter, ...).'''
class Contato():
    def __init__(self, nome, telefone, email, twitter, facebook, instagram):
        self.nome = nome
        self.telefone = telefone
        self.email = email
        self.twitter = twitter
        self.facebook = facebook
        self.instagram = instagram


'''2 - Implemente uma função que será o menudoprograma, 
onde o usuário poderá inserir um novo contato, 
fazer uma consulta de um nome já cadastrado, 
remover ou fazer alteração em um contato previamente cadastrado e sair do programa.'''
def menu():
    resp = 0
    print('[1] Novo contato')
    print('[2] Consultar contato')
    print('[3] Alterar/Remover contato')
    print('[4] Sair do programa')
    resp = input("O que você deseja fazer? ")
    check = resp.isnumeric() and resp.strip()[0] in '1234'
    while check is False:
        print('Resposta inválida!')
        resp = input("O que você deseja fazer? ")
        check = resp.isnumeric() and resp.strip()[0] in '1234'
    resp = int(resp)
    print('-' * 30)
    return resp


'''3 - Implemente uma função para ler os dados, gravando-os em um dicionário.'''
def novo():
    n = input('Qual é o nome do usuário? ').capitalize()
    tlf = int(input('Qual é o telefone do usuário? '))
    eml = input('Qual é o e-mail do usuário? ')
    ttr = input('Qual é o twitter do usuário? ')
    fcb = input('Qual é o facebook do usuário? ')
    ing = input('Qual é o instagram do usuário? ')
    print('Contato adicionado com sucesso!')
    print('-' * 30)
    dic = Contato(n, tlf, eml, ttr, fcb, ing)
    pessoas.append(dic.__dict__)
    return dic.__dict__


'''4 - Implemente uma função para consultar, a partir do nome, 
e deverá exibir o nome, os dados de e-mail, telefone e contas no Instagram, 
facebbok e Twitter, salvos no dicionário.'''
def consulta(nome):
    cont = 0
    for i in range(0, len(pessoas)):
        if pessoas[i]['nome'] == nome.capitalize():
            cont += 1
            for k, v in pessoas[i].items():
                print(f'{k} = {v}')
    if cont == 0:
        print('Contato inexistente!')
    print('-' * 30)


'''5 - Implemente uma função para alterar os dados de um contato, 
consultado, no dicionário, pelo nome.'''
def alterar(nome):
    cont = 0
    for i in range(0, len(pessoas)):
        if pessoas[i]['nome'] == nome.capitalize():
            cont += 1
            for k, v in pessoas[i].items():
                print(f'{k} = {v}')
            alt = input('O que você deseja alterar? ').lower()
            for k in pessoas[i].keys():
                if alt == 'nome':
                    pessoas[i][k] = input('Insira o novo valor: ').capitalize()
                    print(f'O {k} foi alterado!')
                elif alt == k:
                    pessoas[i][k] = input('Insira o novo valor: ')
                    print(f'O {k} foi alterado!')
    if cont == 0:
        print('Contato inexistente!')
    print('-' * 30)


'''6 - Implemente uma função para excluir um contato, consultado pelo nome, no dicionário.'''
def excluir(nome):
    cont = 0
    for i in range(0, len(pessoas)):
        if pessoas[i]['nome'] == nome.capitalize():
            cont += 1
            del pessoas[i]
            print('Contato excluído!')
    if cont == 0:
        print('Contato inexistente!')
    print('-' * 30)


'''7 - Implemente uma função para exibir a lista de contatos, da seguinte forma:'''
def exibir():
    print('Nome', ' ' * 5, 'Telefone', ' ' * 5, 'E-mail', ' ' * 25, 'Twitter', ' ' * 5,
    'Facebook', ' ' * 10, 'Instagram')
    for i in range(0, len(pessoas)):
            print(f'{pessoas[i]["nome"]:<11}', end='')
            print(f'{pessoas[i]["telefone"]:<15}', end='')
            print(f'{pessoas[i]["email"]:<33}', end='')
            print(f'{pessoas[i]["twitter"]:<14}', end='')
            print(f'{pessoas[i]["facebook"]:<20}', end='')
            print(f'{pessoas[i]["instagram"]}')
            

'''Programa principal'''
resp = menu()
while True:
    if resp == 1:
        novo()
        resp = menu()
    elif resp == 2:
        cons = input('Qual contato você deseja consultar? ')
        consulta(cons)
        resp = menu()
    elif resp == 3:
        altrem = input('Qual contato você deseja alterar ou remover? ')
        ar = input('Deseja alterar ou remover esse contato? [A = Alterar] e [R = Remover] ').upper()
        while ar.strip()[0] not in 'AR':
            print('ERRO! Digite [A] para Alterar esse contato e [R] para removê-lo!')
            ar = input('Deseja alterar ou remover esse contato? ').upper()
        if ar == 'A':
            alterar(altrem)
            resp = menu()
        else:
            excluir(altrem)
            resp = menu()
    elif resp == 4:
        exibir()
        print('Volte sempre!')
        break

