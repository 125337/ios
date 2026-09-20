// FUN_0037aadc @ 0037aadc

byte FUN_0037aadc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    FUN_003788e8(local_20,local_28);
    bVar1 = false;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar3 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (bVar1) {
      uVar2 = local_20;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

