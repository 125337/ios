// FUN_01b8c6f4 @ 01b8c6f4

void FUN_01b8c6f4(long param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (*(long *)(param_1 + 0x20) == 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    pcVar2 = *(cfstringStruct **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_40 = &cf__Q1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_40);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  return;
}

