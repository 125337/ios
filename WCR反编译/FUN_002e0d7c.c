// FUN_002e0d7c @ 002e0d7c

void FUN_002e0d7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 **local_98;
  undefined8 **local_58;
  undefined8 **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  
  local_98 = &local_20;
  local_20 = (undefined8 ***)0x0;
  _objc_storeStrong(local_98,param_3);
  local_38 = param_2;
  local_30 = param_1;
  local_28 = param_4;
  FUN_002e4604(param_1);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = (undefined8 ***)local_98 == (undefined8 ***)0x0;
  local_40 = local_98;
  if (bVar1) {
    local_58 = local_20;
    (*DAT_028c9898)(local_30,local_38,local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_98;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

