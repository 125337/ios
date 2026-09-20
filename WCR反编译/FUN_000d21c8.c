// FUN_000d21c8 @ 000d21c8

double FUN_000d21c8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                   undefined8 param_5)

{
  double local_90;
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
  FUN_000cba84(local_58);
  if ((0.5 < param_1) && (param_1 + 8.0 < local_40)) {
    local_90 = local_40 - param_1;
    if (local_90 <= 0.0) {
      local_90 = 0.0;
    }
    local_40 = local_90;
  }
  uStack_28 = uStack_48;
  local_30 = local_50;
  uStack_18 = uStack_38;
  local_20 = local_40;
  _objc_storeStrong(&local_58,0);
  return local_30;
}

