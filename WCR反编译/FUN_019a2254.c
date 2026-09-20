// FUN_019a2254 @ 019a2254

void FUN_019a2254(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_88;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar3 = param_1 + 0x48;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_28 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_untrackOperationPath__026ba610);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  bVar1 = false;
  bVar2 = true;
  if (local_28 != 0) {
    uVar5 = *(ulong *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isCancelled_026a1c20);
    bVar2 = true;
    if ((uVar5 & 1) == 0) {
      local_30 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_activeOperationToken_026ba618);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      bVar2 = local_30 != *(long *)(param_1 + 0x28);
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (bVar2) {
    puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActiveOperationToken__026ba5e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActiveOperationToast__026ba5e8,0);
    pcVar6 = &cf__eQ1Y_;
    if (*(long *)(param_1 + 0x30) == 0) {
      pcVar6 = &cf_S_b;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,pcVar6,
               *(undefined8 *)(param_1 + 0x38));
    puVar7 = PTR_WCRefineHelper_026ce000;
    if (*(long *)(param_1 + 0x30) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_copyPickedMediaURL_preferredName_026ba6e0,
                 *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x40));
      puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    else {
      pcVar6 = *(cfstringStruct **)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_88 = &cf__eQ1Y_;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_showModernToast__0269ce78,local_88);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

