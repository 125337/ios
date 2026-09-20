// FUN_008d7858 @ 008d7858

void FUN_008d7858(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint local_c0;
  undefined *local_98;
  ulong local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  byte local_51;
  cfstringStruct *local_50;
  undefined4 local_48;
  undefined *local_38;
  ulong local_30;
  undefined *local_28;
  undefined **ppuVar2;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  ppuVar2 = &local_38;
  local_38 = (undefined *)0x0;
  _objc_storeStrong(ppuVar2,param_2);
  uVar1 = (uint)ppuVar2;
  FUN_008cec60();
  local_28 = local_38;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = 1;
    goto LAB_008d7f64;
  }
  local_51 = 0;
  puVar3 = local_38;
  FUN_008d7fbc();
  puVar5 = local_38;
  local_c0 = 1;
  if (((ulong)puVar3 & 1) == 0) {
    pcVar4 = &cf_lp_voice_pack_unzip;
    _WCRPluginIconResolvedTitle(&cf_lp_voice_pack_unzip,&cf_OS);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = pcVar4;
    FUN_008d8ac4();
    local_c0 = 1;
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = local_38;
      FUN_008d8ac4(local_38,&cf_OS);
      local_c0 = 1;
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = local_38;
        FUN_008d8ac4(local_38,&cf_S);
        local_c0 = 1;
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = local_38;
          FUN_008d8ac4(local_38,&cf_S0RS);
          local_c0 = (uint)puVar5;
        }
      }
    }
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  puVar5 = local_38;
  if ((local_c0 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar5;
    local_48 = 1;
    goto LAB_008d7f64;
  }
  uVar10 = local_30;
  FUN_008d80cc();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_38;
  local_60 = uVar10;
  if (uVar10 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar5;
    local_48 = 1;
  }
  else {
    FUN_008d90b4();
    _objc_retainAutoreleasedReturnValue();
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = (undefined *)0x0;
    puVar3 = PTR_WCRefineVoicePackStore_026cea20;
    local_68 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackStore_026cea20,PTR_s_isZipFileName__026a9d48,uVar10);
    puVar5 = PTR_WCRefineVoicePackStore_026cea20;
    if (((ulong)puVar3 & 1) == 0) {
      uVar10 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isSupportedAudioExtension__026a9d50);
      (*(code *)PTR__objc_release_02578630)(uVar10);
      if (((ulong)puVar5 & 1) != 0) {
        _objc_storeStrong(&local_70,&cf_lp_voice_pack_include);
        _objc_storeStrong(&local_78,&cf__eQ);
        _objc_storeStrong(&local_80,&cf_icons_filled_song);
        local_88 = PTR_s_WCRefine_onLongPressVoicePackInc_026a9d00;
      }
LAB_008d7cf8:
      puVar5 = local_38;
      if (local_88 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar5;
        local_48 = 1;
      }
      else {
        uVar7 = local_70;
        _WCRPluginIconResolvedTitle(local_70,local_78);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = local_70;
        _WCRPluginIconResolvedIcon(local_70,local_80);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar7;
        FUN_008d87f8(uVar7,uVar8,local_88);
        _objc_retainAutoreleasedReturnValue();
        FUN_008d8394();
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar5;
        (*(code *)PTR__objc_release_02578630)(uVar9);
        (*(code *)PTR__objc_release_02578630)(uVar8);
        (*(code *)PTR__objc_release_02578630)(uVar7);
        puVar5 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_applyLongPressOrderToMenuItems__026a9ac0,local_98);
        _objc_retainAutoreleasedReturnValue();
        local_48 = 1;
        local_28 = puVar5;
        _objc_storeStrong(&local_98,0);
      }
    }
    else {
      uVar6 = local_68;
      FUN_008d93d8();
      local_90 = uVar6;
      FUN_008d9744();
      puVar5 = local_38;
      uVar10 = uVar6 & 0xffffffff;
      if (((uVar6 & 1) == 0) || (uVar10 = 0, local_90 == 8)) {
        _objc_storeStrong(uVar10,&local_70,&cf_lp_voice_pack_unzip);
        _objc_storeStrong(&local_78,&cf_OS);
        _objc_storeStrong(&local_80,&cf_icons_outlined_folder);
        local_88 = PTR_s_WCRefine_onLongPressVoicePackUnz_026a9d08;
        goto LAB_008d7cf8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar5;
      local_48 = 1;
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_60,0);
LAB_008d7f64:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

