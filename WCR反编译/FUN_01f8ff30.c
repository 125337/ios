// FUN_01f8ff30 @ 01f8ff30

void FUN_01f8ff30(long param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  long local_38;
  long local_30;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = param_1 + 0x30;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setSending__026c9840,0);
  if ((local_19 & 1) == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_88 = &cf_S1Y_;
    }
    else {
      local_88 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,local_88,
               *(undefined8 *)(param_1 + 0x28));
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_relativePath_026ac370);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar1 = PTR_WCRefineVoicePackStore_026cea20;
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_relativePath_026ac370);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_pushRecentRelativePath__026c9838);
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    puVar1 = PTR_WCRefineHelper_026ce000;
    pcVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_70 = &cf__S;
    }
    else {
      local_70 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,local_70,
               *(undefined8 *)(param_1 + 0x28));
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

