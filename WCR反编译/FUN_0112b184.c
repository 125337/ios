// FUN_0112b184 @ 0112b184

void FUN_0112b184(long param_1)

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
  return;
}

