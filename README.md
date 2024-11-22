# Conversor de String para Formato Hexadecimal

Este programa em C converte uma string para sua representação em formato hexadecimal precedido por `\x`.

## Funcionalidade

O programa possui duas funções principais:

- `main()`: Contém a string de exemplo "ola mundo!" e chama a função de conversão
- `stringHex()`: Converte cada caractere da string em sua representação hexadecimal

## Exemplo de Uso

```c
const char *string = "ola mundo!";
char buffer[512];
stringHex(string, buffer);
printf("%s", buffer); 
```

### Saída
```
\x6F\x6C\x61\x20\x6D\x75\x6E\x64\x6F\x21
```

## Como Funciona

A função `stringHex()` processa cada caractere da string e:

1. Converte para valor hexadecimal usando `%02X`
2. Adiciona o prefixo `\x` antes de cada byte
3. Armazena no buffer de saída
4. Move o ponteiro do buffer 4 posições (tamanho de `\xXX`)

## Compilação

Para compilar o programa use:

```sh
gcc main.c -o conversor
```

Para executar:

```sh
./conversor
```