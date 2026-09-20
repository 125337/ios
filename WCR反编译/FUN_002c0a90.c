// FUN_002c0a90 @ 002c0a90

bool FUN_002c0a90(double *param_1,double *param_2)

{
  bool local_1;
  
  if ((param_1 == (double *)0x0) || (param_2 == (double *)0x0)) {
    local_1 = false;
  }
  else {
    local_1 = false;
    if (((((((ABS(*param_1 - *param_2) < 0.5) &&
            (local_1 = false, ABS(param_1[1] - param_2[1]) < 0.5)) &&
           (local_1 = false, ABS(param_1[2] - param_2[2]) < 0.5)) &&
          ((local_1 = false, ABS(param_1[3] - param_2[3]) < 0.5 &&
           (local_1 = false, ABS(param_1[4] - param_2[4]) < 0.5)))) &&
         (((local_1 = false, ABS(param_1[5] - param_2[5]) < 0.5 &&
           ((local_1 = false, ABS(param_1[6] - param_2[6]) < 0.5 &&
            (local_1 = false, ABS(param_1[7] - param_2[7]) < 0.5)))) &&
          (local_1 = false, ABS(param_1[8] - param_2[8]) < 0.5)))) &&
        ((((local_1 = false, ABS(param_1[9] - param_2[9]) < 0.5 &&
           (local_1 = false, ABS(param_1[10] - param_2[10]) < 0.5)) &&
          (local_1 = false, ABS(param_1[0xb] - param_2[0xb]) < 0.5)) &&
         (((local_1 = false, ABS(param_1[0xc] - param_2[0xc]) < 0.5 &&
           (local_1 = false, param_1[0xd] == param_2[0xd])) &&
          ((local_1 = false, param_1[0xe] == param_2[0xe] &&
           ((local_1 = false, (*(byte *)(param_1 + 0xf) & 1) == (*(byte *)(param_2 + 0xf) & 1) &&
            (local_1 = false,
            (*(byte *)((long)param_1 + 0x79) & 1) == (*(byte *)((long)param_2 + 0x79) & 1)))))))))))
       && ((local_1 = false,
           (*(byte *)((long)param_1 + 0x7a) & 1) == (*(byte *)((long)param_2 + 0x7a) & 1) &&
           ((local_1 = false,
            (*(byte *)((long)param_1 + 0x7b) & 1) == (*(byte *)((long)param_2 + 0x7b) & 1) &&
            (local_1 = false,
            (*(byte *)((long)param_1 + 0x7c) & 1) == (*(byte *)((long)param_2 + 0x7c) & 1))))))) {
      local_1 = (*(byte *)((long)param_1 + 0x7d) & 1) == (*(byte *)((long)param_2 + 0x7d) & 1);
    }
  }
  return local_1;
}

