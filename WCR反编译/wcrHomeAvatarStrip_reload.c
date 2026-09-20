// wcrHomeAvatarStrip_reload @ 0034de54

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineHomeAvatarStripHook::wcrHomeAvatarStrip_reload
          (WCRefineHomeAvatarStripHook *this,ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 in_d0;
  cfstringStruct *local_2b0;
  cfstringStruct *local_2a8;
  cfstringStruct *local_2a0;
  cfstringStruct *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  cfstringStruct *local_258;
  ulong local_250;
  ulong local_248;
  ulong local_240;
  ulong local_238;
  ulong local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  undefined8 local_210;
  ulong local_208;
  cfstringStruct *local_200;
  ulong local_1f8;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  undefined8 local_1e0;
  ID local_1d8;
  cfstringStruct *local_1d0;
  undefined8 local_1c8;
  uint local_1bc;
  cfstringStruct *local_1b8;
  undefined1 *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined **local_158;
  undefined **local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  cfstringStruct *local_a8;
  ID local_a0;
  undefined *local_98;
  ID local_90;
  ID local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  ID local_58;
  SEL local_50;
  ID local_48;
  
  local_50 = param_2;
  local_48 = param_1;
  FUN_0034e734();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(local_a0);
  IVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_wcrHomeAvatarStrip_findMainTable_026a23a8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar1;
  if (IVar1 == 0) {
    local_5c = 1;
  }
  else {
    FUN_0034e7a8();
    if ((IVar1 & 1) == 0) {
      _objc_setAssociatedObject(local_48,&DAT_028ca002,0,3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_applyOnTableView_owner__026a23c8,
                 local_58,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_reloadData_0269e400);
      local_5c = 1;
    }
    else {
      pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameSpecialUserConfigs_0269e040);
      _objc_retainAutoreleasedReturnValue();
      local_158 = &PTR_s_displayNames_026ca000;
      local_168 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_150 = &PTR_s_avatarCornerChatPageBorderEnable_0269e000;
      local_170 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_160 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(local_170);
      (*(code *)PTR__objc_release_02578630)(local_168);
      local_70 = local_160;
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripItemMeta_026a2290);
      _objc_retainAutoreleasedReturnValue();
      local_140 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_148 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_138 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(local_148);
      (*(code *)PTR__objc_release_02578630)(local_140);
      local_78 = local_138;
      local_130 = PTR__OBJC_CLASS___NSString_026cdfe8;
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripSectionOffset_026a23d0);
      pcVar3 = local_68;
      local_128 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripRowCount_026a23d8);
      pcVar2 = local_68;
      local_120 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripPerRowCount_026a23e0);
      pcVar3 = local_68;
      local_118 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripSortMode_026a23e8);
      local_110 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripAvatarSize_026a23f0);
      local_108 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripItemSpacing_026a23f8);
      local_100 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripNameSpacing_026a2400);
      local_f8 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripTopSpacing_026a2408);
      local_f0 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripCardWidth_026a2410);
      local_e8 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripCardHeight_026a2418);
      local_e0 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripCornerRadius_026a2420);
      pcVar2 = local_68;
      local_d8 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripUsernames_026a2428);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar3 = local_68;
      local_c8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripShowUnread_026a2430);
      local_bc = (uint)pcVar3;
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_homeAvatarStripShowRemark_026a2438);
      local_b8 = (uint)pcVar2;
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_homeAvatarStripBackgroundEnabled_026a2440);
      local_b4 = (uint)pcVar2;
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_homeAvatarStripBackgroundUseMedi_026a2448);
      local_b0 = (uint)pcVar2;
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_avatarFrameChatListEnabled_0269def0);
      local_ac = (uint)pcVar2;
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_avatarFrameChatListPath_0269df10);
      _objc_retainAutoreleasedReturnValue();
      local_178 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_178 = &::cf___;
      }
      local_188 = local_178;
      pcVar3 = local_68;
      local_a8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_homeAvatarStripBackgroundMediaPa_026a2450);
      _objc_retainAutoreleasedReturnValue();
      local_190 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_190 = &::cf___;
      }
      local_1a0 = local_190;
      pcVar2 = local_68;
      local_180 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_homeAvatarStripBackgroundMediaPa_026a2458);
      _objc_retainAutoreleasedReturnValue();
      local_298 = local_110;
      local_2a0 = local_118;
      local_2a8 = local_120;
      local_2b0 = local_128;
      local_1a8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1a8 = &::cf___;
      }
      local_1d0 = local_1a8;
      local_198 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_avatarFrameChatListScale_0269df80);
      pcVar2 = local_68;
      local_1c8 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_avatarCornerEnabled_0269dfb8);
      local_1bc = (uint)pcVar2;
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_avatarCornerRadius_0269dfc0);
      pcVar3 = local_68;
      local_1b8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_avatarCornerBorderEnabled_0269dfc8);
      local_290 = local_108;
      local_288 = local_100;
      local_280 = local_f8;
      local_278 = local_f0;
      local_270 = local_e8;
      local_268 = local_e0;
      local_260 = local_d8;
      local_258 = local_c8;
      local_250 = (ulong)local_bc & 1;
      local_248 = (ulong)local_b8 & 1;
      local_240 = (ulong)local_b4 & 1;
      local_238 = (ulong)local_b0 & 1;
      local_230 = (ulong)local_ac & 1;
      local_228 = local_188;
      local_220 = local_1a0;
      local_218 = local_1d0;
      local_210 = local_1c8;
      local_208 = (ulong)local_1bc & 1;
      local_200 = local_1b8;
      local_1f8 = (ulong)pcVar3 & 1;
      local_1f0 = local_70;
      local_1e8 = local_78;
      puVar4 = local_130;
      local_1b0 = (undefined1 *)&local_2b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_stringWithFormat__0269cca8,
                 &
                 cf__ld__ld__ld__ld___0f___0f___0f___1f___0f___0f___0f__lu__d__d__d__d__d____________2f__d__ld__d__lu__lu
                );
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar4;
      (*(code *)PTR__objc_release_02578630)(local_198);
      (*(code *)PTR__objc_release_02578630)(local_180);
      (*(code *)PTR__objc_release_02578630)(local_a8);
      (*(code *)PTR__objc_release_02578630)(local_d0);
      IVar1 = local_48;
      _objc_getAssociatedObject(local_48,&DAT_028ca002);
      _objc_retainAutoreleasedReturnValue();
      local_88 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isEqualToString__0269ccc8,local_80);
      if ((IVar1 & 1) == 0) {
        _objc_setAssociatedObject(local_48,&DAT_028ca002,local_80,3);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_reloadData_0269e400);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_applyOnTableView_owner__026a23c8,
                 local_58,local_48);
      IVar1 = local_48;
      _objc_getAssociatedObject(local_48,&DAT_028ca003);
      _objc_retainAutoreleasedReturnValue();
      local_90 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = IVar1;
      (*(code *)PTR__objc_release_02578630)();
      if (local_1d8 != 0) {
        FUN_0034d324(local_90,local_58,local_48);
        FUN_0034e818(local_90);
      }
      puVar4 = PTR_WCRefineHomeTableHeaderHost_026ce570;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_stripSlotInTableView__026a23a0,
                 local_58);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar4;
      if (puVar4 != (undefined *)0x0) {
        FUN_0034e818(puVar4);
      }
      local_1e0 = 0;
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,local_1e0);
      _objc_storeStrong(&local_88,local_1e0);
      _objc_storeStrong(&local_80,local_1e0);
      _objc_storeStrong(&local_68,local_1e0);
      local_5c = 0;
    }
  }
  _objc_storeStrong(&local_58,0);
  return;
}

