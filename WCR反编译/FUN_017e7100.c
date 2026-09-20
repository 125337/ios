// FUN_017e7100 @ 017e7100

void FUN_017e7100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  cfstringStruct *local_68;
  char *local_40;
  undefined4 local_34;
  long local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (lVar2 == 0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_68 = &cf_A;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showWeToastErrorWithText__0269ced8,local_68);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_34 = 1;
  }
  else {
    pcVar4 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_sQ,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R,
               *(undefined8 *)(param_1 + 0x28),PTR_s_copyPresetTestResult_026b5570);
    _objc_setAssociatedObject
              (*(undefined8 *)(param_1 + 0x28),PTR_s_copyPresetTestResult_026b5570,local_20,3);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

