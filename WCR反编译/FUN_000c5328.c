// FUN_000c5328 @ 000c5328

double FUN_000c5328(double param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  double local_40;
  double local_18;
  
  (*DAT_028c81d0)(param_2,param_3);
  local_18 = param_1;
  if (((DAT_028c8258 < 1) &&
      (uVar1 = param_2, local_40 = param_1, FUN_000c6ff8(DAT_028c8258), (uVar1 & 1) != 0)) &&
     (FUN_000c7280(param_2), 0.5 < local_40)) {
    local_40 = param_1 - local_40;
    if (local_40 < 88.0) {
      local_40 = 88.0;
    }
    local_18 = local_40;
  }
  return local_18;
}

