#ifndef GLISY_EASE_H
#define GLISY_EASE_H

//
// ported from http://gizma.com/easing
//

/**
 * simple linear tweening - no easing, no acceleration
 */

#define ease_linear_tween(t, b, c, d) c * t/d + b

/**
 * quadratic easing in - accelerating from zero velocity
 */

#define ease_in_quad(t, b, c, d) ({ \
  t /= d;                           \
  (c*t*t + b);                      \
})                                  \

/**
 * quadratic easing out - decelerating to zero velocity
 */

#define ease_out_quad(t, b, c, d) ({ \
  t /= d;                            \
  (-c * t*(t-2.0) + b);              \
})                                   \

/**
 * quadratic easing in/out - acceleration until halfway, then deceleration
 */

#define ease_in_out_quad(t, b, c, d) ({ \
  t /= d/2.0;                           \
  if (t < 1.0) {                        \
    (c/2.0*t*t + b);                    \
  } else {                              \
    t--;                                \
    (-c/2.0 * (t*(t-2.0) - 1.0) + b);   \
  }                                     \
})                                      \

/**
 * cubic easing in - accelerating from zero velocity
 */

#define ease_in_cubic(t, b, c, d) ({ \
  t /= d;                            \
  (c*t*t*t + b);                     \
})                                   \

/**
 * cubic easing out - decelerating to zero velocity
 */

#define ease_out_cubic(t, b, c, d) ({ \
  t /= d;                             \
  t--;                                \
  (c*(t*t*t + 1.0) + b);              \
})                                    \

/**
 * cubic easing in/out - acceleration until halfway, then deceleration
 */

#define ease_in_out_cubic(t, b, c, d) ({ \
  t /= d/2.0;                            \
  if (t < 1.0) {                         \
    (c/2.0*t*t*t + b);                   \
  } else {                               \
    t -= 2.0;                            \
    (c/2.0*(t*t*t + 2.0) + b);           \
  }                                      \
})                                       \

/**
 * quartic easing in - accelerating from zero velocity
 */

#define ease_in_quart(t, b, c, d) ({ \
  t /= d;                            \
  (c*t*t*t*t + b);                   \
})                                   \

/**
 * quartic easing out - decelerating to zero velocity
 */

#define ease_out_quart(t, b, c, d) ({ \
  t /= d;                             \
  t--;                                \
  (-c * (t*t*t*t - 1.0) + b);         \
})                                    \

/**
 * quartic easing in/out - acceleration until halfway, then deceleration
 */

#define ease_in_out_quart(t, b, c, d) ({ \
  t /= d/2.0;                            \
  if (t < 1.0) {                         \
    (c/2.0*t*t*t*t + b);                 \
  } else {                               \
    t -= 2.0;                            \
    (-c/2.0 * (t*t*t*t - 2.0) + b);      \
  }                                      \
})                                       \

/**
 * quintic easing in - accelerating from zero velocity
 */

#define ease_in_quint(t, b, c, d) ({ \
  t /= d;                            \
  (c*t*t*t*t*t + b);                 \
})                                   \

/**
 * quintic easing out - decelerating to zero velocity
 */

#define ease_out_quint(t, b, c, d) ({ \
  t /= d;                             \
  t--;                                \
  (c*(t*t*t*t*t + 1.0) + b);          \
})                                    \

/**
 * quintic easing in/out - acceleration until halfway, then deceleration
 */

#define ease_in_out_quint(t, b, c, d) ({ \
  t /= d/2.0;                            \
  if (t < 1.0) {                         \
    c/2.0*t*t*t*t*t + b;                 \
  } else {                               \
    t -= 2.0;                            \
    (c/2.0*(t*t*t*t*t + 2.0) + b);       \
  }                                      \
})                                       \

/**
 * sinusoidal easing in - accelerating from zero velocity
 */

#define ease_in_sine(t, b, c, d) ({   \
  (-c * cos(t/d * (pi/2.0)) + c + b); \
})                                    \

/**
 * sinusoidal easing out - decelerating to zero velocity
 */

#define ease_out_sine(t, b, c, d) ({ \
  (c * sin(t/d * (pi/2.0)) + b);     \
})                                   \

/**
 * sinusoidal easing in/out - accelerating until halfway, then decelerating
 */

#define ease_in_out_sine(t, b, c, d) ({ \
  (-c/2.0 * (cos(pi*t/d) - 1.0) + b);   \
})                                      \

/**
 * exponential easing in - accelerating from zero velocity
 */

#define ease_in_expo(t, b, c, d) ({       \
  (c * pow( 2.0, 10.0 * (t/d - 1) ) + b); \
})                                        \

/**
 * exponential easing out - decelerating to zero velocity
 */

#define ease_out_expo(t, b, c, d) ({          \
  (c * ( -pow( 2.0, -10.0 * t/d ) + 1 ) + b); \
})                                            \

/**
 * exponential easing in/out - accelerating until halfway, then decelerating
 */

#define ease_in_out_expo(t, b, c, d) ({            \
  t /= d/2.0;                                      \
  if (t < 1.0) {                                   \
    (c/2.0 * pow( 2.0, 10.0 * (t - 1.0) ) + b);    \
  } else {                                         \
    t--;                                           \
    (c/2.0 * ( -pow( 2.0, -10.0 * t) + 2.0 ) + b); \
  }                                                \
})                                                 \

/**
 * circular easing in - accelerating from zero velocity
 */

#define ease_in_circ(t, b, c, d) ({   \
  t /= d;                             \
  (-c * (sqrt(1.0 - t*t) - 1.0) + b); \
})                                    \

/**
 * circular easing out - decelerating to zero velocity
 */

#define ease_out_circ(t, b, c, d) ({ \
  t /= d;                            \
  t--;                               \
  (c * sqrt(1.0 - t*t) + b);         \
})                                   \

/**
 * circular easing in/out - acceleration until halfway, then deceleration
 */

#define ease_in_out_circ(t, b, c, d) ({     \
  t /= d/2.0;                               \
  if (t < 1.0) {                            \
    (-c/2.0 * (sqrt(1.0 - t*t) - 1.0) + b); \
  } else {                                  \
    t -= 2.0;                               \
    (c/2.0 * (sqrt(1.0 - t*t) + 1.0) + b);  \
  }                                         \
}                                           \

#endif
