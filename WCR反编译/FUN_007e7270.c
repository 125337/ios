// FUN_007e7270 @ 007e7270

void FUN_007e7270(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_68;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_themeBoxNotificationEnabled_026a8540);
  if (((ulong)pcVar1 & 1) == 0) {
    local_30 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_themeBoxNotificationSessionID_026a8590);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = &cf_filehelper;
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_themeBoxCustomNotificationEnable_026a8598);
    if ((((ulong)pcVar1 & 1) != 0) &&
       (pcVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       pcVar1 != (cfstringStruct *)0x0)) {
      _objc_storeStrong(pcVar1,&local_40,local_38);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_18,
               local_40);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

