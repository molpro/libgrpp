/*
 *  libgrpp - a library for the evaluation of integrals over
 *            generalized relativistic pseudopotentials.
 *
 *  Copyright (C) 2021-2022 Alexander Oleynichenko
 */

#ifndef TYPE1_MCMURCHIE_DAVIDSON_H
#define TYPE1_MCMURCHIE_DAVIDSON_H

#include "libgrpp.h"

void libgrpp_type1_integrals_obara_saika(libgrpp_shell_t *shell_A, libgrpp_shell_t *shell_B,
                                         double *origin_C, double alpha_C, int ecp_power, double *rpp_matrix);

#endif // TYPE1_MCMURCHIE_DAVIDSON_H