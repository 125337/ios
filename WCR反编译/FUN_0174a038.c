// FUN_0174a038 @ 0174a038

void FUN_0174a038(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *local_58;
  ulong local_30;
  long local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (uVar1 < 4) {
    if (local_20 == (cfstringStruct *)0x0) {
      local_58 = &cf___;
    }
    else {
      local_58 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setThemeBoxDogModeWxids__026b4140,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_saveConfig_0269e5d0)
    ;
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

