### Análise de Complexidade: soma_elementos

**Análise Assintótica:**
Este algoritmo é um exemplo clássico de **Complexidade Linear $O(n)$**. O tempo de execução cresce proporcionalmente ao número de elementos ($n$) no array.

**Contagem de Instruções:**
*   `soma = 0`: Executada **1 vez**.
*   `i = 0`: Executada **1 vez**.
*   `i < n`: Executada **$n + 1$ vezes**.
*   `soma += array[i]`: Executada **$n$ vezes**.
*   `i++`: Executada **$n$ vezes**.

**Conclusão Teórica:**
Ao simplificar a função de tempo total e descartar as constantes e termos de menor ordem (processo de análise assintótica), o termo dominante identificado é $n$, resultando na classificação **$O(n)$**.