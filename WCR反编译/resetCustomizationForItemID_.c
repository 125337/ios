// resetCustomizationForItemID: @ 010fb6c0

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginIconCatalog::resetCustomizationForItemID_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined *local_60;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_pluginIconCustomTitles_026aed48);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_60 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dictionaryWithDictionary__026aadf0,local_60);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pluginIconCustomIcons_026aed50);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_78 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dictionaryWithDictionary__026aadf0,local_78);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectForKey__0269d700,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectForKey__0269d700,local_28);
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPluginIconCustomTitles__026aed68);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPluginIconCustomIcons__026aed70);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_hub_settings)
    ;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setPluginHubSettingsButtonIconNa_026aed78,&::cf___);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

