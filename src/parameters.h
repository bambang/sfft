/*
 * Copyright (c) 2012-2013 Haitham Hassanieh, Piotr Indyk, Dina Katabi,
 *   Eric Price, Massachusetts Institute of Technology
 * Copyright (c) 2012-2013 Jörn Schumacher, ETH Zurich 
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

#ifndef PARAMETERS_H
#define PARAMETERS_H

void get_expermient_vs_N_parameters(int N, bool WITH_COMB,
                                    double &Bcst_loc, double &Bcst_est,
                                    double &Comb_cst, int &loc_loops,
                                    int &est_loops, int &threshold_loops,
                                    int &comb_loops, double &tolerance_loc,
                                    double &tolerance_est);

void get_expermient_vs_K_parameters(int K, bool WITH_COMB,
                                    double &Bcst_loc, double &Bcst_est,
                                    double &Comb_cst, int &loc_loops,
                                    int &est_loops, int &threshold_loops,
                                    int &comb_loops, double &tolerance_loc,
                                    double &tolerance_est);

#endif
