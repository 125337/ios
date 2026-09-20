// FUN_01be95f4 @ 01be95f4

double FUN_01be95f4(double param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double local_50;
  double local_8;
  
  if ((param_2 == 0) || (param_1 <= 0.0)) {
    local_8 = 0.0;
  }
  else if (param_2 == 1) {
    local_50 = param_1 * DAT_02323f60;
    if (220.0 <= local_50) {
      local_50 = 220.0;
    }
    local_8 = local_50;
  }
  else {
    iVar2 = 2;
    if (param_2 != 2 && param_2 != 4) {
      iVar2 = 3;
    }
    uVar3 = (ulong)iVar2;
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = ((param_2 + uVar3) - 1) / uVar3;
    }
    dVar5 = (double)NEON_ucvtf(uVar3);
    dVar4 = (double)NEON_ucvtf(uVar1);
    local_8 = (double)(uVar1 - 1) * 4.0 +
              (double)(long)((param_1 + (double)(uVar3 - 1) * -4.0) / dVar5) * dVar4;
  }
  return local_8;
}

