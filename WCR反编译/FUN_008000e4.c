// FUN_008000e4 @ 008000e4

void FUN_008000e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  FUN_00800158();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

