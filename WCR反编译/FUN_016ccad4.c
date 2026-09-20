// FUN_016ccad4 @ 016ccad4

void FUN_016ccad4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  
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
  if (*(long *)(param_1 + 0x28) == 0) {
    pcVar3 = *(cfstringStruct **)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_50 = &cf__eQ1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_50);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  else {
    FUN_016ccc60(*(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___eQ_Rv_uHe);
  }
  return;
}

