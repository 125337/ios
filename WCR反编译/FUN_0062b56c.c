// FUN_0062b56c @ 0062b56c

/* WARNING: Removing unreachable block (ram,0x0062b658) */

void FUN_0062b56c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  char *pcVar8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  long local_190;
  long local_188;
  long local_180 [6];
  ulong local_150;
  char *local_148;
  char *local_140;
  undefined1 local_131;
  ulong local_128 [2];
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  ulong local_108;
  undefined *local_100;
  undefined *local_f8;
  ulong local_f0 [2];
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  ulong local_d0;
  undefined *local_c8;
  undefined *local_c0;
  ulong local_b8 [3];
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  ulong local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined *local_78;
  ulong local_70 [2];
  undefined1 *local_60;
  undefined1 *local_58 [3];
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithStyle__026ca710,0);
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_prepare_026ca7d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_impactOccurred_026ca6a0);
  _objc_storeStrong(&local_40,0);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = (undefined1 *)0x0;
  local_58[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_navigationTapAction_026a5f88);
  local_60 = puVar2;
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_70[0] = 0;
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_78 != (undefined *)0x0) {
      puVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_findMsgViewControllerFromViewCon_026a5dc0,puVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_70[0];
        local_70[0] = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
      _objc_storeStrong(&local_80,0);
    }
    if (local_70[0] == 0) {
      local_84 = 1;
    }
    else {
      local_90 = 0;
      pcVar6 = &cf_GetContact;
      _NSSelectorFromString();
      uVar7 = local_70[0];
      local_98 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_respondsToSelector__026ca818,pcVar6);
      if ((uVar7 & 1) == 0) {
        pcVar6 = &cf_getChatContact;
        _NSSelectorFromString();
        uVar7 = local_70[0];
        local_a0 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_respondsToSelector__026ca818,pcVar6)
        ;
        if ((uVar7 & 1) != 0) {
          uVar5 = local_70[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70[0],PTR_s_performSelector__026ca7b8,local_a0);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = local_90;
          local_90 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar7);
        }
      }
      else {
        uVar5 = local_70[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_performSelector__026ca7b8,local_98);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_90;
        local_90 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
      if (local_90 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_jumpToUserTimeline__026a5df8,local_90);
      }
      local_84 = 1;
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(local_70,0);
  }
  else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    local_b8[0] = 0;
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_c0 != (undefined *)0x0) {
      puVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_findMsgViewControllerFromViewCon_026a5dc0,puVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_b8[0];
        local_b8[0] = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
      _objc_storeStrong(&local_c8,0);
    }
    if (local_b8[0] == 0) {
      local_84 = 1;
    }
    else {
      local_d0 = 0;
      pcVar6 = &cf_GetContact;
      _NSSelectorFromString();
      uVar7 = local_b8[0];
      local_d8 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_respondsToSelector__026ca818,pcVar6);
      if ((uVar7 & 1) == 0) {
        pcVar6 = &cf_getChatContact;
        _NSSelectorFromString();
        uVar7 = local_b8[0];
        local_e0 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_respondsToSelector__026ca818,pcVar6)
        ;
        if ((uVar7 & 1) != 0) {
          uVar5 = local_b8[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8[0],PTR_s_performSelector__026ca7b8,local_e0);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = local_d0;
          local_d0 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar7);
        }
      }
      else {
        uVar5 = local_b8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_performSelector__026ca7b8,local_d8);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_d0;
        local_d0 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
      if (local_d0 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                   PTR_s_presentProfileCardForContact__0269e298,local_d0);
      }
      local_84 = 1;
      _objc_storeStrong(&local_d0,0);
    }
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(local_b8,0);
  }
  else {
    local_f0[0] = 0;
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_f8 != (undefined *)0x0) {
      puVar2 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      local_100 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_findMsgViewControllerFromViewCon_026a5dc0,puVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_f0[0];
        local_f0[0] = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
      _objc_storeStrong(&local_100,0);
    }
    if (local_f0[0] == 0) {
      local_84 = 1;
    }
    else {
      local_108 = 0;
      pcVar6 = &cf_GetContact;
      _NSSelectorFromString();
      uVar7 = local_f0[0];
      local_110 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_respondsToSelector__026ca818,pcVar6);
      if ((uVar7 & 1) == 0) {
        pcVar6 = &cf_getChatContact;
        _NSSelectorFromString();
        uVar7 = local_f0[0];
        local_118 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_respondsToSelector__026ca818,pcVar6)
        ;
        if ((uVar7 & 1) != 0) {
          uVar5 = local_f0[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0[0],PTR_s_performSelector__026ca7b8,local_118);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = local_108;
          local_108 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar7);
        }
      }
      else {
        uVar5 = local_f0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_performSelector__026ca7b8,local_110)
        ;
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_108;
        local_108 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
      if (local_108 == 0) {
        local_84 = 1;
      }
      else {
        local_128[0] = 0;
        uVar5 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName)
        ;
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_128[0];
        local_128[0] = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar7);
        if ((local_128[0] == 0) ||
           (uVar7 = local_128[0],
           (*(code *)PTR__objc_msgSend_02578628)(local_128[0],PTR_s_length_0269cca0), uVar7 == 0)) {
          local_84 = 1;
        }
        else {
          uVar7 = local_128[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128[0],PTR_s_containsString__0269d0b0,&cf__chatroom);
          local_131 = (undefined1)uVar7;
          if ((uVar7 & 1) == 0) {
            local_180[0] = 0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_findTextMessageCell_result__026a6020,local_f8,local_180);
            lVar1 = local_180[0];
            if (local_180[0] != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              puVar2 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
              local_188 = lVar1;
              local_1b0 = PTR___NSConcreteStackBlock_02578660;
              local_1a8 = 0xc2000000;
              local_1a4 = 0;
              local_1a0 = FUN_006405f4;
              local_198 = &DAT_02578c20;
              (*(code *)PTR__objc_retain_02578638)();
              local_190 = lVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_performWithoutChatAvatarProfileC_026a5f80,&local_1b0);
              _objc_storeStrong(&local_190);
              _objc_storeStrong(&local_188,0);
            }
          }
          else {
            pcVar8 = "ChatRoomInfoViewController";
            _objc_getClass();
            local_140 = pcVar8;
            if (pcVar8 != (char *)0x0) {
              _objc_alloc_init();
              local_148 = pcVar8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar8,PTR_s_setValue_forKey__0269d300,local_108,&cf_m_chatRoomContact);
              uVar7 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_performSelector__026ca7b8,
                         PTR_s_currentNavigationController_026a5e00);
              _objc_retainAutoreleasedReturnValue();
              local_150 = uVar7;
              if (uVar7 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_PushViewController_animated__0269cd40,local_148,1);
              }
              _objc_storeStrong(&local_150);
              _objc_storeStrong(&local_148,0);
            }
          }
          local_84 = 0;
        }
        _objc_storeStrong(local_128,0);
      }
      _objc_storeStrong(&local_108,0);
    }
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(local_f0,0);
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_38,0);
  return;
}

