// historyGroupTextForRecord: @ 01b20a74

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::historyGroupTextForRecord_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_d0;
  cfstringStruct *local_b8;
  cfstringStruct *local_a0;
  bool local_79;
  cfstringStruct *local_78;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionName);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  pcVar1 = local_38;
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_01b1fc40();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_61 = ((ulong)pcVar2 & 1) == 0;
      if (local_61) {
        local_b8 = (cfstringStruct *)0x0;
      }
      else {
        local_60 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      local_61 = !local_61;
      if (local_61) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_79 = ((ulong)pcVar2 & 1) == 0;
      if (local_79) {
        local_d0 = (cfstringStruct *)0x0;
      }
      else {
        local_78 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      local_79 = !local_79;
      if (local_79) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      if (((long)local_b8 < 1) && ((long)local_d0 < 1)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_eU__;
        local_3c = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__gw_J;
        local_3c = 1;
      }
    }
    else {
      pcVar2 = local_48;
      FUN_01b20ef4(pcVar1);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_a0 = local_48;
      }
      else {
        local_a0 = local_50;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_a0;
      local_3c = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

