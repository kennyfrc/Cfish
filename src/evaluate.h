#ifndef EVALUATE_H
#define EVALUATE_H

#include "types.h"

#define DefaultEvalFile "lichess1600-20201230-0908.bin"

enum { Tempo = 28 };

#ifdef NNUE
enum { EVAL_HYBRID, EVAL_PURE, EVAL_CLASSICAL };
#ifndef NNUE_PURE
extern int useNNUE;
#else
#define useNNUE EVAL_PURE
#endif
#endif

Value evaluate(const Position *pos);

#endif
