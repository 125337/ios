// FUN_0112ac64 @ 0112ac64

void FUN_0112ac64(long param_1)

{
  long lVar1;
  long lVar2;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeFromSuperview_026ca800);
  lVar1 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_containerView_026a6d08);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 == lVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_setContainerView__026a6d38,0);
  }
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                 *(undefined8 *)(param_1 + 0x30));
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  }
  return;
}

