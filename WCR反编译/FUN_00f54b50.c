// FUN_00f54b50 @ 00f54b50

void FUN_00f54b50(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined1 local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_19 = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_00f54fe8();
  if ((((uVar1 & 1) != 0) || (uVar1 = local_18, FUN_00f54cd4(), (uVar1 & 1) != 0)) ||
     (uVar1 = local_18, FUN_00f54ea4(), (uVar1 & 1) != 0)) {
    uVar1 = local_18;
    FUN_00f58b98(local_18,0xb4);
    _objc_retainAutoreleasedReturnValue();
    _WCRefineEnhancedAdBlockLog(&cf_urlredirect__dreason___url___);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

