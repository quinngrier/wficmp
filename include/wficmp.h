#if (!defined(WFICMPEQ))
  #define WFICMPEQ(x, y) ( \
    (x) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (y) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (x) + (y) * 0 == (y) + (x) * 0 \
  )
#endif

#if (!defined(WFICMPGE))
  #define WFICMPGE(x, y) ( \
    (x) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (y) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (x) + (y) * 0 >= (y) + (x) * 0 \
  )
#endif

#if (!defined(WFICMPGT))
  #define WFICMPGT(x, y) ( \
    (x) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (y) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (x) + (y) * 0 > (y) + (x) * 0 \
  )
#endif

#if (!defined(WFICMPLE))
  #define WFICMPLE(x, y) ( \
    (x) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (y) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (x) + (y) * 0 <= (y) + (x) * 0 \
  )
#endif

#if (!defined(WFICMPLT))
  #define WFICMPLT(x, y) ( \
    (x) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (y) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (x) + (y) * 0 < (y) + (x) * 0 \
  )
#endif

#if (!defined(WFICMPNE))
  #define WFICMPNE(x, y) ( \
    (x) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (y) % 1 == 0 /* reject expressions not of integer type */ \
    && \
    (x) + (y) * 0 != (y) + (x) * 0 \
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
