// FUN_01de41d0 @ 01de41d0

void FUN_01de41d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *local_60;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_notifySettingsChanged_026b9a80);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  local_60 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (lVar2 == 0) {
    local_60 = &cf__u7bb_nzz;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_stringWithFormat__0269cca8,&cf__OX_);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

