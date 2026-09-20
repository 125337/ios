// FUN_000c9e00 @ 000c9e00

double FUN_000c9e00(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   undefined8 param_5)

{
  double dVar1;
  double local_a8;
  undefined8 local_58;
  double local_50;
  undefined8 uStack_48;
  double local_40;
  undefined8 uStack_38;
  double local_30;
  undefined8 uStack_28;
  double local_20;
  undefined8 uStack_18;
  
  local_58 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  _objc_storeStrong(&local_58,param_5);
  FUN_000ca428(local_58);
  dVar1 = param_1;
  FUN_000ca528(local_58);
  if (((0.0 < param_1) || (0.0 < dVar1)) && (ABS(local_50 - param_1) < 0.5)) {
    local_a8 = local_50 - param_1;
    if (local_a8 <= 0.0) {
      local_a8 = 0.0;
    }
    local_50 = local_a8;
    local_40 = local_40 + param_1 + dVar1;
  }
  uStack_18 = uStack_38;
  uStack_28 = uStack_48;
  local_30 = local_50;
  local_20 = local_40;
  _objc_storeStrong(&local_58,0);
  return local_30;
}

