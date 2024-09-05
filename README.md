# Converter - Ali Mohammad

### Konverter følgende kategorier
* Distance
* Vægt
* Temperatur

### Koden

Koden er blevet kompileret og testet på en Windows 11 maskine med AMD CPU vha. `gcc`.

Kør nedenstående linje for at kompilere koden:

```sh
gcc -Wall -I./src/include -I./src/ui -o ./build/temperature.exe ./src/*.c ./src/ui/*.c
```

Dernæst skal du køre den nyoprettet `.exe` fil med:

```sh
./build/temperature.exe
```
