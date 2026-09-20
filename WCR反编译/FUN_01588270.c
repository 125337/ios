// FUN_01588270 @ 01588270

double FUN_01588270(double param_1,double param_2)

{
  u_int32_t uVar1;
  double dVar2;
  double local_18;
  
  local_18 = param_1;
  if (param_1 < param_2) {
    uVar1 = _arc4random_uniform(0x2711);
    dVar2 = (double)NEON_ucvtf((ulong)uVar1);
    local_18 = param_1 + (dVar2 / 10000.0) * (param_2 - param_1);
  }
  return local_18;
}

