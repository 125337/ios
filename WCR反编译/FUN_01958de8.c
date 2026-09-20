// FUN_01958de8 @ 01958de8

void FUN_01958de8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_68 = &cf_R1Y_;
    }
    else {
      local_68 = *(cfstringStruct **)(param_1 + 0x20);
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_68);
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR_WCRefineFakeLocationEngine_026ceb80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    puVar1 = PTR_WCRefineHelper_026ce000;
    lVar2 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_58 = &cf___;
    }
    else {
      local_58 = *(cfstringStruct **)(param_1 + 0x20);
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_58);
  }
  return;
}

