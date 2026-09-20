// FUN_006160f0 @ 006160f0

byte FUN_006160f0(undefined8 param_1,byte param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_a70;
  undefined *local_a68;
  cfstringStruct *local_9a8;
  byte local_970;
  byte local_968;
  byte local_950;
  byte local_8d0;
  uint local_8a8;
  byte local_878;
  byte local_850;
  byte local_834;
  byte local_7e0;
  uint local_7b8;
  byte local_780;
  byte local_740;
  byte local_6f0;
  uint local_6ac;
  byte local_4fc;
  undefined *local_488;
  undefined4 local_480;
  undefined4 local_47c;
  code *local_478;
  undefined *local_470;
  ulong local_468;
  ulong local_460;
  ulong local_458;
  char *local_450;
  undefined *local_448 [2];
  undefined1 local_431;
  undefined1 auStack_430 [8];
  long local_428;
  long *local_420;
  undefined8 local_3f0;
  undefined *local_3e8;
  byte local_3d9;
  char *local_3d8;
  char *local_3d0;
  char *local_3c8;
  undefined *local_3c0;
  char *local_3b8;
  char *local_3b0;
  char *local_3a8;
  char *local_3a0;
  byte local_391;
  cfstringStruct *local_390;
  cfstringStruct *local_388;
  byte local_379;
  cfstringStruct *local_378;
  byte local_369;
  cfstringStruct *local_368;
  byte local_359;
  cfstringStruct *local_358;
  byte local_349;
  cfstringStruct *local_348;
  cfstringStruct *local_340;
  undefined *local_338 [2];
  undefined1 local_321;
  char *local_320;
  byte local_311;
  undefined *local_310;
  byte local_301;
  char *local_300 [2];
  undefined *local_2f0;
  byte local_2e1;
  undefined *local_2e0;
  undefined *local_2d8;
  byte local_2ca;
  byte local_2c9;
  char *local_2c8 [2];
  undefined *local_2b8;
  byte local_2aa;
  byte local_2a9;
  char *local_2a8;
  byte local_299;
  undefined *local_298;
  byte local_289;
  char *local_288 [2];
  undefined *local_278;
  byte local_26a;
  byte local_269;
  char *local_268 [2];
  undefined *local_258;
  byte local_24a;
  byte local_249;
  char *local_248;
  char *local_240;
  char *local_238;
  char *local_230 [2];
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  byte local_206;
  byte local_205;
  byte local_204;
  byte local_203;
  byte local_202;
  byte local_201;
  undefined *local_200;
  char *local_1f8;
  char *local_1f0 [2];
  byte local_1d9;
  undefined *local_1d0;
  byte local_1c1;
  byte local_1b5;
  byte local_1b4;
  byte local_1b3;
  byte local_1b2;
  byte local_1b1;
  undefined *local_1b0;
  byte local_1a2;
  byte local_1a1;
  undefined *local_1a0;
  ulong local_198;
  ulong local_190;
  undefined4 local_188;
  ulong local_178;
  byte local_169;
  ulong local_168;
  byte local_15d;
  ulong local_150 [6];
  uint local_11c;
  char local_118;
  uint local_110;
  byte local_109;
  ulong local_108;
  uint local_fc;
  ulong *local_f8;
  ulong local_f0;
  uint local_e4;
  ulong *local_e0;
  bool local_d1;
  code *local_d0;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  ulong *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = 0;
  _objc_storeStrong(&local_168,param_1);
  uVar2 = local_168;
  local_169 = param_2;
  FUN_00619b10();
  _objc_retainAutoreleasedReturnValue();
  local_178 = uVar2;
  if (uVar2 == 0) {
    local_15d = 0;
    local_188 = 1;
  }
  else {
    FUN_00616084(uVar2);
    FUN_0061a05c(local_168,local_178);
    local_190 = 0;
    uVar2 = local_168;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_respondsToSelector__026ca818,PTR_s_m_chatRoomContact_0269e730);
    if ((uVar2 & 1) != 0) {
      uVar9 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_m_chatRoomContact_0269e730);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_190;
      local_190 = uVar9;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_198 = 0;
    if ((local_190 != 0) &&
       (uVar2 = local_190,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_190,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
       (uVar2 & 1) != 0)) {
      uVar9 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_198;
      local_198 = uVar9;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_198;
    (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_15d = 0;
      local_188 = 1;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_navigationShowGroupID_026a5fc8);
      local_1a1 = (byte)puVar3;
      local_1a2 = 1;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_navigationAvatarBlacklist_026a0ad8);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar3;
      if ((puVar3 != (undefined *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsObject__0269cbb8,local_198),
         ((ulong)puVar3 & 1) != 0)) {
        local_1a2 = 0;
      }
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_navigationShowAvatar_026a0ac0);
      local_1b1 = (byte)puVar3;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_navigationShowAvatarTQQ_026a0ac8);
      local_1b2 = (byte)puVar3;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_navigationShowInGroup_026a5fd0);
      local_1b3 = (byte)puVar3;
      if (((local_1b1 & 1) != 0) || (local_4fc = 0, (local_1b2 & 1) != 0)) {
        local_4fc = local_1b3;
      }
      local_1b4 = local_4fc & 1;
      local_1b5 = 0;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_customAvatarFeatureEnabled_026a0958);
      local_1b5 = (byte)puVar3;
      local_1c1 = 0;
      if (((ulong)puVar3 & 1) != 0) {
        local_1d0 = (undefined *)0x0;
        puVar4 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_customAvatarGroupEnabledIDs_026a09d0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_1d0;
        local_1d0 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_1d0;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((((ulong)puVar3 & 1) != 0) &&
           (puVar3 = local_1d0,
           (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_containsObject__0269cbb8,local_198)
           , ((ulong)puVar3 & 1) != 0)) {
          local_1c1 = 1;
        }
        _objc_storeStrong(&local_1d0,0);
      }
      local_1d9 = 0;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_chatAvatarProfileCardProfilePage_026a0a90);
      local_1d9 = (byte)puVar3;
      if (DAT_028cb990 == (char *)0x0) {
        pcVar5 = "WCTableViewSectionManager";
        _objc_getClass();
        DAT_028cb990 = pcVar5;
      }
      pcVar5 = DAT_028cb990;
      _objc_retainAutoreleaseReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_defaultSection_026a5fd8);
      _objc_retainAutoreleasedReturnValue();
      local_1f0[0] = pcVar5;
      if ((local_1a1 & 1) != 0) {
        pcVar5 = "WCTableViewCellManager";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_normalCellForSel_target_title_ri_026a0a88,PTR_s_copyGroupID_026a5e60
                   ,local_168,&cf__JI,local_198,0);
        _objc_retainAutoreleasedReturnValue();
        local_1f8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(&local_1f8,0);
      }
      if ((local_1d9 & 1) != 0) {
        puVar3 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                   PTR_s_viewGroupChatProfileCard_026a5e70,local_168,&cf_gw_JDeaS,&cf___,1);
        _objc_retainAutoreleasedReturnValue();
        local_200 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,puVar3);
        _objc_storeStrong(&local_200,0);
      }
      local_201 = 0;
      local_202 = 0;
      local_203 = 0;
      local_204 = 0;
      local_205 = 0;
      local_206 = 0;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_repeatChatIndentEnabled_0269e7a8);
      if (((ulong)puVar3 & 1) != 0) {
        local_201 = 1;
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_repeatChatIndentSessionOverrides_0269e7d0);
        _objc_retainAutoreleasedReturnValue();
        local_210 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_objectForKeyedSubscript__0269d098,local_198);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        puVar6 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_204 = (byte)puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_210,0);
      }
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_repeatChatSinkEnabled_0269e7f0);
      if (((ulong)puVar3 & 1) != 0) {
        local_202 = 1;
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_repeatChatSinkSessionOverrides_0269e818);
        _objc_retainAutoreleasedReturnValue();
        local_218 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_objectForKeyedSubscript__0269d098,local_198);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        puVar6 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_205 = (byte)puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_218,0);
      }
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_repeatChatLiftEnabled_0269e7f8);
      if (((ulong)puVar3 & 1) != 0) {
        local_203 = 1;
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_repeatChatLiftSessionOverrides_0269e848);
        _objc_retainAutoreleasedReturnValue();
        local_220 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_objectForKeyedSubscript__0269d098,local_198);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        puVar6 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_206 = (byte)puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_220,0);
      }
      if ((local_201 & 1) != 0) {
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleSessionChatIndentOverride__026a09a0,local_168,&cf_n_J_Y__<P,
                   local_204 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_230[0] = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(local_230,0);
      }
      if ((local_202 & 1) != 0) {
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleSessionChatSinkOverride__026a09a8,local_168,&cf_n_J_YNl<P,
                   local_205 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_238 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(&local_238,0);
      }
      if ((local_203 & 1) != 0) {
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleSessionChatLiftOverride__026a09b0,local_168,&cf_n_J_YNnm<P,
                   local_206 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_240 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(&local_240,0);
      }
      if ((local_1b5 & 1) != 0) {
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleCustomGroupAvatar__026a09c0,local_168,&cf__IN_J4YP,local_1c1 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_248 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(&local_248,0);
      }
      local_249 = 0;
      local_24a = 0;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_messageBlockEnabled_026a0af0);
      local_249 = (byte)puVar3;
      if (((ulong)puVar3 & 1) != 0) {
        local_108 = 0;
        _objc_storeStrong(&local_108,&cf_message_block);
        local_109 = 0;
        local_110 = 0xc91a47b2;
        _memset(local_150,0,0x40);
        uVar2 = local_108;
        FUN_01139098(local_108,local_109 & 1,local_110,local_150);
        bVar1 = false;
        if ((uVar2 & 1) != 0) {
          local_f8 = local_150;
          local_fc = local_110;
          local_e4 = local_110;
          local_e0 = local_f8;
          if (((local_f8 == (ulong *)0x0) || (local_118 == '\0')) || (local_11c != local_110)) {
            local_d1 = false;
          }
          else {
            FUN_00a59890(0);
            local_f0 = uVar2;
            if (((local_e0[5] == uVar2) && (uVar9 = local_e0[2], FUN_00a4ec00(), uVar9 == uVar2)) &&
               (uVar9 = local_e0[3], FUN_01138c10(), uVar9 == uVar2)) {
              if (((char)local_e0[7] == '\x03') && (local_e0[5] == 0)) {
                local_d1 = false;
              }
              else if ((local_e0[4] == 0) ||
                      ((local_e0[4] + 1 == 0 ||
                       (_mach_continuous_time(local_e0[4] + 1), uVar2 < local_e0[4])))) {
                local_b8 = local_e0;
                local_bc = local_e4;
                if (local_e0 == (ulong *)0x0) {
                  local_b0 = 0;
                }
                else {
                  local_c0 = local_e4 & 0x1f;
                  if (local_c0 == 0) {
                    local_6ac = (uint)local_e0[6];
                  }
                  else {
                    local_6ac = (int)local_e0[6] << (ulong)local_c0 |
                                (uint)local_e0[6] >> (ulong)(0x20 - local_c0 & 0x1f);
                  }
                  local_c4 = local_6ac;
                  local_d0 = FUN_009dea6c;
                  local_b0 = (ulong)local_6ac ^ 0xc3a5f77e905041d1 ^ (ulong)local_e4 << 1 ^
                             local_e0[5] ^ local_e0[2] ^ local_e0[3] << 7 ^ local_e0[4] >> 0xb ^
                             (ulong)(byte)local_e0[7] << 0x35 ^
                             (ulong)*(byte *)((long)local_e0 + 0x39) << 0x2d ^ 0x9dea6c;
                }
                local_d1 = (*local_e0 ^ local_e0[1]) == local_b0;
              }
              else {
                local_d1 = false;
              }
            }
            else {
              local_d1 = false;
            }
          }
          bVar1 = false;
          if (local_d1 != false) {
            bVar1 = (char)local_f8[7] == '\x03';
          }
        }
        _objc_storeStrong(&local_108,0);
        local_249 = bVar1;
      }
      if ((local_249 & 1) != 0) {
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_messageBlockGroupRuleBlocksGroup_026a41b8,local_198);
        local_249 = ((byte)puVar3 ^ 1) & 1;
      }
      if ((local_249 & 1) != 0) {
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_messageBlockGroupEnabledIDs_026a41c0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_258 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_6f0 = 0;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = local_258;
          (*(code *)PTR__objc_msgSend_02578628)(local_258,PTR_s_containsObject__0269cbb8,local_198);
          local_6f0 = (byte)puVar3;
        }
        local_24a = local_6f0 & 1;
        _objc_storeStrong(&local_258,0);
      }
      if ((local_249 & 1) != 0) {
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleMessageBlockGroup__026a4190,local_168,&cf__T_umo_O__,local_24a & 1);
        _objc_retainAutoreleasedReturnValue();
        local_268[0] = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(local_268,0);
      }
      local_269 = 0;
      local_26a = 0;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_autoParseLinkEnabled_0269dbc8);
      local_269 = (byte)puVar3;
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_autoParseLinkGroupEnabledIDs_0269dbe0)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_278 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_740 = 0;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = local_278;
          (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_containsObject__0269cbb8,local_198);
          local_740 = (byte)puVar3;
        }
        local_26a = local_740 & 1;
        _objc_storeStrong(&local_278,0);
      }
      if ((local_269 & 1) != 0) {
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleAutoParseLinkGroup__0269db38,local_168,&cf_RgZSO,local_26a & 1);
        _objc_retainAutoreleasedReturnValue();
        local_288[0] = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        if ((local_26a & 1) != 0) {
          local_299 = 0;
          puVar3 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_autoParseLinkGroupOutgoingAutoID_0269dbd0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_780 = 0;
          if (((ulong)puVar6 & 1) != 0) {
            puVar4 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a0,PTR_s_autoParseLinkGroupOutgoingAutoID_0269dbd0);
            _objc_retainAutoreleasedReturnValue();
            local_299 = 1;
            local_298 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_780 = (byte)puVar4;
          }
          if ((local_299 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_298);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_289 = local_780 & 1;
          if (DAT_028cb998 == (char *)0x0) {
            pcVar5 = "WCTableViewNormalCellManager";
            _objc_getClass();
            DAT_028cb998 = pcVar5;
          }
          pcVar5 = DAT_028cb998;
          _objc_retainAutoreleaseReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                     PTR_s_toggleAutoParseLinkOutgoingGroup_0269db40,local_168,&cf__S_NRg,
                     local_289 & 1);
          _objc_retainAutoreleasedReturnValue();
          local_2a8 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
          _objc_storeStrong(&local_2a8,0);
        }
        _objc_storeStrong(local_288,0);
      }
      local_2a9 = 0;
      local_2aa = 0;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_keywordAutoReplyEnabled_026a0b18);
      local_7b8 = 0;
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_keywordAutoReplySessionGateEnabl_026a0b20);
        local_7b8 = 0;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a0,PTR_s_keywordAutoReplyGroupMessagesEna_026a35e0);
          local_7b8 = (uint)puVar3;
        }
      }
      local_2a9 = (byte)local_7b8 & 1;
      if ((local_7b8 & 1) != 0) {
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_keywordAutoReplySelectedGroups_026a35e8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_2b8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_7e0 = 0;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = local_2b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2b8,PTR_s_containsObject__0269cbb8,local_198);
          local_7e0 = (byte)puVar3;
        }
        local_2aa = local_7e0 & 1;
        _objc_storeStrong(&local_2b8,0);
      }
      if ((local_2a9 & 1) != 0) {
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleKeywordAutoReplyGroup__026a35d0,local_168,&cf_sQ_VY_,local_2aa & 1);
        _objc_retainAutoreleasedReturnValue();
        local_2c8[0] = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(local_2c8,0);
      }
      local_2c9 = 0;
      local_2ca = 0;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_redEnvelopAutoReceiveEnable_026a0ae0);
      local_2c9 = (byte)puVar3;
      if ((((ulong)puVar3 & 1) != 0) &&
         (uVar2 = local_198, (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_length_0269cca0),
         uVar2 != 0)) {
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_redEnvelopRedRule_026a5fe0);
        puVar4 = local_1a0;
        local_2d8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_redEnvelopRedBlackList_026a5fe8);
        _objc_retainAutoreleasedReturnValue();
        local_2e1 = 0;
        local_2e0 = puVar4;
        if (local_2d8 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
          local_834 = 1;
          local_850 = local_834;
          if (puVar4 != (undefined *)0x0) {
            puVar3 = local_2e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2e0,PTR_s_containsObject__0269cbb8,local_198);
            local_850 = (byte)puVar3 ^ 1;
          }
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          local_850 = 0;
          if (((ulong)puVar4 & 1) != 0) {
            puVar3 = local_2e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2e0,PTR_s_containsObject__0269cbb8,local_198);
            local_850 = (byte)puVar3;
          }
        }
        local_2e1 = local_850 & 1;
        if (local_2e1 == 0) {
          puVar3 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_redEnvelopSkipGroupList_026a5ff0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_2f0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_878 = 0;
          if (((ulong)puVar3 & 1) != 0) {
            puVar3 = local_2f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2f0,PTR_s_containsObject__0269cbb8,local_198);
            local_878 = (byte)puVar3;
          }
          local_2ca = local_878 & 1;
          _objc_storeStrong(&local_2f0,0);
        }
        else {
          local_2c9 = 0;
        }
        _objc_storeStrong(&local_2e0,0);
      }
      if ((local_2c9 & 1) != 0) {
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleRedEnvelopSkipGroup__026a5e40,local_168,&cf_Nbdk__S,local_2ca & 1);
        _objc_retainAutoreleasedReturnValue();
        local_300[0] = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(local_300,0);
      }
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_autoAcceptTransferEnabled_0269d668);
      local_8a8 = 0;
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_autoAcceptTransferProfileControl_0269d698);
        local_8a8 = (uint)puVar3;
      }
      local_301 = (byte)local_8a8 & 1;
      if ((local_8a8 & 1) != 0) {
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_autoAcceptTransferAllowedGroupLi_0269d6a0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_310 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_8d0 = 0;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = local_310;
          (*(code *)PTR__objc_msgSend_02578628)(local_310,PTR_s_containsObject__0269cbb8,local_198);
          local_8d0 = (byte)puVar3;
        }
        local_311 = local_8d0 & 1;
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleAutoAcceptTransferGroup__026a5e48,local_168,&cf_Rc6edk_l_,
                   local_311 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_320 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(&local_320);
        _objc_storeStrong(&local_310,0);
      }
      local_321 = 0;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_sessionStatsEnabled_026a0b38);
      local_321 = SUB81(puVar3,0);
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                   PTR_s_wcrOpenSessionStats_026a0998,local_168,&cf_gwO_,&cf___,1);
        _objc_retainAutoreleasedReturnValue();
        local_338[0] = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,puVar3);
        _objc_storeStrong(local_338,0);
      }
      pcVar7 = (cfstringStruct *)PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_340 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_profileSessionSettingsEnabled_026a0b50);
      if ((((ulong)pcVar7 & 1) != 0) &&
         ((pcVar7 = local_340,
          (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_chatAgentEnabled_0269ce88),
          ((ulong)pcVar7 & 1) != 0 ||
          (pcVar7 = local_340,
          (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_chatAgentReplyAll_0269ce80),
          ((ulong)pcVar7 & 1) != 0)))) {
        pcVar7 = local_340;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_340,PTR_s_sessionOptionsForID__026a0b58,local_198);
        _objc_retainAutoreleasedReturnValue();
        local_359 = 0;
        local_369 = 0;
        local_379 = 0;
        local_348 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar7,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionAutoReplyEnabled);
        _objc_retainAutoreleasedReturnValue();
        if (pcVar7 == (cfstringStruct *)0x0) {
          pcVar8 = local_348;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_348,PTR_s_objectForKeyedSubscript__0269d098,
                     _WCRAISessionConversationEnabled);
          _objc_retainAutoreleasedReturnValue();
          local_369 = 1;
          local_368 = pcVar8;
          if (pcVar8 == (cfstringStruct *)0x0) {
            pcVar8 = local_340;
            (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_chatAgentEnabled_0269ce88);
            local_970 = 1;
            if (((ulong)pcVar8 & 1) == 0) {
              pcVar8 = local_340;
              (*(code *)PTR__objc_msgSend_02578628)(local_340,PTR_s_chatAgentReplyAll_0269ce80);
              local_970 = (byte)pcVar8;
            }
            local_968 = local_970;
          }
          else {
            pcVar8 = local_348;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_348,PTR_s_objectForKeyedSubscript__0269d098,
                       _WCRAISessionConversationEnabled);
            _objc_retainAutoreleasedReturnValue();
            local_379 = 1;
            local_378 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_968 = (byte)pcVar8;
          }
          local_950 = local_968;
        }
        else {
          pcVar8 = local_348;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_348,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionAutoReplyEnabled
                    );
          _objc_retainAutoreleasedReturnValue();
          local_359 = 1;
          local_358 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_950 = (byte)pcVar8;
        }
        if ((local_379 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_378);
        }
        if ((local_369 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_368);
        }
        if ((local_359 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_358);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        local_349 = local_950 & 1;
        local_391 = 0;
        pcVar7 = local_348;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_348,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionPreset);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar8 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)pcVar8 & 1) == 0) {
          local_9a8 = &cf___;
        }
        else {
          local_9a8 = local_348;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_348,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionPreset);
          _objc_retainAutoreleasedReturnValue();
          local_391 = 1;
          local_390 = local_9a8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_388 = local_9a8;
        if ((local_391 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_390);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_wcr_aiToggleConversation__0269d048,local_168,&cf__T_u,local_349 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_3a0 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        pcVar5 = "WCTableViewCellManager";
        _objc_getClass();
        uVar2 = local_168;
        puVar3 = PTR_s_wcr_aiOpenSessionSettings_0269d058;
        pcVar8 = local_388;
        (*(code *)PTR__objc_msgSend_02578628)(local_388,PTR_s_length_0269cca0);
        pcVar7 = &cf__USrn_;
        if (pcVar8 == (cfstringStruct *)0x0) {
          pcVar7 = &cf_hQ__;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_normalCellForSel_target_title_ri_026a0a88,puVar3,uVar2,&cf_A,pcVar7,
                   0);
        _objc_retainAutoreleasedReturnValue();
        local_3a8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(&local_3a8);
        _objc_storeStrong(&local_3a0,0);
        _objc_storeStrong(&local_388,0);
        _objc_storeStrong(&local_348,0);
      }
      if ((local_1b4 & 1) != 0) {
        if (DAT_028cb998 == (char *)0x0) {
          pcVar5 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028cb998 = pcVar5;
        }
        pcVar5 = DAT_028cb998;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleAvatarForGroup__026a5e38,local_168,&cf_y_uvh4YP>f_y,
                   (local_1a2 ^ 1) & 1);
        _objc_retainAutoreleasedReturnValue();
        local_3b0 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,pcVar5);
        _objc_storeStrong(&local_3b0,0);
      }
      local_3b8 = (char *)0x0;
      pcVar5 = local_1f0[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f0[0],PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar5 = local_1f0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_getCellCount_026a0b78);
        local_3b8 = pcVar5;
      }
      if ((((char *)0x1 < local_3b8) &&
          (pcVar5 = local_1f0[0],
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1f0[0],PTR_s_respondsToSelector__026ca818,PTR_s_getCellAt__026a0b80),
          ((ulong)pcVar5 & 1) != 0)) &&
         (pcVar5 = local_1f0[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_1f0[0],PTR_s_respondsToSelector__026ca818,PTR_s_removeCellAt__026a0b88),
         ((ulong)pcVar5 & 1) != 0)) {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_3c0 = puVar3;
        for (local_3c8 = (char *)0x0; local_3d8 = local_3b8, local_3c8 < local_3b8;
            local_3c8 = local_3c8 + 1) {
          pcVar5 = local_1f0[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_getCellAt__026a0b80,local_3c8);
          _objc_retainAutoreleasedReturnValue();
          local_3d0 = pcVar5;
          if (pcVar5 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_3c0,PTR_s_addObject__0269d180,pcVar5);
          }
          _objc_storeStrong(&local_3d0,0);
        }
        while (local_3d8 = local_3d8 + -1, -1 < (long)local_3d8) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_removeCellAt__026a0b88,local_3d8)
          ;
        }
        puVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_profileWCRefineSwitchesExpanded_026a0b60);
        local_3d9 = (byte)puVar3;
        pcVar7 = &cf_bS;
        if (((ulong)puVar3 & 1) == 0) {
          pcVar7 = &cf_U_;
        }
        puVar3 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                   PTR_s_wcrToggleGroupProfileSwitchesExp_026a5e68,local_168,&cf_WCRefine,pcVar7,1);
        _objc_retainAutoreleasedReturnValue();
        local_3e8 = puVar3;
        if (puVar3 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,puVar3);
        }
        if ((local_3d9 & 1) != 0) {
          _memset(auStack_430,0,0x40);
          puVar3 = local_3c0;
          (*(code *)PTR__objc_retain_02578638)();
          local_a68 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_430,auStack_a8,
                     0x10);
          if (local_a68 != (undefined *)0x0) {
            lVar10 = *local_420;
            local_a70 = (undefined *)0x0;
            do {
              do {
                if (*local_420 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_420 - lVar10,puVar3);
                }
                local_3f0 = *(undefined8 *)(local_428 + (long)local_a70 * 8);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f0[0],PTR_s_addCell__0269e3f8,local_3f0);
                local_a70 = local_a70 + 1;
              } while (local_a70 < local_a68);
              local_a68 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_430,
                         auStack_a8,0x10);
              local_a70 = (undefined *)0x0;
            } while (local_a68 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        _objc_storeStrong(&local_3e8);
        _objc_storeStrong(&local_3c0,0);
      }
      local_431 = 0;
      puVar3 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_chatRoomMemberAvatarRefreshEnabl_026a5ff8);
      local_431 = SUB81(puVar3,0);
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                   PTR_s_wcrRefreshGroupMemberAvatars_026a5e58,local_168,&cf_7Re_XT4YP,&cf___,1);
        _objc_retainAutoreleasedReturnValue();
        local_448[0] = puVar3;
        if (puVar3 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_addCell__0269e3f8,puVar3);
        }
        _objc_storeStrong(local_448,0);
      }
      local_450 = (char *)0x0;
      pcVar5 = local_1f0[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1f0[0],PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78);
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar5 = local_1f0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0[0],PTR_s_getCellCount_026a0b78);
        local_450 = pcVar5;
      }
      if (local_450 == (char *)0x0) {
        local_15d = 0;
        local_188 = 1;
      }
      else {
        uVar2 = local_178;
        FUN_0061a700(local_178,local_1f0[0]);
        if ((uVar2 & 1) == 0) {
          local_15d = 0;
          local_188 = 1;
        }
        else {
          _objc_setAssociatedObject(local_168,&DAT_0232420e,local_1f0[0],1);
          if ((local_169 & 1) == 0) {
            local_15d = 1;
            local_188 = 1;
          }
          else {
            uVar9 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_getTableView_026a09c8);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_178;
            puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_458 = uVar9;
            if (uVar9 != 0) {
              local_488 = PTR___NSConcreteGlobalBlock_02578658;
              local_480 = 0xd0800000;
              local_47c = 0;
              local_478 = FUN_0061a920;
              local_470 = &DAT_0257ab20;
              (*(code *)PTR__objc_retain_02578638)();
              uVar9 = local_458;
              local_468 = uVar2;
              (*(code *)PTR__objc_retain_02578638)();
              local_460 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_488);
              _objc_storeStrong(&local_460);
              _objc_storeStrong(&local_468,0);
            }
            local_15d = 1;
            local_188 = 1;
            _objc_storeStrong(&local_458,0);
          }
        }
      }
      _objc_storeStrong(&local_340);
      _objc_storeStrong(local_1f0,0);
      _objc_storeStrong(&local_1b0,0);
      _objc_storeStrong(&local_1a0,0);
    }
    _objc_storeStrong(&local_198);
    _objc_storeStrong(&local_190,0);
  }
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_15d & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

