// FUN_006b08f4 @ 006b08f4

void FUN_006b08f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long local_88;
  long local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  local_40 = 0;
  local_38 = param_4;
  _objc_storeStrong(&local_40,param_5);
  lVar1 = local_20;
  FUN_006b2d70(local_20,local_30,local_38,local_40);
  if (lVar1 != 0x7fffffffffffffff) {
    local_88 = local_20;
    (*DAT_028cc010)(local_20,local_28,local_30,lVar1,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_88;
  }
  else {
    local_88 = 0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_88;
  if (lVar1 != 0x7fffffffffffffff) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

