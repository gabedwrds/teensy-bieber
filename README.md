# teensy-bieber
Teensy 2.0 project to reset wallpaper when coworkers leave their Windows machines unlocked.

This uses the Teensy's USB disk mode where leftover flash storage is available as a read-only drive. The keyboard emulation opens a command prompt and types in a batch script to locate and execute the payload from the drive.

This is an old project I'm sharing for fun, out of date and unmaintained, yadda yadda.

# Build
Add your desired wallpaper as bieber.jpg in disk/. On a Teensy 2.0 with 31.5K of Flash, I had about 8KB of space left for the image. I used a heavily compressed low-res (240x180) image in tile mode both to make it fit and to make it extra-hideous.

Build Pwn.ino with the standard Arduino+Teensy tools with the Teensy's USB mode set to Keyboard+Disk (pointed to the disk/ folder).

# Run
After plugging in the Teensy, it waits 30 seconds for Windows to figure out drivers, then starts typing. The LED lights up during the last 3 seconds of the waiting period to warn that things are about to start happening.