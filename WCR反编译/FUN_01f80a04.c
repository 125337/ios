// FUN_01f80a04 @ 01f80a04

void FUN_01f80a04(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_80;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar3 = PTR_WCRefineVoicePackStore_026cea20;
  local_30 = (cfstringStruct *)0x0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_absolutePath_026ae300);
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_renameItemAtPath_toName_error__026c9ab0,uVar2,local_20,&local_38);
  _objc_storeStrong(&local_30,local_38);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (((ulong)puVar3 & 1) == 0) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_80 = &cf__TT1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_80);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  else {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

