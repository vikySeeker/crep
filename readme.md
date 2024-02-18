# Crep is a Simple tool to repeat a string multiple times.

## Usage:
. `crep -c3 -d'-*-' "Welcome"` will repeat Welcome message 3 time seperated by '-*-' delimeter.

## output:	
`Welcome-*-Welcome-*-Welcome.`

## Options:
- **-c**: for count to specify number of times message should be repeated.
- **-d**: for delimeter to print between message.

## NOTE: 
**Message** should be given as **last argument**.
eg. `crep -c 3 -d , hello world` will only take **world** as message value.
