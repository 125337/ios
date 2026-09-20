// FUN_0028e9e4 @ 0028e9e4

void FUN_0028e9e4(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined8 *puVar3;
  cfstringStruct *local_50;
  undefined8 *local_40;
  long local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_50 = &cf_N_1Y_;
  }
  else {
    local_50 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  lVar1 = DAT_028c9578;
  local_20 = local_50;
  if (DAT_028c9588 != 0) {
    FUN_00276c80(0,local_50,0);
    _objc_storeStrong(&DAT_028c9578);
    _objc_storeStrong(&DAT_028c9580,0);
    local_30 = 1;
    goto LAB_0028ec68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = lVar1;
  _objc_storeStrong(&DAT_028c9578);
  puVar3 = &DAT_028c9580;
  _objc_storeStrong(&DAT_028c9580,0);
  if (local_38 == 0) {
    FUN_0028cf78();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    if (puVar3 == (undefined8 *)0x0) {
LAB_0028ec1c:
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_20);
      local_30 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_respondsToSelector__026ca818,PTR_s_stopLoadingWithFailText__026a17e8);
      if (((ulong)puVar3 & 1) == 0) goto LAB_0028ec1c;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stopLoadingWithFailText__026a17e8,local_20);
      local_30 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,local_20,
               local_38);
    local_30 = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_0028ec68:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

