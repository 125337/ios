// FUN_00778770 @ 00778770

void FUN_00778770(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_privateHideToast_026a7f90);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_performSelector__026ca7b8,
                 PTR_s_privateHideToast_026a7f90);
    }
  }
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (*(long *)(param_1 + 0x28) < 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eQ1Y_);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___eQ_nm);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  return;
}

