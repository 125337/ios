// FUN_0069cce0 @ 0069cce0

void FUN_0069cce0(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  undefined *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = &cf_more_plugin_hub;
  _WCRPluginIconResolvedIcon(&cf_more_plugin_hub,&cf_WeChat_Lab_Logo_light_small);
  _objc_retainAutoreleasedReturnValue();
  local_20 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_20,&cf_WeChat_Lab_Logo_light_small);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_20;
  local_28 = puVar2;
  _WCRPluginIconValueIsAlbum();
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_20;
    FUN_0069d094();
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_20;
      FUN_0069d710(0x403c000000000000,local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar1 = local_20;
        FUN_0069d398();
        _objc_retainAutoreleasedReturnValue();
        local_48 = pcVar1;
        if (pcVar1 == (cfstringStruct *)0x0) {
          pcVar1 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x403c000000000000,PTR_WCRefinePluginIconCatalog_026ce4e0,
                     PTR_s_previewImageNamed_size_color__026a6580,local_20,local_28);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar1;
        }
        else {
          _WCRefineColorizePngForSvgRule(pcVar1,local_20);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar1;
        }
        local_2c = 1;
        _objc_storeStrong(&local_48,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_2c = 1;
        local_18 = pcVar1;
      }
      _objc_storeStrong(&local_40,0);
    }
    else {
      pcVar1 = local_20;
      FUN_0069d398();
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        pcVar3 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x403c000000000000,PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_resolvedDisplayImageForItemID_si_026a6578,&cf_more_plugin_hub);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_38;
        local_38 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar1 = local_38;
      _WCRefineColorizePngForSvgRule(local_38,&cf_WeChat_Lab_Logo_light_small);
      _objc_retainAutoreleasedReturnValue();
      local_2c = 1;
      local_18 = pcVar1;
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x403c000000000000,PTR_WCRefinePluginIconCatalog_026ce4e0,
               PTR_s_displayImageForIconValue_size_co_026a3cf8,local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_2c = 1;
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

