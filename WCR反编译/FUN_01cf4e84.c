// FUN_01cf4e84 @ 01cf4e84

void FUN_01cf4e84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _WCRefineProfileBgHTMLWarehouseRootPath();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_01cf3f40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

