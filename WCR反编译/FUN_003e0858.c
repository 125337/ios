// FUN_003e0858 @ 003e0858

void FUN_003e0858(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (*DAT_028ca340)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_003e42c0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

