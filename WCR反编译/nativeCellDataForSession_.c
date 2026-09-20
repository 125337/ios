// nativeCellDataForSession: @ 01a958a8

/* Function Stack Size: 0x18 bytes */

ID WCRefineGroupDataProvider::nativeCellDataForSession_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_a0;
  char *local_70;
  char *local_68;
  cfstringStruct *local_60;
  char *local_58;
  undefined4 local_4c;
  char *local_48;
  char *local_40;
  char *local_38;
  undefined8 local_30;
  SEL local_28;
  char *local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (char *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nativeSessionFromObject__026a2c00,local_30);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_usernameForNativeObject__026a2c08,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_20;
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nativeCellDataForUsername__026a2240,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "MainFrameCellData";
    _objc_getClass();
    pcVar3 = &cf_initWithSessionInfo_;
    local_58 = pcVar1;
    _NSSelectorFromString();
    local_60 = pcVar3;
    if (((local_38 == (char *)0x0) || (local_58 == (char *)0x0)) ||
       (pcVar1 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_58,PTR_s_instancesRespondToSelector__0269da90,pcVar3),
       ((ulong)pcVar1 & 1) == 0)) {
      local_18 = (char *)0x0;
      local_4c = 1;
    }
    else {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_fulfilledSessionForUsername_fall_026bda38,local_40,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        local_a0 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_a0;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_58;
      _objc_alloc();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,local_60,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_prepareNativeCellData_session_us_026bda30,local_70,local_68,local_40
                );
      pcVar1 = local_70;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_4c = 1;
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_prepareNativeCellData_session_us_026bda30,pcVar1,local_38,local_40);
    pcVar1 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_4c = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

