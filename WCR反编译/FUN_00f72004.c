// FUN_00f72004 @ 00f72004

void FUN_00f72004(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_00f71f90();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _objc_sync_enter();
  FUN_00f71f90();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

