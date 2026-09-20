// FUN_016a60a8 @ 016a60a8

void FUN_016a60a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  (*DAT_028e3dc8)(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_016bccd4();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_autoreleaseReturnValue(param_1);
  return;
}

