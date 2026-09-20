// FUN_00f7b82c @ 00f7b82c

double FUN_00f7b82c(double param_1,double param_2)

{
  u_int32_t uVar1;
  double dVar2;
  double local_18;
  
  local_18 = param_1;
  if (param_1 < param_2) {
    uVar1 = _arc4random_uniform((int)((param_2 - param_1) * 1000.0) + 1);
    dVar2 = (double)NEON_ucvtf((ulong)uVar1);
    local_18 = param_1 + dVar2 / 1000.0;
  }
  return local_18;
}

