// FUN_00435490 @ 00435490

void FUN_00435490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long local_88;
  ulong local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  uVar1 = local_48;
  FUN_00438174();
  if ((uVar1 & 1) == 0) {
    lVar2 = local_20;
    (*DAT_028ca920)(local_20,local_28,local_30,local_38,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar2;
  }
  else {
    if (local_40 == 0) {
      local_88 = *(long *)PTR____NSDictionary0___02578288;
    }
    else {
      local_88 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

