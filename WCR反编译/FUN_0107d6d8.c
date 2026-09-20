// FUN_0107d6d8 @ 0107d6d8

void FUN_0107d6d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_rootAbsolutePath_026ae1f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_preconvertSendableInDirectory__026ae240);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  DAT_028e3250 = 0;
  return;
}

