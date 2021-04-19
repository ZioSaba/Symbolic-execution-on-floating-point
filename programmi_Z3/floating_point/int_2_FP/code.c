/*
c1 = Z3_mk_fpa_fp(ctx,
                      Z3_mk_numeral(ctx, "0", Z3_mk_bv_sort(ctx, 1)),
                      Z3_mk_numeral(ctx, "1025", Z3_mk_bv_sort(ctx, 11)),
                      Z3_mk_numeral(ctx, "3377699720527872", Z3_mk_bv_sort(ctx, 52)));

c2 = Z3_mk_fpa_to_fp_bv(ctx,
                            Z3_mk_numeral(ctx, "4619567317775286272", Z3_mk_bv_sort(ctx, 64)),
                            Z3_mk_fpa_sort(ctx, 11, 53));

c3 = Z3_mk_fpa_to_fp_int_real(ctx,
                                  Z3_mk_fpa_rtz(ctx),
                                  Z3_mk_numeral(ctx, "2", Z3_mk_int_sort(ctx)), // exponent 
                                  Z3_mk_numeral(ctx, "1.75", Z3_mk_real_sort(ctx)), // significand 
                                  Z3_mk_fpa_sort(ctx, 11, 53));

c4 = Z3_mk_fpa_to_fp_real(ctx,
                              Z3_mk_fpa_rtz(ctx),
                              Z3_mk_numeral(ctx, "7.0", Z3_mk_real_sort(ctx)),
                              Z3_mk_fpa_sort(ctx, 11, 53));
*/