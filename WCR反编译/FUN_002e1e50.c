// FUN_002e1e50 @ 002e1e50

void FUN_002e1e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 **local_88;
  undefined8 **local_50;
  undefined8 **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  
  local_88 = &local_20;
  local_20 = (undefined8 ***)0x0;
  _objc_storeStrong(local_88,param_2);
  local_30 = param_1;
  local_28 = param_3;
  FUN_002e4604(param_1);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = (undefined8 ***)local_88 == (undefined8 ***)0x0;
  local_38 = local_88;
  if (bVar1) {
    local_50 = local_20;
    (*DAT_028c98d8)(local_30,local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_88;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

