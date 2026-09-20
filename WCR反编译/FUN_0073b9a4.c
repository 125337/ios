// FUN_0073b9a4 @ 0073b9a4

void FUN_0073b9a4(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 local_68;
  undefined8 local_40;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = DAT_028cc588 == (code *)0x0;
  if (bVar1) {
    local_68 = 0;
  }
  else {
    local_68 = local_20;
    (*DAT_028cc588)(local_20,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_68;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

