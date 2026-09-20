// FUN_002328f4 @ 002328f4

void FUN_002328f4(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *local_bc8;
  undefined1 *local_bc0;
  undefined1 *local_b80;
  undefined1 *local_b78;
  undefined1 *local_ad0;
  undefined1 *local_ac8;
  cfstringStruct *local_a58;
  byte local_a20;
  byte local_a18;
  byte local_a00;
  byte local_9a0;
  uint local_974;
  byte local_958;
  uint local_814;
  uint local_7c0;
  byte local_790;
  uint local_768;
  byte local_72c;
  byte local_6e4;
  uint local_6d4;
  ulong local_598;
  ulong local_590;
  undefined1 auStack_588 [8];
  long local_580;
  long *local_578;
  undefined8 local_548;
  undefined1 auStack_540 [8];
  long local_538;
  long *local_530;
  undefined8 local_500;
  undefined *local_4f8;
  byte local_4e9;
  ulong local_4e8;
  undefined1 auStack_4e0 [8];
  long local_4d8;
  long *local_4d0;
  undefined8 local_4a0;
  char *local_498;
  char *local_490;
  byte local_481;
  cfstringStruct *local_480;
  cfstringStruct *local_478;
  byte local_469;
  cfstringStruct *local_468;
  byte local_459;
  cfstringStruct *local_458;
  byte local_449;
  cfstringStruct *local_448;
  byte local_439;
  cfstringStruct *local_438;
  char *local_430;
  byte local_421;
  cfstringStruct *local_420;
  byte local_411;
  cfstringStruct *local_410;
  byte local_402;
  byte local_401;
  undefined *local_400;
  byte local_3f1;
  cfstringStruct *local_3f0;
  undefined *local_3e8 [2];
  undefined1 local_3d1;
  char *local_3d0;
  byte local_3c1;
  char *local_3c0;
  byte local_3b1;
  char *local_3b0;
  byte local_3a2;
  undefined1 local_3a1;
  char *local_3a0;
  undefined *local_398;
  byte local_38a;
  byte local_389;
  char *local_388;
  byte local_379;
  undefined *local_378;
  byte local_369;
  char *local_368;
  byte local_359;
  undefined *local_350 [2];
  undefined1 local_339;
  char *local_338;
  byte local_329;
  undefined *local_320 [2];
  byte local_309;
  char *local_308;
  byte local_2f9;
  char *local_2f8;
  byte local_2e9;
  char *local_2e8;
  byte local_2d9;
  char *local_2d8;
  byte local_2c9;
  undefined *local_2c8 [2];
  undefined1 local_2b1;
  char *local_2b0;
  undefined1 *local_2a8;
  undefined *local_2a0;
  ulong local_298;
  ulong local_290;
  undefined *local_288;
  undefined4 local_26c;
  ulong local_268 [3];
  ulong local_250 [6];
  uint local_21c;
  char local_218;
  uint local_210;
  byte local_209;
  ulong local_208;
  uint local_1fc;
  ulong *local_1f8;
  ulong local_1f0;
  uint local_1e4;
  ulong *local_1e0;
  bool local_1d1;
  code *local_1d0;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  ulong *local_1b8;
  ulong local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_268[0] = 0;
  _objc_storeStrong(local_268,param_1);
  if (local_268[0] == 0) {
    local_26c = 1;
    goto LAB_00235fd0;
  }
  uVar3 = local_268[0];
  _objc_getAssociatedObject(local_268[0],DAT_026dfb58);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if ((uVar10 & 1) != 0) {
    local_26c = 1;
    goto LAB_00235fd0;
  }
  local_288 = PTR_s_wcr_isChatSearchRelayController__026a0a70;
  puVar4 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTopBarProfileCardPresenter_026ce228,PTR_s_respondsToSelector__026ca818,
             PTR_s_wcr_isChatSearchRelayController__026a0a70);
  if (((ulong)puVar4 & 1) != 0) {
    puVar4 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,local_288,local_268[0]);
    if (((ulong)puVar4 & 1) != 0) {
      local_26c = 1;
      goto LAB_00235fd0;
    }
  }
  uVar3 = local_268[0];
  FUN_00236094();
  _objc_retainAutoreleasedReturnValue();
  local_290 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if ((uVar3 == 0) || (uVar3 = local_290, FUN_0022b864(), (uVar3 & 1) != 0)) {
    local_26c = 1;
  }
  else {
    uVar3 = local_268[0];
    FUN_0022b93c();
    _objc_retainAutoreleasedReturnValue();
    local_298 = uVar3;
    if ((uVar3 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
       (uVar3 & 1) == 0)) {
      local_26c = 1;
    }
    else {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_2a0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_2a0;
      local_2a8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_navigationShowFriendID_026a0a80);
      if (((ulong)puVar4 & 1) != 0) {
        pcVar6 = "WCTableViewCellManager";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_normalCellForSel_target_title_ri_026a0a88,
                   PTR_s_copyFriendID_026a0968,local_268[0],&cf_SYW,local_290,0);
        _objc_retainAutoreleasedReturnValue();
        local_2b0 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_2b0,0);
      }
      local_2b1 = 0;
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_2a0,PTR_s_chatAvatarProfileCardProfilePage_026a0a90);
      local_2b1 = SUB81(puVar4,0);
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                   PTR_s_wcRefineViewFriendProfileCard_026a0990,local_268[0],&cf_gw_YSDeaS,&cf___,1)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_2c8[0] = puVar4;
        if (puVar4 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,puVar4);
        }
        _objc_storeStrong(local_2c8,0);
      }
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_repeatChatIndentEnabled_0269e7a8);
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = PTR_WCRefineChatIndentOverrideHelper_026ce408;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineChatIndentOverrideHelper_026ce408,
                   PTR_s_hasIndentOverrideForSession__026a0aa0,local_290);
        local_2c9 = (byte)puVar4;
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleSessionChatIndentOverride__026a09a0,local_268[0],&cf_n_J_Y__<P,
                   local_2c9 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_2d8 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_2d8,0);
      }
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_repeatChatSinkEnabled_0269e7f0);
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = PTR_WCRefineChatIndentOverrideHelper_026ce408;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineChatIndentOverrideHelper_026ce408,
                   PTR_s_hasSinkOverrideForSession__026a0ab0,local_290);
        local_2d9 = (byte)puVar4;
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleSessionChatSinkOverride__026a09a8,local_268[0],&cf_n_J_YNl<P,
                   local_2d9 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_2e8 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_2e8,0);
      }
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_repeatChatLiftEnabled_0269e7f8);
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = PTR_WCRefineChatIndentOverrideHelper_026ce408;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineChatIndentOverrideHelper_026ce408,
                   PTR_s_hasLiftOverrideForSession__026a0ab8,local_290);
        local_2e9 = (byte)puVar4;
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleSessionChatLiftOverride__026a09b0,local_268[0],&cf_n_J_YNnm<P,
                   local_2e9 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_2f8 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_2f8,0);
      }
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_customAvatarFeatureEnabled_026a0958);
      if (((ulong)puVar4 & 1) != 0) {
        uVar3 = local_290;
        FUN_00230c84();
        local_2f9 = (byte)uVar3;
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleCustomContactAvatar__026a0970,local_268[0],&cf__T_u_IN4YP,
                   local_2f9 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_308 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_308,0);
      }
      local_309 = 0;
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_navigationShowAvatar_026a0ac0);
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_navigationShowAvatarTQQ_026a0ac8);
        local_6d4 = 0;
        if (((ulong)puVar4 & 1) != 0) goto LAB_002333c8;
      }
      else {
LAB_002333c8:
        puVar4 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_navigationShowInPrivate_026a0ad0);
        local_6d4 = (uint)puVar4;
      }
      local_309 = (byte)local_6d4 & 1;
      if ((local_6d4 & 1) != 0) {
        local_320[0] = (undefined *)0x0;
        puVar5 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_navigationAvatarBlacklist_026a0ad8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_320[0];
        local_320[0] = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_6e4 = 0;
        if (local_320[0] != (undefined *)0x0) {
          puVar4 = local_320[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_320[0],PTR_s_containsObject__0269cbb8,local_290);
          local_6e4 = (byte)puVar4;
        }
        local_329 = local_6e4 & 1;
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleAvatarForContact__026a0978,local_268[0],&cf_y_uvh4YP>f_y,
                   local_329 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_338 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_338);
        _objc_storeStrong(local_320,0);
      }
      local_339 = 0;
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_redEnvelopAutoReceiveEnable_026a0ae0);
      local_339 = SUB81(puVar4,0);
      if (((ulong)puVar4 & 1) != 0) {
        local_350[0] = (undefined *)0x0;
        puVar5 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_redEnvelopSkipPersonList_026a0ae8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_350[0];
        local_350[0] = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_72c = 0;
        if (local_350[0] != (undefined *)0x0) {
          puVar4 = local_350[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_350[0],PTR_s_containsObject__0269cbb8,local_290);
          local_72c = (byte)puVar4;
        }
        local_359 = local_72c & 1;
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleRedEnvelopSkipPerson__026a0980,local_268[0],&cf_NbdkN_S,local_359 & 1
                  );
        _objc_retainAutoreleasedReturnValue();
        local_368 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_368);
        _objc_storeStrong(local_350,0);
      }
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_autoAcceptTransferEnabled_0269d668);
      local_768 = 0;
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2a0,PTR_s_autoAcceptTransferProfileControl_0269d698);
        local_768 = (uint)puVar4;
      }
      local_369 = (byte)local_768 & 1;
      if ((local_768 & 1) != 0) {
        puVar4 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2a0,PTR_s_autoAcceptTransferAllowedPersonL_0269d6a8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_378 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_790 = 0;
        if (((ulong)puVar4 & 1) != 0) {
          puVar4 = local_378;
          (*(code *)PTR__objc_msgSend_02578628)(local_378,PTR_s_containsObject__0269cbb8,local_290);
          local_790 = (byte)puVar4;
        }
        local_379 = local_790 & 1;
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleAutoAcceptTransferPerson__026a0988,local_268[0],&cf_Rc6edkNl_,
                   local_379 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_388 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_388);
        _objc_storeStrong(&local_378,0);
      }
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_messageBlockEnabled_026a0af0);
      local_7c0 = 0;
      if (((ulong)puVar4 & 1) != 0) {
        local_208 = 0;
        _objc_storeStrong(&local_208,&cf_message_block);
        local_209 = 0;
        local_210 = 0xc91a47b2;
        _memset(local_250,0,0x40);
        uVar3 = local_208;
        FUN_01139098(local_208,local_209 & 1,local_210,local_250);
        bVar2 = false;
        if ((uVar3 & 1) != 0) {
          local_1f8 = local_250;
          local_1fc = local_210;
          local_1e4 = local_210;
          local_1e0 = local_1f8;
          if (((local_1f8 == (ulong *)0x0) || (local_218 == '\0')) || (local_21c != local_210)) {
            local_1d1 = false;
          }
          else {
            FUN_00a59890(0);
            local_1f0 = uVar3;
            if (((local_1e0[5] == uVar3) && (uVar10 = local_1e0[2], FUN_00a4ec00(), uVar10 == uVar3)
                ) && (uVar10 = local_1e0[3], FUN_01138c10(), uVar10 == uVar3)) {
              if (((char)local_1e0[7] == '\x03') && (local_1e0[5] == 0)) {
                local_1d1 = false;
              }
              else if ((local_1e0[4] == 0) ||
                      ((local_1e0[4] + 1 == 0 ||
                       (_mach_continuous_time(local_1e0[4] + 1), uVar3 < local_1e0[4])))) {
                local_1b8 = local_1e0;
                local_1bc = local_1e4;
                if (local_1e0 == (ulong *)0x0) {
                  local_1b0 = 0;
                }
                else {
                  local_1c0 = local_1e4 & 0x1f;
                  if (local_1c0 == 0) {
                    local_814 = (uint)local_1e0[6];
                  }
                  else {
                    local_814 = (int)local_1e0[6] << (ulong)local_1c0 |
                                (uint)local_1e0[6] >> (ulong)(0x20 - local_1c0 & 0x1f);
                  }
                  local_1c4 = local_814;
                  local_1d0 = FUN_009dea6c;
                  local_1b0 = (ulong)local_814 ^ 0xc3a5f77e905041d1 ^ (ulong)local_1e4 << 1 ^
                              local_1e0[5] ^ local_1e0[2] ^ local_1e0[3] << 7 ^ local_1e0[4] >> 0xb
                              ^ (ulong)(byte)local_1e0[7] << 0x35 ^
                              (ulong)*(byte *)((long)local_1e0 + 0x39) << 0x2d ^ 0x9dea6c;
                }
                local_1d1 = (*local_1e0 ^ local_1e0[1]) == local_1b0;
              }
              else {
                local_1d1 = false;
              }
            }
            else {
              local_1d1 = false;
            }
          }
          bVar2 = false;
          if (local_1d1 != false) {
            bVar2 = (char)local_1f8[7] == '\x03';
          }
        }
        _objc_storeStrong(&local_208,0);
        local_7c0 = 0;
        if (bVar2) {
          uVar3 = local_268[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_268[0],PTR_s_respondsToSelector__026ca818,
                     PTR_s_toggleMessageBlockContact__026a0af8);
          local_7c0 = (uint)uVar3;
        }
      }
      local_389 = (byte)local_7c0 & 1;
      if ((local_7c0 & 1) != 0) {
        local_38a = 0;
        puVar5 = PTR_WCRefineMessageBlockSupport_026ce0f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMessageBlockSupport_026ce0f8,
                   PTR_s_chatRoomContextFromProfileContro_0269d570,local_268[0]);
        _objc_retainAutoreleasedReturnValue();
        local_398 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
        puVar4 = PTR_WCRefineMessageBlockSupport_026ce0f8;
        if (puVar5 == (undefined *)0x0) {
          puVar4 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2a0,PTR_s_messageBlockContactEnabledIDs_026a0b10);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_38a = (byte)puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        else {
          puVar5 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2a0,PTR_s_messageBlockGroupMemberEnabledID_026a0b00);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_groupMemberList_containsGroup_me_026a0b08,puVar5,local_398,
                     local_290);
          local_38a = (byte)puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleMessageBlockContact__026a0af8,local_268[0],&cf__T_umo_O__,
                   local_38a & 1);
        _objc_retainAutoreleasedReturnValue();
        local_3a0 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_3a0);
        _objc_storeStrong(&local_398,0);
      }
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_autoParseLinkEnabled_0269dbc8);
      local_3a1 = SUB81(puVar4,0);
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2a0,PTR_s_autoParseLinkContactEnabledIDs_0269dbe8);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_3a2 = (byte)puVar5;
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleAutoParseLinkContact__0269db28,local_268[0],&cf_RgZSO,local_3a2 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_3b0 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        if ((local_3a2 & 1) != 0) {
          puVar4 = local_2a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2a0,PTR_s_autoParseLinkContactOutgoingAuto_0269dbd8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_3b1 = (byte)puVar5;
          if (DAT_028c9278 == (char *)0x0) {
            pcVar6 = "WCTableViewNormalCellManager";
            _objc_getClass();
            DAT_028c9278 = pcVar6;
          }
          pcVar6 = DAT_028c9278;
          _objc_retainAutoreleaseReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                     PTR_s_toggleAutoParseLinkOutgoingConta_0269db30,local_268[0],&cf__S_NRg,
                     local_3b1 & 1);
          _objc_retainAutoreleasedReturnValue();
          local_3c0 = pcVar6;
          if (pcVar6 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
          }
          _objc_storeStrong(&local_3c0,0);
        }
        _objc_storeStrong(&local_3b0,0);
      }
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_keywordAutoReplyEnabled_026a0b18);
      if ((((ulong)puVar4 & 1) != 0) &&
         (puVar4 = local_2a0,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_2a0,PTR_s_keywordAutoReplySessionGateEnabl_026a0b20),
         ((ulong)puVar4 & 1) != 0)) {
        puVar4 = local_2a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_2a0,PTR_s_keywordAutoReplySelectedContacts_026a0b28);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_3c1 = (byte)puVar5;
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_toggleKeywordAutoReplyContact__026a0b30,local_268[0],&cf_sQ_VY_,
                   local_3c1 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_3d0 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_3d0,0);
      }
      local_3d1 = 0;
      puVar4 = local_2a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_sessionStatsEnabled_026a0b38);
      local_3d1 = SUB81(puVar4,0);
      if ((((ulong)puVar4 & 1) != 0) &&
         (puVar4 = PTR_WCRefinePrivateFriendManager_026ce160,
         (*(code *)PTR__objc_msgSend_02578628)
                   (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
                    local_290), ((ulong)puVar4 & 1) == 0)) {
        puVar4 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                   PTR_s_wcrOpenSessionStats_026a0998,local_268[0],&cf_gwO_,&cf___,1);
        _objc_retainAutoreleasedReturnValue();
        local_3e8[0] = puVar4;
        if (puVar4 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,puVar4);
        }
        _objc_storeStrong(local_3e8,0);
      }
      pcVar7 = (cfstringStruct *)PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_3f0 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_chatAgentEnabled_0269ce88);
      local_958 = 1;
      if (((ulong)pcVar7 & 1) == 0) {
        pcVar7 = local_3f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_3f0,PTR_s_chatAgentReplyAll_0269ce80);
        local_958 = (byte)pcVar7;
      }
      local_3f1 = local_958 & 1;
      puVar4 = PTR_WCRefineMessageBlockSupport_026ce0f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMessageBlockSupport_026ce0f8,
                 PTR_s_chatRoomContextFromProfileContro_0269d570,local_268[0]);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_290;
      local_400 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_length_0269cca0);
      local_974 = 0;
      if (uVar3 != 0) {
        uVar3 = local_290;
        (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        local_974 = (uint)uVar3 ^ 1;
      }
      local_401 = (byte)local_974 & 1;
      if ((((local_3f1 & 1) != 0) && ((local_974 & 1) != 0)) &&
         (uVar3 = local_268[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_268[0],PTR_s_respondsToSelector__026ca818,
                    PTR_s_wcr_aiToggleReplyPerson__0269d050), (uVar3 & 1) != 0)) {
        local_411 = 0;
        local_421 = 0;
        puVar5 = local_400;
        (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_length_0269cca0);
        puVar4 = PTR_WCRefineAIStore_026ce048;
        if (puVar5 == (undefined *)0x0) {
          pcVar7 = local_3f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_3f0,PTR_s_chatAgentSelectedContacts_026a0b48);
          _objc_retainAutoreleasedReturnValue();
          local_421 = 1;
          local_420 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_9a0 = (byte)pcVar7;
        }
        else {
          pcVar7 = local_3f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_3f0,PTR_s_chatAgentSelectedMembers_026a0b40);
          _objc_retainAutoreleasedReturnValue();
          local_411 = 1;
          local_410 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_groupMemberList_containsGroup_me_026a0b08,pcVar7,local_400,
                     local_290);
          local_9a0 = (byte)puVar4;
        }
        if ((local_421 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_420);
        }
        if ((local_411 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_410);
        }
        local_402 = local_9a0 & 1;
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_wcr_aiToggleReplyPerson__0269d050,local_268[0],&cf_A,local_402 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_430 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_430,0);
      }
      pcVar7 = local_3f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_3f0,PTR_s_profileSessionSettingsEnabled_026a0b50);
      if (((((ulong)pcVar7 & 1) != 0) && ((local_3f1 & 1) != 0)) &&
         (puVar4 = local_400, (*(code *)PTR__objc_msgSend_02578628)(local_400,PTR_s_length_0269cca0)
         , puVar4 == (undefined *)0x0)) {
        pcVar7 = local_3f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_3f0,PTR_s_sessionOptionsForID__026a0b58,local_290);
        _objc_retainAutoreleasedReturnValue();
        local_449 = 0;
        local_459 = 0;
        local_469 = 0;
        local_438 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar7,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionAutoReplyEnabled);
        _objc_retainAutoreleasedReturnValue();
        if (pcVar7 == (cfstringStruct *)0x0) {
          pcVar8 = local_438;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_438,PTR_s_objectForKeyedSubscript__0269d098,
                     _WCRAISessionConversationEnabled);
          _objc_retainAutoreleasedReturnValue();
          local_459 = 1;
          local_458 = pcVar8;
          if (pcVar8 == (cfstringStruct *)0x0) {
            pcVar8 = local_3f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_3f0,PTR_s_chatAgentEnabled_0269ce88);
            local_a20 = 1;
            if (((ulong)pcVar8 & 1) == 0) {
              pcVar8 = local_3f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_3f0,PTR_s_chatAgentReplyAll_0269ce80);
              local_a20 = (byte)pcVar8;
            }
            local_a18 = local_a20;
          }
          else {
            pcVar8 = local_438;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_438,PTR_s_objectForKeyedSubscript__0269d098,
                       _WCRAISessionConversationEnabled);
            _objc_retainAutoreleasedReturnValue();
            local_469 = 1;
            local_468 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_a18 = (byte)pcVar8;
          }
          local_a00 = local_a18;
        }
        else {
          pcVar8 = local_438;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_438,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionAutoReplyEnabled
                    );
          _objc_retainAutoreleasedReturnValue();
          local_449 = 1;
          local_448 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_a00 = (byte)pcVar8;
        }
        if ((local_469 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_468);
        }
        if ((local_459 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_458);
        }
        if ((local_449 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_448);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        local_439 = local_a00 & 1;
        local_481 = 0;
        pcVar7 = local_438;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_438,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionPreset);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar8 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)pcVar8 & 1) == 0) {
          local_a58 = &cf___;
        }
        else {
          local_a58 = local_438;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_438,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionPreset);
          _objc_retainAutoreleasedReturnValue();
          local_481 = 1;
          local_480 = local_a58;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_478 = local_a58;
        if ((local_481 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_480);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        if (DAT_028c9278 == (char *)0x0) {
          pcVar6 = "WCTableViewNormalCellManager";
          _objc_getClass();
          DAT_028c9278 = pcVar6;
        }
        pcVar6 = DAT_028c9278;
        _objc_retainAutoreleaseReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_switchCellForSel_target_title_on_026a0aa8,
                   PTR_s_wcr_aiToggleConversation__0269d048,local_268[0],&cf__T_u,local_439 & 1);
        _objc_retainAutoreleasedReturnValue();
        local_490 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        pcVar6 = "WCTableViewCellManager";
        _objc_getClass();
        uVar3 = local_268[0];
        puVar4 = PTR_s_wcr_aiOpenSessionSettings_0269d058;
        pcVar8 = local_478;
        (*(code *)PTR__objc_msgSend_02578628)(local_478,PTR_s_length_0269cca0);
        pcVar7 = &cf__USrn_;
        if (pcVar8 == (cfstringStruct *)0x0) {
          pcVar7 = &cf_hQ__;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_normalCellForSel_target_title_ri_026a0a88,puVar4,uVar3,&cf_A,pcVar7,
                   0);
        _objc_retainAutoreleasedReturnValue();
        local_498 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_addObject__0269d180,pcVar6);
        }
        _objc_storeStrong(&local_498);
        _objc_storeStrong(&local_490,0);
        _objc_storeStrong(&local_478,0);
        _objc_storeStrong(&local_438,0);
      }
      _memset(auStack_4e0,0,0x40);
      puVar9 = local_2a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_ac8 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4e0,auStack_a8,0x10)
      ;
      if (local_ac8 != (undefined1 *)0x0) {
        lVar11 = *local_4d0;
        local_ad0 = (undefined1 *)0x0;
        do {
          do {
            if (*local_4d0 - lVar11 != 0) {
              _objc_enumerationMutation(*local_4d0 - lVar11,puVar9);
            }
            uVar1 = DAT_026dfb60;
            uVar12 = *(undefined8 *)(local_4d8 + (long)local_ad0 * 8);
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_4a0 = uVar12;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(uVar12,uVar1,puVar4,1);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            local_ad0 = local_ad0 + 1;
          } while (local_ad0 < local_ac8);
          local_ac8 = puVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4e0,auStack_a8,
                     0x10);
          local_ad0 = (undefined1 *)0x0;
        } while (local_ac8 != (undefined1 *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar9);
      FUN_00236610(local_298);
      puVar9 = local_2a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_count_0269cfe0);
      if (puVar9 != (undefined1 *)0x0) {
        uVar3 = local_298;
        FUN_002367d4(puVar9);
        _objc_retainAutoreleasedReturnValue();
        local_4e8 = uVar3;
        if (uVar3 != 0) {
          puVar9 = local_2a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_count_0269cfe0);
          if (puVar9 < (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
            _memset(auStack_588,0,0x40);
            puVar9 = local_2a8;
            (*(code *)PTR__objc_retain_02578638)();
            local_bc0 = puVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_588,
                       auStack_1a8,0x10);
            if (local_bc0 != (undefined1 *)0x0) {
              lVar11 = *local_578;
              local_bc8 = (undefined1 *)0x0;
              do {
                do {
                  if (*local_578 - lVar11 != 0) {
                    _objc_enumerationMutation(*local_578 - lVar11,puVar9);
                  }
                  local_548 = *(undefined8 *)(local_580 + (long)local_bc8 * 8);
                  (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_addCell__0269e3f8,local_548)
                  ;
                  local_bc8 = local_bc8 + 1;
                } while (local_bc8 < local_bc0);
                local_bc0 = puVar9;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_588,
                           auStack_1a8,0x10);
                local_bc8 = (undefined1 *)0x0;
              } while (local_bc0 != (undefined1 *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar9);
          }
          else {
            puVar4 = local_2a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_2a0,PTR_s_profileWCRefineSwitchesExpanded_026a0b60);
            local_4e9 = (byte)puVar4;
            pcVar7 = &cf_bS;
            if (((ulong)puVar4 & 1) == 0) {
              pcVar7 = &cf_U_;
            }
            puVar4 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
                       PTR_s_wcrToggleProfileSwitchesExpanded_026a09b8,local_268[0],&cf_WCRefine,
                       pcVar7,1);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = DAT_026dfb60;
            local_4f8 = puVar4;
            if (puVar4 != (undefined *)0x0) {
              puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(puVar4,uVar1,puVar5,1);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_msgSend_02578628)(local_4e8,PTR_s_addCell__0269e3f8,local_4f8);
            }
            if ((local_4e9 & 1) != 0) {
              _memset(auStack_540,0,0x40);
              puVar9 = local_2a8;
              (*(code *)PTR__objc_retain_02578638)();
              local_b78 = puVar9;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_540,
                         auStack_128,0x10);
              if (local_b78 != (undefined1 *)0x0) {
                lVar11 = *local_530;
                local_b80 = (undefined1 *)0x0;
                do {
                  do {
                    if (*local_530 - lVar11 != 0) {
                      _objc_enumerationMutation(*local_530 - lVar11,puVar9);
                    }
                    local_500 = *(undefined8 *)(local_538 + (long)local_b80 * 8);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_4e8,PTR_s_addCell__0269e3f8,local_500);
                    local_b80 = local_b80 + 1;
                  } while (local_b80 < local_b78);
                  local_b78 = puVar9;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_540,
                             auStack_128,0x10);
                  local_b80 = (undefined1 *)0x0;
                } while (local_b78 != (undefined1 *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar9);
            }
            _objc_storeStrong(&local_4f8,0);
          }
        }
        _objc_storeStrong(&local_4e8,0);
      }
      uVar10 = local_268[0];
      _objc_getAssociatedObject(local_268[0],DAT_026dfb58);
      _objc_retainAutoreleasedReturnValue();
      local_590 = uVar10;
      (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_boolValue_026ca540);
      uVar3 = local_268[0];
      uVar1 = DAT_026dfb58;
      if ((uVar10 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,uVar1,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_598 = 0;
        uVar3 = local_298;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_298,PTR_s_respondsToSelector__026ca818,PTR_s_getTableView_026a09c8);
        if ((uVar3 & 1) != 0) {
          uVar10 = local_298;
          (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_getTableView_026a09c8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_598;
          local_598 = uVar10;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_598;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_598,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_598,PTR_s_reloadData_0269e400);
        }
        _objc_setAssociatedObject(local_268[0],DAT_026dfb58,0,1);
        _objc_storeStrong(&local_598,0);
      }
      _objc_storeStrong(&local_590);
      _objc_storeStrong(&local_400,0);
      _objc_storeStrong(&local_3f0,0);
      _objc_storeStrong(&local_2a8,0);
      _objc_storeStrong(&local_2a0,0);
      local_26c = 0;
    }
    _objc_storeStrong(&local_298,0);
  }
  _objc_storeStrong(&local_290,0);
LAB_00235fd0:
  _objc_storeStrong(local_268,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

