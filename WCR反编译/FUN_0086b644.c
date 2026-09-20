// FUN_0086b644 @ 0086b644

void FUN_0086b644(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((DAT_028cd86f & 1) == 0) || (uVar1 = local_28, FUN_00889ee8(), (uVar1 & 1) == 0)) {
    (*DAT_028cd5a8)(local_18,local_20,local_28,param_4 & 1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

