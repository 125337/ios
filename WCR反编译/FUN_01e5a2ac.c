// FUN_01e5a2ac @ 01e5a2ac

void FUN_01e5a2ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wrapGeneration_026c69b8);
  if (lVar3 == lVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setWrapAnimating__026c69c8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x28),PTR_s_setFrame__026ca960);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_indicatorView_026c6920);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
  }
  return;
}

