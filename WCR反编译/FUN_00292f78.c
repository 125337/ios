// FUN_00292f78 @ 00292f78

long FUN_00292f78(long param_1,long param_2)

{
  double dVar1;
  double dVar2;
  long local_8;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_8 = 0;
  }
  else {
    dVar1 = (double)NEON_ucvtf(param_2);
    dVar2 = (double)NEON_ucvtf(param_1);
    local_8 = (long)((dVar2 * (dVar1 / 1000.0)) / 8.0);
  }
  return local_8;
}

