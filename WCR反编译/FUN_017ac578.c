// FUN_017ac578 @ 017ac578

void FUN_017ac578(void)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_78;
  uint local_70;
  uint local_68;
  byte local_43;
  byte local_42;
  byte local_41;
  undefined *local_40;
  undefined *local_38 [3];
  undefined *local_20;
  undefined *local_18;
  
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_objectForKey__0269e048,&cf_WCRentryShowInPlugin);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_18;
    local_20 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKey__0269e048,&cf_WCRentryShowInSetting);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_18;
    local_38[0] = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKey__0269e048,&cf_WCRentrySettingAutoFallback);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    if (local_20 == (undefined *)0x0) {
      local_68 = 0;
    }
    else {
      puVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_boolValue_026ca540);
      local_68 = (uint)puVar4;
    }
    uVar3 = (uint)puVar4;
    local_41 = (byte)local_68 & 1;
    if (local_38[0] == (undefined *)0x0) {
      local_70 = 0;
    }
    else {
      puVar4 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_boolValue_026ca540);
      uVar3 = (uint)puVar4;
      local_70 = uVar3;
    }
    local_42 = (byte)local_70 & 1;
    if (local_40 == (undefined *)0x0) {
      local_78 = 0;
    }
    else {
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_boolValue_026ca540);
      uVar3 = (uint)puVar4;
      local_78 = uVar3;
    }
    bVar2 = (byte)local_78 & 1;
    _WCRefinePluginHubEntryReachable();
    puVar4 = local_18;
    bVar1 = false;
    local_43 = bVar2;
    if ((uVar3 & 1) == 0) {
      DAT_028e4240 = 0;
      if ((local_20 == (undefined *)0x0) && (local_38[0] == (undefined *)0x0)) {
        local_41 = 0;
        local_42 = 1;
        local_43 = 1;
        bVar1 = true;
      }
      else if (((local_68 & 1) == 0) || ((local_70 & 1) != 0)) {
        if (((local_68 & 1) == 0) && ((local_70 & 1) == 0)) {
          local_42 = 1;
          bVar1 = true;
        }
      }
      else {
        local_41 = 0;
        local_42 = 1;
        local_43 = 1;
        bVar1 = true;
      }
    }
    else if (((local_20 == (undefined *)0x0) && (local_38[0] == (undefined *)0x0)) ||
            (((local_68 & 1) == 0 && ((local_70 & 1) == 0)))) {
      local_41 = 1;
      local_42 = 0;
      local_43 = 0;
      bVar1 = true;
    }
    else {
      bVar1 = (local_78 & 1) != 0;
      if (bVar1) {
        local_41 = 1;
        local_42 = 0;
        local_43 = 0;
      }
    }
    if ((bVar1) || (bVar2 != local_43)) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_41);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_setObject_forKey__026ca9e8,puVar5,&cf_WCRentryShowInPlugin);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = local_18;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_42);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_setObject_forKey__026ca9e8,puVar5,&cf_WCRentryShowInSetting);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar4 = local_18;
      if (local_43 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_removeObjectForKey__0269d700,&cf_WCRentrySettingAutoFallback);
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_setObject_forKey__026ca9e8,puVar5,&cf_WCRentrySettingAutoFallback);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_18);
    }
    if (((uVar3 & 1) != 0) && (local_41 != 0)) {
      FUN_017b7ab0();
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(local_38,0);
    _objc_storeStrong(&local_20,0);
    _objc_storeStrong(&local_18,0);
  }
  return;
}

