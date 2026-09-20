// FUN_01bc0b90 @ 01bc0b90

void FUN_01bc0b90(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_148;
  cfstringStruct *local_128;
  cfstringStruct *local_108;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  bool local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  undefined *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  bool local_81;
  cfstringStruct *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  int local_44;
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  if (local_30 == (cfstringStruct *)0x0) {
    local_108 = &cf___;
  }
  else {
    local_108 = local_30;
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = local_108;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    local_44 = 1;
  }
  else {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0);
    local_61 = 0;
    local_71 = 0;
    local_81 = false;
    if (pcVar3 != (cfstringStruct *)0x2) {
      local_128 = &cf___;
    }
    else {
      local_128 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      local_60 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_whitespaceCharacterSet_0269d768);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_128;
    }
    local_81 = pcVar3 == (cfstringStruct *)0x2;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_128;
    if ((local_81 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    local_99 = 0;
    local_a9 = 0;
    local_b9 = false;
    if (pcVar3 != (cfstringStruct *)0x2) {
      local_148 = &cf___;
    }
    else {
      local_148 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      local_98 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_whitespaceCharacterSet_0269d768);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_148;
    }
    local_b9 = pcVar3 == (cfstringStruct *)0x2;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_148;
    if ((local_b9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_minuteOfDayFromTimeText__026ae5d0,local_58
              );
    if (((((long)puVar2 < 0) ||
         (puVar2 = PTR_WCRefineMessageSyncRule_026ce708,
         (*(code *)PTR__objc_msgSend_02578628)
                   (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_minuteOfDayFromTimeText__026ae5d0,
                    local_90), (long)puVar2 < 0)) ||
        (pcVar3 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
        pcVar3 == (cfstringStruct *)0x0)) ||
       (pcVar3 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0),
       pcVar3 == (cfstringStruct *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ek<h_eHe:yO);
      local_44 = 1;
    }
    else {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained();
      pcVar1 = local_58;
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_01bc12d4;
      local_d8 = &DAT_02587428;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar3 = local_90;
      local_d0 = pcVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateRuleWithBlock__026c0568,&local_f0);
      (*(code *)PTR__objc_release_02578630)(param_1);
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_d0,0);
      local_44 = 0;
    }
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  if (local_44 == 0) {
    local_44 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

