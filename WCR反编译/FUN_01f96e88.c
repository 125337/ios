// FUN_01f96e88 @ 01f96e88

void FUN_01f96e88(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_d8;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  byte local_41;
  long local_40;
  int local_34;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar4 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar4;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_34 = 1;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isDirectory_026b0ba0);
    local_41 = 0;
    bVar1 = false;
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
      bVar1 = false;
      if (lVar4 != 0) {
        lVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        local_41 = 1;
        local_40 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = lVar4 == 0;
      }
    }
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (bVar1) {
      lVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_stringByAppendingPathExtension__026a4580,
                 *(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      lVar4 = local_30;
      local_30 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
    puVar7 = PTR_WCRefineVoicePackStore_026cea20;
    local_50 = (cfstringStruct *)0x0;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_absolutePath_026ae300);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_renameItemAtPath_toName_error__026c9ab0,uVar6,local_30,&local_58);
    _objc_storeStrong(&local_50,local_58);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    puVar2 = PTR_WCRefineHelper_026ce000;
    if (((ulong)puVar7 & 1) == 0) {
      pcVar8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = pcVar8;
      if (pcVar8 == (cfstringStruct *)0x0) {
        local_d8 = &cf__TT1Y_;
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,local_d8);
      (*(code *)PTR__objc_release_02578630)(pcVar8);
    }
    else {
      lVar4 = param_1 + 0x30;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      lVar4 = param_1 + 0x30;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      lVar4 = param_1 + 0x30;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___TT);
    }
    _objc_storeStrong(&local_50,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

