// FUN_01f6c0f8 @ 01f6c0f8

void FUN_01f6c0f8(long param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  long local_38;
  long local_30;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = param_1 + 0x28;
  local_30 = param_1;
  _objc_loadWeakRetained();
  local_38 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setSending__026c9840,0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if ((local_19 & 1) == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_68 = &cf_S1Y_;
    }
    else {
      local_68 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,local_68,
               *(undefined8 *)(param_1 + 0x20));
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_50 = &cf__S;
    }
    else {
      local_50 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,local_50,
               *(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackPickerViewController_026cea10,
               PTR_s_dismissAfterSendIfNeededFrom__026c9848,local_38);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

