// FUN_002d4078 @ 002d4078

void FUN_002d4078(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  FUN_002bb194();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

