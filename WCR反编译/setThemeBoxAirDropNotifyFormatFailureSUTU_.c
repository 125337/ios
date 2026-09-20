// setThemeBoxAirDropNotifyFormatFailureSUTU: @ 0211cb90

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setThemeBoxAirDropNotifyFormatFailureSUTU_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  cfstringStruct *local_48;
  ID local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_48 = &::cf___;
  }
  else {
    local_48 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (local_48 == (cfstringStruct *)0x0) {
    FUN_0211cb84();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_30;
    local_30 = local_48;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_setObject_forKey__026ca9e8,local_30,
             &cf_themeBoxAirDropNotifyFormatFailureSUTU);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

