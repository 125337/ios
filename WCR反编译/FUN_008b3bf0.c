// FUN_008b3bf0 @ 008b3bf0

void FUN_008b3bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar1,param_3);
  FUN_008b4e10();
  if (((ulong)puVar1 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028cdfd8)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
  }
  else if ((DAT_028ce038 & 1) == 0) {
    FUN_008c0c98();
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = local_30;
      FUN_008b50d8();
      if ((uVar2 & 1) != 0) {
        uVar2 = local_30;
        FUN_008b69b4();
        if ((uVar2 & 1) != 0) {
          local_18 = 0;
          goto LAB_008b3da0;
        }
      }
      uVar3 = local_20;
      (*DAT_028cdfd8)(local_20,local_28,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
    }
    else {
      uVar3 = local_20;
      (*DAT_028cdfd8)(local_20,local_28,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar3;
    }
  }
  else {
    uVar3 = local_20;
    (*DAT_028cdfd8)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
  }
LAB_008b3da0:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

