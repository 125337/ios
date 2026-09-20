// FUN_0174a880 @ 0174a880

void FUN_0174a880(long param_1)

{
  cfstringStruct *local_40;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (local_20 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  else {
    local_40 = local_20;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setThemeBoxSkipSenderWxids__026b4150,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_saveConfig_0269e5d0);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

