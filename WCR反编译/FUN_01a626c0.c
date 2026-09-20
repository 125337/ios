// FUN_01a626c0 @ 01a626c0

void FUN_01a626c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  cfstringStruct *local_88;
  bool local_51;
  cfstringStruct *local_50;
  long local_48;
  undefined8 local_40;
  int local_34;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_01a08fe8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadTableData_0269dca8);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_eventAutoReplyRepositorySummaryL_026bb9a0,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_48 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      local_88 = &cf__yrbN__fe;
    }
    else {
      local_88 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__yrb__);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_88;
    }
    local_51 = lVar1 != 0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78,local_88);
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

