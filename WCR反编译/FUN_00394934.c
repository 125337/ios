// FUN_00394934 @ 00394934

byte FUN_00394934(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_00394a74;
  }
  uVar1 = local_20;
  FUN_0037a830(local_20,&cf_isHidden);
  if ((uVar1 & 1) == 0) {
    FUN_003c556c(local_28);
    local_11 = 0;
    local_2c = 1;
    goto LAB_00394a74;
  }
  uVar1 = local_28;
  FUN_003668c8(local_28,0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if ((uVar1 == 0) || (uVar1 - local_20 == 0)) {
LAB_00394a44:
    FUN_003a6ea0(local_28);
    local_11 = 1;
  }
  else {
    FUN_0037a830(uVar1 - local_20,uVar1,&cf_isHidden);
    if ((uVar1 & 1) != 0) goto LAB_00394a44;
    FUN_003c556c(local_28);
    local_11 = 0;
  }
  local_2c = 1;
  _objc_storeStrong(&local_38,0);
LAB_00394a74:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

