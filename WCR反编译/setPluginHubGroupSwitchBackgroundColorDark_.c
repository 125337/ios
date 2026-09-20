// setPluginHubGroupSwitchBackgroundColorDark: @ 02044978

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setPluginHubGroupSwitchBackgroundColorDark_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_40;
  ID local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = local_28 != 0;
  if (bVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSKeyedArchiver_026ce750,PTR_s_archivedDataWithRootObject__026a4fa0
               ,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKey__026ca9e8,puVar3,
               &cf_pluginHubGroupSwitchBackgroundColorDark);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

