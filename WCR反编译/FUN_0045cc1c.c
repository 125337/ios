// FUN_0045cc1c @ 0045cc1c

void FUN_0045cc1c(double param_1,undefined8 param_2)

{
  double dVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  double local_118;
  cfstringStruct *local_b0;
  undefined *local_88;
  double local_80;
  undefined8 uStack_78;
  double local_70;
  undefined8 uStack_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  cfstringStruct *local_40;
  double local_38;
  undefined8 uStack_30;
  cfstringStruct *local_28;
  
  pcVar2 = &cf_other_local_emoticon_quickbar;
  local_38 = param_1;
  uStack_30 = param_2;
  _WCRPluginIconResolvedIcon(&cf_other_local_emoticon_quickbar,&cf_dt_icon);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_b0 = &cf_dt_icon;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_40;
  _WCRPluginIconValueIsAlbum();
  dVar1 = local_38;
  pcVar5 = local_40;
  pcVar2 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar2 = local_40;
    FUN_0045d3a4();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = uStack_30;
    local_70 = local_38;
    local_58 = pcVar2;
    FUN_004536d0(local_38,uStack_30);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      uStack_78 = uStack_30;
      local_80 = local_38;
      pcVar2 = &cf_icons_outlined_sticker;
      FUN_004536d0(local_38,uStack_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_60;
      local_60 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    if (local_60 == (cfstringStruct *)0x0) {
      local_118 = local_38 * 0.85;
      if (local_118 <= 14.0) {
        local_118 = 14.0;
      }
      puVar4 = PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640,
                 PTR_s_configurationWithPointSize_weigh_026ca588,4);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_88 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed_withConfigurati_026a3270,
                 &cf_face_smiling,puVar4);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_60;
      local_60 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      _objc_storeStrong(&local_88,0);
    }
    pcVar2 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_50 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  else {
    FUN_00453304();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar1,pcVar2,PTR_s_displayImageForIconValue_size_co_026a3cf8,pcVar5);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_50 = 1;
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

