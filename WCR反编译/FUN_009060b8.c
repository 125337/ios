// FUN_009060b8 @ 009060b8

void FUN_009060b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,param_2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = *(undefined8 *)(param_3 + 0x30);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

