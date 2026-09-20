// setPluginTopDescriptionLine1Replacement: @ 02042800

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setPluginTopDescriptionLine1Replacement_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *local_48;
  ID local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  if (local_28 == (cfstringStruct *)0x0) {
    local_48 = &::cf___;
  }
  else {
    local_48 = local_28;
  }
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_setObject_forKey__026ca9e8,local_48,
             &cf_pluginTopDescriptionLine1Replacement);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

