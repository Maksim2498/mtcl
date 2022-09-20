# MoonTalk C Library

## Index
- [Index](#index);
- [About](#about);
- [Naming Conventions](#naming-conventions);
    - [Primitives](#primitives);
        - [Examples](#primites-examples);
    - [Structures](#structures);
        - [Examples](#structures-examples);
    - [Enumerations](#enumerations);
        - [Examples](#enumerations-examples);
    - [Objects and Interfaces](#objects-and-interfaces);
        - [Examples](#objects-and-interfaces-examples);
    - [Methods](#methods);
        - [Examples](#methods-examples);
    - [Constants](#constants);
        - [Examples](#constants-examples);
    - [Library Private](#library-private);
        - [Examples](#library-private-examples);
- [Structure](#structure);
- [Documentation](#documentation);
- [Examples](#examples);
- [Installation](#installation);
- [Building](#building);
- [Roadmap](#roadmap).

## About

This is a general purpose C library. More comming soon...

## Naming Conventions

Library has it's own unique naming conventions listed below.

### Primitives

Every primitive type name is lower-cased name with no underscores starting with 'm' prefix.

#### <a name="primitives-examples"></a> Examples

- `mint`;
- `mvoid`;
- `mfloat`;
- `mbool`.

### Structures

Every structure type is defined without `typedef` and therefore every instance must be defined
in form `struct <struct name> <var name>`. Structs defined with `typedef` treated as object or
interface type. All structures names are in upper camel case prefixed with 'M'.

#### <a name="structures-examples"></a> Examples
- `struct MObjDesc`;
- `struct MIfaceDesc`.

### Enumerations

Comming soon...

#### <a name="enumerations-examples"></a> Examples

Comming soon...

### Objects and Interfaces

Comming soon...

#### <a name="objects-and-interfaces-examples"></a> Examples

Comming soon...

### Methods

Comming soon...

#### <a name="methods-examples"></a> Examples

Comming soon...

### Constants

Comming soon...

#### <a name="constants-examples"></a> Examples

Comming soon...

### Library Private

Comming soon...

#### <a name="library-private-examples"></a> Examples

Comming soon...

## Documentation

Comming soon...

## Examples

Comming soon...

## Installation

Firstly, [build project](#building). Secondly, run `install.sh` or `install.bat` file depending
on your operation system (Unix-like or Windows accordingly).

## Building

For building you must first install [CMake](https://cmake.org/download/) if you haven't one.
Next, go to the library top directory and simply run `build.sh` or `build.bat` file depending
on your operation system (Unix-like or Windows accordingly).

## Roadmap

Comming soon...
