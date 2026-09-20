// FUN_003556dc @ 003556dc

void FUN_003556dc(double param_1,double param_2,long *param_3)

{
  double local_78;
  double local_70;
  double local_68;
  
  if (((DAT_028ca0fd & 1) != 0) && (param_3 != (long *)0x0)) {
    *param_3 = *param_3 + 1;
    local_68 = param_1;
    if (param_1 <= 0.0) {
      local_68 = 0.0;
    }
    param_3[1] = (long)((double)param_3[1] + local_68);
    local_70 = param_2;
    if (param_2 <= 0.0) {
      local_70 = 0.0;
    }
    param_3[2] = (long)((double)param_3[2] + local_70);
    local_78 = (double)param_3[3];
    if (local_78 < param_1 + param_2) {
      local_78 = param_1 + param_2;
    }
    param_3[3] = (long)local_78;
  }
  return;
}

