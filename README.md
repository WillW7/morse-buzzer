# Morse Buzzer - ww6g21

```
git clone https://github.com/raspberrypi/pico-sdk.git
```


```
mkdir build & cd build
PICO_SDK_PATH=../../pico-sdk
cmake -DPICO_BOARD=pico_w .. 
make
```

drag and drop the `main.uf2` file onto the pi pico.
The code will run automatically, but you should be able to press the __RUN__ button on the maker board to restart the playback.
