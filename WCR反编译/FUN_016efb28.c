// FUN_016efb28 @ 016efb28

void FUN_016efb28(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_resultLabel_026b32d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  return;
}

