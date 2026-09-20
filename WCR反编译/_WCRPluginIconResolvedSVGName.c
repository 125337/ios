// _WCRPluginIconResolvedSVGName @ 010f50b8

void _WCRPluginIconResolvedSVGName(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_88;
  cfstringStruct *local_68;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_20;
  _WCRPluginIconResolvedIcon(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  _WCRPluginIconValueIsAlbum();
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    pcVar1 = local_30;
    if (pcVar2 == (cfstringStruct *)0x0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_88 = &cf___;
      }
      else {
        local_88 = local_28;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_88;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
  }
  else {
    pcVar2 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_defaultIconForItemID__026aece0,local_20)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar1 = local_38;
    if (pcVar2 == (cfstringStruct *)0x0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_68 = &cf___;
      }
      else {
        local_68 = local_28;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_68;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

