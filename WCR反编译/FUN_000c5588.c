// FUN_000c5588 @ 000c5588

double FUN_000c5588(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double local_50 [3];
  double local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028c81e0)(local_20,local_28,local_30);
  local_50[0] = 0.0;
  uVar1 = local_30;
  local_38 = param_1;
  FUN_000c9a18(local_30,local_50);
  if (((uVar1 & 1) == 0) || (local_38 <= local_50[0])) {
    local_18 = local_38;
  }
  else {
    local_18 = local_50[0];
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

