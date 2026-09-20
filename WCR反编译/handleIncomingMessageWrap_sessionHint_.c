// handleIncomingMessageWrap:sessionHint: @ 00f24538

/* Function Stack Size: 0x20 bytes */

void WCRefineDoNotDisturbSupport::handleIncomingMessageWrap_sessionHint_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *local_a8 [2];
  undefined4 local_94;
  ulong local_90;
  undefined *local_88;
  ID local_80 [4];
  int local_5c;
  char *local_58;
  undefined4 local_4c;
  undefined *local_48;
  undefined8 local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  if (((local_38 == 0) ||
      (IVar2 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEffectivelyActive_0269d708),
      (IVar2 & 1) == 0)) ||
     (puVar1 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doNotDisturbAutoReplyEnabled_026abdf8),
     ((ulong)puVar1 & 1) == 0)) {
    local_4c = 1;
    goto LAB_00f24bb4;
  }
  puVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doNotDisturbAutoReplyCallsOnlyEn_026abe60);
  if (((ulong)puVar1 & 1) != 0) {
    local_4c = 1;
    goto LAB_00f24bb4;
  }
  pcVar3 = "CMessageWrap";
  _objc_getClass();
  local_58 = pcVar3;
  if (((pcVar3 != (char *)0x0) &&
      ((*(code *)PTR__objc_msgSend_02578628)
                 (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_isSenderFromMsgWrap__0269d558),
      ((ulong)pcVar3 & 1) != 0)) &&
     (pcVar3 = local_58,
     (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isSenderFromMsgWrap__0269d558,local_38),
     ((ulong)pcVar3 & 1) != 0)) {
    local_4c = 1;
    goto LAB_00f24bb4;
  }
  local_5c = 0;
  uVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_5c = (int)uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (((local_5c == 10000) || (local_5c == 0x2711)) ||
     ((local_5c == 0x2712 || ((local_5c == 0x32 || (local_5c + -0x40 == 0)))))) {
    local_4c = 1;
    goto LAB_00f24bb4;
  }
  uVar4 = local_38;
  FUN_00f24bf4(local_5c + -0x40);
  if ((uVar4 & 1) != 0) {
    local_4c = 1;
    goto LAB_00f24bb4;
  }
  puVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doNotDisturbAutoReplyRecentOnlyE_026abe68);
  uVar4 = local_38;
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doNotDisturbAutoReplyRecentMinut_026abe70);
    FUN_00f25180(uVar4,puVar1);
    if ((uVar4 & 1) == 0) {
      local_4c = 1;
      goto LAB_00f24bb4;
    }
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_sessionUserNameFromWrap_sessionH_026a0cc0,local_38,local_40);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_28;
  local_80[0] = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_shouldAutoReplyForSession__026abe78,IVar2);
  if ((IVar6 & 1) == 0) {
    local_4c = 1;
  }
  else {
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_themeBoxResolvedForegroundChatSe_026a7c00);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    FUN_00f21dc0();
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if ((puVar1 == (undefined *)0x0) ||
       (puVar1 = local_88,
       (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,local_80[0]),
       ((ulong)puVar1 & 1) == 0)) {
      local_90 = 0;
      local_94 = 0;
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_n64MesSvrID);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_uiMesLocalID)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_94 = (undefined4)uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____lld__u
                );
      _objc_retainAutoreleasedReturnValue();
      local_a8[0] = puVar1;
      FUN_00f253b8();
      if (((ulong)puVar1 & 1) == 0) {
        local_4c = 1;
      }
      else {
        puVar1 = local_48;
        FUN_00f258a8();
        if (((ulong)puVar1 & 1) == 0) {
          local_4c = 1;
        }
        else {
          puVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_doNotDisturbAutoReplySessionCool_026abe80);
          IVar2 = local_80[0];
          if (((ulong)puVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_doNotDisturbAutoReplySessionCool_026abe88);
            FUN_00f25b38();
            if ((IVar2 & 1) == 0) {
              local_4c = 1;
              goto LAB_00f24b84;
            }
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_sendAutoReplyToSession__026abe90,local_80[0]);
          local_4c = 0;
        }
      }
LAB_00f24b84:
      _objc_storeStrong(local_a8,0);
    }
    else {
      local_4c = 1;
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(local_80,0);
LAB_00f24bb4:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

