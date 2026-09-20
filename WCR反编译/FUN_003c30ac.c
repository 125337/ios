// FUN_003c30ac @ 003c30ac

void FUN_003c30ac(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = DAT_028ca1d8 == (code *)0x0;
  local_20 = param_2;
  if (bVar1) {
    local_50 = 0;
  }
  else {
    local_50 = local_18;
    (*DAT_028ca1d8)(local_18,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_50;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  uVar2 = local_28;
  FUN_003c395c();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

