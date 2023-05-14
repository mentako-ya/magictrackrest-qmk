## How to build

1. Check out this repository.

    ```console
      # change current directory to your git directory
    $ cd ~/git
    $ git clone https://github.com/mentako-ya/magictrackrest-qmk.git magictrackrest-qmk
    ```

2. Check out [qmk/qmk_firmware](https://github.com/qmk/qmk_firmware/) repository in another place.

    ```console
    $ git clone https://github.com/qmk/qmk_firmware.git --depth 1 --recurse-submodules --shallow-submodules -b 0.18.17 qmk_firmware
    ```

    Currently magictrackrest-qmk firmwares are verified to compile with QMK 0.18.17 to use https://remap-keys.app/.

3. Create a symbolic link to this `magictrackrest-qmk/qmk_firmware/keyboards/mentakoya/` directory from 'qmk_firmware/keyboards/' directory.

    ```console
    $ ls
    magictrackrest-qmk/ qmk_firmware/

    $ cd qmk_firmware/keyboards
    $ ln -s ../../magictrackrest-qmk/qmk_firmware/keyboards/mentakoya mentakoya
    $ ls mentakoya/mtr 
    LICENSE		glcdfont.c	keymaps		mtr.h		rules.mk
    config.h	info.json	mtr.c		readme.md
    ```

4. build your mtr via firmwares.
    
    build and flash firmware.
    ```console
    $ cd ~/git/qmk_firmware/keyboards 
    $ qmk clean -a
    $ qmk flash -kb mentakoya/mtr -km via
    Ψ Compiling keymap with gmake --jobs=1 mentakoya/mtr:via:flash
    ~
    Waiting for USB serial port - reset your controller now (Ctrl+C to cancel)..........
    ```
    Press the reset switch twice. then start flash firmware.
   

