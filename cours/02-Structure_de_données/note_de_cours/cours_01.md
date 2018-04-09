# structures linéaires

## opérations classiques
* inserer
* suppimer
* consulter
* modifier

* empty
* recherche
* parcourir

## type de structures

* array
* vector
* deque
* forward\_list
* list


differencie par complexité des opérations

### tableau de taille fixe

```cpp
const int SIZE
int data[SIZE]
```
consultation et modification en __O(1)__  
insertion/suppression en O(size-n)  


```cpp
int \*data;
size\_t size;
size\_t capacity;
```

cout de réallocation  
* strategie naive
* strategie correcte

__voir page 16 pour les complexité__  

### single linked list

parcourt séquentiel  
pointeur pour next  
parcourir: O(n)  
crée: O(1)  


