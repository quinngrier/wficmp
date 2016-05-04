#if (!defined(WFIGE))
  #define WFIGE(x, y) ( \
    (x) % 1 == 0 /* only allow integers */ \
    && \
    (y) % 1 == 0 /* only allow integers */ \
    && \
    (x) + (y) * 0 >= (y) + (x) * 0 \
  )
#endif

#if (!defined(WFIGT))
  #define WFIGT(x, y) ( \
    (x) % 1 == 0 /* only allow integers */ \
    && \
    (y) % 1 == 0 /* only allow integers */ \
    && \
    (x) + (y) * 0 > (y) + (x) * 0 \
  )
#endif

#if (!defined(WFILE))
  #define WFILE(x, y) ( \
    (x) % 1 == 0 /* only allow integers */ \
    && \
    (y) % 1 == 0 /* only allow integers */ \
    && \
    (x) + (y) * 0 <= (y) + (x) * 0 \
  )
#endif

#if (!defined(WFILT))
  #define WFILT(x, y) ( \
    (x) % 1 == 0 /* only allow integers */ \
    && \
    (y) % 1 == 0 /* only allow integers */ \
    && \
    (x) + (y) * 0 < (y) + (x) * 0 \
  )
#endif

/*
 * The authors of this file have waived all copyright and
 * related or neighboring rights to the extent permitted by
 * law as described by the CC0 1.0 Universal Public Domain
 * Dedication. You should have received a copy of the full
 * dedication along with this file, typically as a file
 * named <CC0-1.0.txt>. If not, it may be available at
 * <https://creativecommons.org/publicdomain/zero/1.0/>.
 */
