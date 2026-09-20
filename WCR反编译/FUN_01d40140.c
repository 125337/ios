// FUN_01d40140 @ 01d40140

void FUN_01d40140(long param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_88;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  uint local_34;
  cfstringStruct *local_30;
  long local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_88 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_88;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineScheduledTask_026ce850;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_onceDateFromText__026af498,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar1 != (undefined *)0x0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    pcVar2 = local_30;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01d40378;
    local_48 = &DAT_02587458;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateTaskWithBlock__026c4598,&local_60);
    (*(code *)PTR__objc_release_02578630)(param_1);
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eg<h_eHe);
  }
  local_34 = (uint)(puVar1 == (undefined *)0x0);
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

