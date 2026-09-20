// FUN_0018957c @ 0018957c

byte FUN_0018957c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0.0;
  local_48 = 0.0;
  local_50 = 0.0;
  local_58 = 0.0;
  local_60 = 0.0;
  local_68 = 0.0;
  local_70 = 0.0;
  local_78 = 0.0;
  uVar1 = local_20;
  local_38 = param_1;
  FUN_0018979c(local_20,local_30,&local_40,&local_48,&local_50,&local_58);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = local_28, FUN_0018979c(local_28,local_30,&local_60,&local_68,&local_70,&local_78),
     (uVar1 & 1) == 0)) {
    local_11 = false;
  }
  else {
    local_11 = false;
    if (((ABS(local_40 - local_60) <= local_38) &&
        (local_11 = false, ABS(local_48 - local_68) <= local_38)) &&
       (local_11 = false, ABS(local_50 - local_70) <= local_38)) {
      local_11 = ABS(local_58 - local_78) <= local_38;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

