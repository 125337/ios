// FUN_007128d0 @ 007128d0

void FUN_007128d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_sharedProcessor_026a6d98);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

