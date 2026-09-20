// FUN_00600a30 @ 00600a30

/* WARNING: Removing unreachable block (ram,0x00600ae4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00600a30(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_158;
  bool local_b9;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined *local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  undefined4 local_74;
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
  puVar1 = PTR__OBJC_CLASS___UISelectionFeedbackGenerator_026ce280;
  _objc_alloc_init();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_selectionChanged_0269e718);
  _objc_storeStrong(&local_40,0);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = (undefined1 *)0x0;
  local_58[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_navigationTapAction_026a5f88);
  local_60 = puVar1;
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentChatMsgViewController_026a5dc8);
    _objc_retainAutoreleasedReturnValue();
    local_70[0] = uVar4;
    if (uVar4 == 0) {
      local_74 = 1;
    }
    else {
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_currentChatContactFromMsgViewCon_026a5dd0,uVar4);
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar5;
      if (uVar5 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_jumpToUserTimeline__026a5df8,uVar5);
      }
      local_74 = 1;
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(local_70,0);
  }
  else if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentChatMsgViewController_026a5dc8);
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar4;
    if (uVar4 == 0) {
      local_74 = 1;
    }
    else {
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_currentChatContactFromMsgViewCon_026a5dd0,uVar4);
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar5;
      if (uVar5 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
                   PTR_s_presentProfileCardForContact__0269e298,uVar5);
      }
      local_74 = 1;
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_88,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentChatMsgViewController_026a5dc8);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = uVar4;
    if (uVar4 == 0) {
      local_74 = 1;
    }
    else {
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_currentChatContactFromMsgViewCon_026a5dd0,uVar4);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = uVar5;
      if (uVar5 == 0) {
        local_74 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
        local_b9 = (uVar5 & 1) == 0;
        if (local_b9) {
          local_158 = 0;
        }
        else {
          local_158 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_m_nsUsrName_0269d638);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = local_158;
        }
        local_b9 = !local_b9;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_158;
        if (local_b9) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        if ((local_b0 == 0) ||
           (uVar4 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0),
           uVar4 == 0)) {
          local_74 = 1;
        }
        else {
          uVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_containsString__0269d0b0,&cf__chatroom);
          if (((uVar4 & 1) == 0) &&
             (uVar5 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_28,PTR_s_triggerVisibleMessageAvatarClick_026a5de8,local_98,0),
             (uVar5 & 1) != 0)) {
            local_74 = 1;
          }
          else {
            uVar5 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_openOfficialContactInfoForContac_026a5df0,local_a8,local_a0,
                       (uint)uVar4 & 1);
            if ((uVar5 & 1) == 0) {
              local_74 = 0;
            }
            else {
              local_74 = 1;
            }
          }
        }
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_a8,0);
    }
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_38,0);
  return;
}

