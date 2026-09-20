// FUN_01b7c098 @ 01b7c098

void FUN_01b7c098(long param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _WCRLongPressMenuItemIsCustom();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_setCustomIcon_forItemID__026bfbf0,&cf___
               ,*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_notifyLongPressMenuChanged_026aedf0);
  }
  else {
    pcVar2 = *(cfstringStruct **)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_objectForKeyedSubscript__0269d098,_kWCRefineLongPressCustomKindKey);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_48 = &cf_controller;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_48;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = &cf_icons_outlined_more_circle;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_miniprogram);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_url);
      if (((ulong)pcVar2 & 1) != 0) {
        _objc_storeStrong(&local_30,&cf_icons_outlined_link);
      }
    }
    else {
      _objc_storeStrong(&local_30,&cf_icons_outlined_miniprogram);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,
               PTR_s_customizeLongPressCustomItem_tit_026bfbe0,*(undefined8 *)(param_1 + 0x20),0,
               local_30);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

