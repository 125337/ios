// _WCRSuperFloatCustomizeAction @ 016208f0

void _WCRSuperFloatCustomizeAction(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_b0;
  undefined *local_58;
  undefined *local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  int local_2c;
  undefined *local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    _WCRSuperFloatRefreshActions();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_40 = 0;
    while( true ) {
      lVar4 = local_40;
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if ((long)uVar1 <= lVar4) break;
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar3 & 1) == 0) {
        local_2c = 4;
      }
      else {
        lVar4 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_20,&cf_title);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_20,
                     &cf__wcrCustomTitle);
        }
        puVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
        if (puVar5 != (undefined *)0x0) {
          puVar5 = PTR_WCRefinePluginIconCatalog_026ce4e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_normalizedAlbumIconValue__026aee98
                     ,local_28);
          _objc_retainAutoreleasedReturnValue();
          local_50 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
          if (puVar5 == (undefined *)0x0) {
            local_b0 = local_28;
          }
          else {
            local_b0 = local_50;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_58 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,&cf_icon);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,
                     &cf__wcrCustomIcon);
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf__wcrLocalIcon);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_storeStrong(&local_58);
          _objc_storeStrong(&local_50,0);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setObject_atIndexedSubscript__0269e970,local_48,local_40);
        local_2c = 2;
      }
      _objc_storeStrong(&local_48,0);
      if (local_2c == 2) break;
      local_40 = local_40 + 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_38);
    _WCRSuperFloatNotifySettingsChanged();
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

