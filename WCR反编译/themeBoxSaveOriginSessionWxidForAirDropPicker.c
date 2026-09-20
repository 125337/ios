// themeBoxSaveOriginSessionWxidForAirDropPicker @ 00fa5e04

/* Function Stack Size: 0x10 bytes */

void WCRefineHelper::themeBoxSaveOriginSessionWxidForAirDropPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *local_40;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_themeBoxResolvedForegroundChatSe_026a7c00);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  if (local_28 == (cfstringStruct *)0x0) {
    local_40 = &::cf___;
  }
  else {
    local_40 = local_28;
  }
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setThemeBoxAirDropOriginSessionW_026ace60,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_saveConfig_0269e5d0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

