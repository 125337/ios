// FUN_01f7fb60 @ 01f7fb60

void FUN_01f7fb60(long param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_WCRefineVoicePackStore_026cea20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_togglePinnedRelativePath__026bfa30);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  pcVar1 = &cf__n_v;
  if (((ulong)puVar3 & 1) == 0) {
    pcVar1 = &cf__Smn_v;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

