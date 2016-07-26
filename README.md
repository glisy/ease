ease
=====

Easing function macros

## install

```sh
$ clib install glisy/ease  --save
```

## usage

```c
#include <glisy/ease.h>
...
```

## api

### ease_linear_tween(t, b, c, d)

simple linear tweening - no easing, no acceleration

### ease_in_quad(t, b, c, d)

quadratic easing in - accelerating from zero velocity

### ease_out_quad(t, b, c, d)

 quadratic easing out - decelerating to zero velocity

### ease_in_out_quad(t, b, c, d)

 quadratic easing in/out - acceleration until halfway, then deceleration

### ease_in_cubic(t, b, c, d)

 cubic easing in - accelerating from zero velocity

### ease_out_cubic(t, b, c, d)

 cubic easing out - decelerating to zero velocity

### ease_in_out_cubic(t, b, c, d)

cubic easing in/out - acceleration until halfway, then deceleration

### ease_in_quart(t, b, c, d)
quartic easing in - accelerating from zero velocity

### ease_out_quart(t, b, c, d)

quartic easing out - decelerating to zero velocity

### ease_in_out_quart(t, b, c, d)

quartic easing in/out - acceleration until halfway, then deceleration

### ease_in_quint(t, b, c, d)

quintic easing in - accelerating from zero velocity

### ease_out_quint(t, b, c, d)

quintic easing out - decelerating to zero velocity

### ease_in_out_quint(t, b, c, d)

 quintic easing in/out - acceleration until halfway, then deceleration

### ease_in_sine(t, b, c, d)

sinusoidal easing in - accelerating from zero velocity

### ease_out_sine(t, b, c, d)

sinusoidal easing out - decelerating to zero velocity

### ease_in_out_sine(t, b, c, d)

sinusoidal easing in/out - accelerating until halfway, then decelerating

### ease_in_expo(t, b, c, d)

exponential easing in - accelerating from zero velocity

### ease_out_expo(t, b, c, d)

exponential easing out - decelerating to zero velocity

### ease_in_out_expo(t, b, c, d)

 exponential easing in/out - accelerating until halfway, then decelerating

### ease_in_circ(t, b, c, d)

 circular easing in - accelerating from zero velocity

### ease_out_circ(t, b, c, d)

 circular easing out - decelerating to zero velocity


### ease_in_out_circ(t, b, c, d)

 circular easing in/out - acceleration until halfway, then deceleration

## license

MIT
