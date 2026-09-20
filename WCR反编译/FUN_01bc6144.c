// FUN_01bc6144 @ 01bc6144

void FUN_01bc6144(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x3fe3333333333333;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar2 = 0x3ff0000000000000;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_cardView_026a5340);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

