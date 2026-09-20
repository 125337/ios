// FUN_008d5cfc @ 008d5cfc

/* WARNING: Removing unreachable block (ram,0x008d5ff4) */

void FUN_008d5cfc(double param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  double local_e8;
  undefined *local_98;
  double local_90;
  undefined8 uStack_88;
  double local_80;
  undefined8 uStack_78;
  double local_70;
  undefined8 uStack_68;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  double local_30;
  undefined8 uStack_28;
  
  pcVar1 = &cf_other_voice_pack_quickbar;
  local_30 = param_1;
  uStack_28 = param_2;
  _WCRPluginIconResolvedIcon(&cf_other_voice_pack_quickbar,&cf_icons_outlined_more_circle);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  FUN_008cfa58();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_WCRefinePluginIconCatalog_026ce4e0,
             PTR_s_displayImageForIconValue_size_co_026a3cf8,local_38,pcVar1);
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    uStack_68 = uStack_28;
    local_70 = local_30;
    pcVar1 = &cf_icons_outlined_more_circle;
    FUN_008cfe24(local_30,uStack_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58[0];
    local_58[0] = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_58[0] == (cfstringStruct *)0x0) {
      uStack_78 = uStack_28;
      local_80 = local_30;
      pcVar1 = &cf_dot_3_circle_regular;
      FUN_008cfe24(local_30,uStack_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58[0];
      local_58[0] = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_58[0] == (cfstringStruct *)0x0) {
      uStack_88 = uStack_28;
      local_90 = local_30;
      pcVar1 = &cf_icons_outlined_more;
      FUN_008cfe24(local_30,uStack_28);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58[0];
      local_58[0] = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_58[0] == (cfstringStruct *)0x0) {
      local_e8 = local_30 * 0.85;
      if (local_e8 <= 14.0) {
        local_e8 = 14.0;
      }
      puVar3 = PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR__OBJC_CLASS___UIImageSymbolConfiguration_026ce640,
                 PTR_s_configurationWithPointSize_weigh_026ca588,4);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_98 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed_withConfigurati_026a3270,
                 &cf_ellipsis_circle,puVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_58[0];
      local_58[0] = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _objc_storeStrong(&local_98,0);
    }
  }
  pcVar1 = local_58[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

