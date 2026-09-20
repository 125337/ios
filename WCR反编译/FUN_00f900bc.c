// FUN_00f900bc @ 00f900bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00f900bc(double param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 local_30;
  
  if (param_3 == 0) {
    local_30 = _DAT_0232c550;
  }
  else if ((param_3 == 1) || (param_1 <= 0.0)) {
    local_30 = *param_2;
  }
  else if (param_1 < 1.0) {
    uVar1 = (ulong)(param_1 * (double)(param_3 - 1));
    if (uVar1 < param_3 - 1U) {
      NEON_ucvtf(uVar1);
      local_30 = param_2[uVar1 * 4];
      FUN_00f8c2b4();
    }
    else {
      local_30 = param_2[(param_3 + -1) * 4];
    }
  }
  else {
    local_30 = param_2[(param_3 + -1) * 4];
  }
  return local_30;
}

