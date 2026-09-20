// FUN_00888868 @ 00888868

void FUN_00888868(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  if (*(long *)(param_2 + 0x20) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_2 + 0x20),PTR_s_doubleValue_026ca608);
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_2 + 0x28),PTR_s_setAlpha__026ca860);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_2 + 0x30),PTR_s_doubleValue_026ca608);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)((float)(double)CONCAT44(uVar3,uVar2));
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

