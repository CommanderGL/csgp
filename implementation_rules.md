# Implementation Rules

## Layers

There are `3` layers of the csgp Protocol starting at `1`. Each layer adds on
the last any features in a previous layer will be present in the one after it:

1. Provides initialization, destruction, a framebuffer, optional keyboard input,
   optional mouse input, implementation level check, and optional controller
   support. (Minimun for `csgp_minima` to function.)
2. Adds graphics functions and types, collision checks, basic embedded monospace
   bitmap font rendering, GameObject class and tooling, tilemaps, UI elements,
   tga loading, PC Screen Font, and optional multi-window support.
3. SSFN font rendering (supports all major font formats and PC Screen Font),
   advanced image loading, and optional audio support.

## Optional Features

> [!WARNING]
> The following documentation is designed for a c-based implementation though
> can be adapted to any other language. Please check your implementation's
> documentation.

Many layers of the csgp Protocol have optional features. If your game relys on
one of these features both you and the implementation have to work together. The
implementation should contain a file named `csgp_supported.h` this must be
copied to wherever your `csgp.h` file is stored whether automaticaly or manualy.
This file is included by `csgp.h` to check which features are supported. Your
program should use the define the `CSGP_CONFIG` macro to specify which optional
features are required by your app and the `CSGP_CONFIG_INPUT` macro for input
sources. (see list below for available options.) `CSGP_CONFIG_INPUT` requires
only one of the given options. Then `csgp.h` will throw an error if any of your
required features are unsupported.

### List of Config Options

- `CSGP_CONFIG_MULTI_WINDOW`
- `CSGP_CONFIG_AUDIO`

### List of Input Config Options

- `CSGP_INPUT_CONTROLLER`
- `CSGP_INPUT_KEYBOARD`
- `CSGP_INPUT_TOUCH`
- `CSGP_INPUT_MOUSE`
- `CSGP_INPUT_KEYBOARD_MOUSE`

<div class="section_buttons">
| Previous         |
| :--------------- |
| [Home](index.md) |
</div>
