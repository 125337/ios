// _WCRSuperFloatSetActionUsesLocalIcon @ 01622668

void _WCRSuperFloatSetActionUsesLocalIcon(undefined8 param_1,byte param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  int local_20;
  byte local_19;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  local_19 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_20 = 1;
  }
  else {
    _WCRSuperFloatRefreshActions();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_30 = 0;
    while( true ) {
      lVar1 = local_30;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
      if ((long)uVar2 <= lVar1) break;
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar4 & 1) == 0) {
        local_20 = 4;
      }
      else {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrDefaultIcon);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        if (uVar2 == 0) {
          uVar3 = local_18;
          FUN_01622a44();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_40;
          local_40 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_removeObjectForKey__0269d700,&cf__wcrCustomIcon);
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_19 & 1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf__wcrLocalIcon);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        if (uVar2 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,&cf_icon);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setObject_atIndexedSubscript__0269e970,local_38,local_30);
        local_20 = 2;
        _objc_storeStrong(&local_40,0);
      }
      _objc_storeStrong(&local_38,0);
      if (local_20 == 2) break;
      local_30 = local_30 + 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_28);
    _WCRSuperFloatNotifySettingsChanged();
    _objc_storeStrong(&local_28,0);
    local_20 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

