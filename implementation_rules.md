# Implementation Rules

## Layers

There are `3` layers of the csgp Protocol starting at `1`. Each layer adds on
the last any features in a previous layer will be present in the one after it:

1. Provides initialization, destruction, a framebuffer, keyboard input, optional
   mouse input, implementation level check, and optional controller and other
   input support. (Minimun for `csgp_minima` to function.)
2. Adds graphics functions and types, collision checks, basic embedded monospace
   bitmap font rendering, GameObject class and tooling, tilemaps, UI elements,
   tga loading, PC Screen Font, and optional multi-window support.
3. SSFN font rendering (supports all major font formats and PC Screen Font),
   advanced image loading, and optional audio support.

## Optional Features

Many layers of the csgp Protocol have optional features. If your game relys on
one of these features both you and the implementation have to work together. The
implementation should contain a file named `csgp_supported.h` this must be
copied to wherever your `csgp.h` file is stored whether automaticaly or manualy.
This file is included by `csgp.h` to check which features are supported. Your
program should should define macros for which optional features are required
(see list below for available macros.) Then `csgp.h` will throw an error if any
of your required features are unsupported.

### List of Macros

- `CSGP_REQUIRED_CONTROLLER`
- `CSGP_REQUIRED_EXTENDED_INPUT`
- `CSGP_REQUIRED_MULTI_WINDOW`
- `CSGP_REQUIRED_AUDIO`
- `CSGP_REQUIRED_MOUSE`
