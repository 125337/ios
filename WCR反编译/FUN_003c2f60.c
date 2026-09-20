// FUN_003c2f60 @ 003c2f60

void FUN_003c2f60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = DAT_028ca1d0 == (code *)0x0;
  local_28 = param_4;
  local_24 = param_3;
  local_20 = param_2;
  if (bVar1) {
    local_60 = 0;
  }
  else {
    local_60 = local_18;
    (*DAT_028ca1d0)(local_18,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  uVar2 = local_30;
  FUN_003c3340();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

