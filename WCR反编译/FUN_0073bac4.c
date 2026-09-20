// FUN_0073bac4 @ 0073bac4

void FUN_0073bac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 local_78;
  undefined8 local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  bVar1 = DAT_028cc590 == (code *)0x0;
  if (bVar1) {
    local_78 = 0;
  }
  else {
    local_78 = local_20;
    (*DAT_028cc590)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_78;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

