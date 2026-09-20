// FUN_00fda6f0 @ 00fda6f0

void FUN_00fda6f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  FUN_00fd86b8();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

