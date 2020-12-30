#ifndef EVALUATE_H
#define EVALUATE_H

#include "types.h"

#define DefaultEvalFile "lichess1200-20201230-0811.bin"

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
