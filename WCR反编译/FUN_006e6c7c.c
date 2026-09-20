// FUN_006e6c7c @ 006e6c7c

void FUN_006e6c7c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_invalidated_026a6d50);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_installIfNeeded_026a6d58);
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_containerView_026a6d08);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (lVar3 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_titleLabel_026caba0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_progressView_026a6d60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)((float)*(double *)(param_1 + 0x38));
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
  }
  return;
}

