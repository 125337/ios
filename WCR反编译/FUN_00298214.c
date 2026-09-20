// FUN_00298214 @ 00298214

void FUN_00298214(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  uint local_10c;
  undefined *local_d0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_2);
  puVar3 = local_30;
  local_51 = 0;
  local_61 = 0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_d0 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_d0;
  }
  else {
    local_d0 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
    local_51 = 1;
    local_50 = local_d0;
  }
  puVar3 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = (uint)puVar3;
  local_38 = local_d0;
  if ((local_61 & 1) != 0) {
    puVar3 = local_60;
    (*(code *)PTR__objc_release_02578630)();
    uVar1 = (uint)puVar3;
  }
  if ((local_51 & 1) != 0) {
    puVar3 = local_50;
    (*(code *)PTR__objc_release_02578630)();
    uVar1 = (uint)puVar3;
  }
  FUN_0028364c();
  if ((uVar1 & 1) != 0) {
    puVar3 = local_38;
    FUN_00298844(local_38,&cf_N_);
    if (((ulong)puVar3 & 1) == 0) {
      pcVar4 = &cf_N_;
      FUN_00298cc4(&cf_N_,&cf_icons_outlined_download,PTR_s_WCRefine_onFinderChatDownload__026a1620)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar4;
      if (pcVar4 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,pcVar4);
      }
      _objc_storeStrong(&local_70,0);
    }
  }
  local_79 = 0;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_10c = 0;
  if (((ulong)puVar2 & 1) != 0) {
    uVar5 = local_28;
    FUN_00298e7c();
    puVar2 = local_38;
    local_10c = 0;
    if ((uVar5 & 1) != 0) {
      pcVar4 = &cf_lp_media_to_voice;
      _WCRPluginIconResolvedTitle(&cf_lp_media_to_voice,&cf_l);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = pcVar4;
      FUN_00298844();
      local_10c = (uint)puVar2 ^ 1;
    }
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((local_10c & 1) != 0) {
    pcVar4 = &cf_lp_media_to_voice;
    _WCRPluginIconResolvedTitle(&cf_lp_media_to_voice,&cf_l);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = &cf_lp_media_to_voice;
    local_88 = pcVar4;
    _WCRPluginIconResolvedIcon(&cf_lp_media_to_voice,&cf_icons_outlined_voice_input);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_88;
    local_90 = pcVar6;
    FUN_00298cc4(local_88,pcVar6,PTR_s_WCRefine_onFinderChatToVoice__026a1628);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar4;
    if (pcVar4 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,pcVar4);
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
  }
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

