// FUN_01f80d4c @ 01f80d4c

void FUN_01f80d4c(long param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_20;
    puVar3 = PTR_WCRefineVoicePackStore_026cea20;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_relativePath_026ac370);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setRepositoryCode_sendOrder_forR_026b0c88,lVar2,
               puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
    (*(code *)PTR__objc_release_02578630)(uVar5);
    pcVar1 = &cf____T;
    if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      pcVar1 = &cf____MR;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

