// FUN_0028dfb8 @ 0028dfb8

long FUN_0028dfb8(undefined *param_1,long param_2)

{
  double dVar1;
  double dVar2;
  long local_8;
  
  if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
    local_8 = 0;
  }
  else {
    dVar1 = (double)NEON_ucvtf(param_2);
    dVar1 = dVar1 / 1000.0;
    if (0.0 < dVar1) {
      if (param_1 < &DAT_000186a0) {
        dVar2 = (double)NEON_ucvtf(param_1);
        local_8 = (long)(dVar2 * 1024.0 * dVar1);
      }
      else {
        dVar2 = (double)NEON_ucvtf(param_1);
        local_8 = (long)((dVar2 * dVar1) / 8.0);
      }
    }
    else {
      local_8 = 0;
    }
  }
  return local_8;
}

