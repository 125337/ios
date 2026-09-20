// FUN_008d7398 @ 008d7398

void FUN_008d7398(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [2];
  byte local_51;
  ulong local_50;
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
  puVar7 = local_38;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar7;
    local_48 = 1;
  }
  else {
    puVar3 = local_38;
    FUN_008d7fbc();
    puVar7 = local_38;
    if (((ulong)puVar3 & 1) == 0) {
      uVar4 = local_30;
      FUN_008d80cc();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_38;
      local_50 = uVar4;
      if (uVar4 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar7;
        local_48 = 1;
      }
      else {
        local_51 = 0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_IsVoiceMsg_0269f100);
        if ((uVar4 & 1) != 0) {
          uVar4 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_IsVoiceMsg_0269f100);
          local_51 = (byte)uVar4;
        }
        if ((local_51 & 1) == 0) {
          uVar4 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMessageType_0269d0a8);
          if ((uVar4 & 1) != 0) {
            uVar4 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_m_uiMessageType_0269d0a8);
            local_51 = (int)uVar4 == 0x22;
          }
        }
        puVar7 = local_38;
        if ((local_51 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = puVar7;
          local_48 = 1;
        }
        else {
          pcVar5 = &cf_lp_voice_pack_include;
          _WCRPluginIconResolvedTitle(&cf_lp_voice_pack_include,&cf__eQ);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = &cf_lp_voice_pack_include;
          local_68[0] = pcVar5;
          _WCRPluginIconResolvedIcon(&cf_lp_voice_pack_include,&cf_icons_filled_song);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = local_38;
          pcVar5 = local_68[0];
          local_70 = pcVar6;
          FUN_008d87f8(local_68[0],pcVar6,PTR_s_WCRefine_onLongPressVoicePackInc_026a9d00);
          _objc_retainAutoreleasedReturnValue();
          FUN_008d8394();
          _objc_retainAutoreleasedReturnValue();
          local_78 = puVar7;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          puVar7 = PTR_WCRefinePluginIconCatalog_026ce4e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefinePluginIconCatalog_026ce4e0,
                     PTR_s_applyLongPressOrderToMenuItems__026a9ac0,local_78);
          _objc_retainAutoreleasedReturnValue();
          local_48 = 1;
          local_28 = puVar7;
          _objc_storeStrong(&local_78);
          _objc_storeStrong(&local_70,0);
          _objc_storeStrong(local_68,0);
        }
      }
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar7;
      local_48 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

