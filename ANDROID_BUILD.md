# OpenClaw Android build

This fork supports the original Captain Claw resources either as the original
`CLAW.REZ` or as an extracted-resource ZIP named `ORIGINAL_ASSETS.ZIP`.

`ORIGINAL_ASSETS.ZIP` must contain the *contents* of the game's `Assets/`
directory at the ZIP root, e.g. `CLAW/ANIS/...`, `LEVEL1/...`, etc.

The Android workflow packages that ZIP into the APK and copies it to the app's
private storage before the SDL game starts.

The original `CLAW.REZ` remains supported on desktop platforms.
