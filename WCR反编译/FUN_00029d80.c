// FUN_00029d80 @ 00029d80

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00029d80(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte local_200;
  byte local_1f8;
  undefined1 *local_1e0;
  uint local_1ac;
  uint local_e4;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  byte local_93;
  byte local_92;
  byte local_91;
  undefined1 *local_90;
  undefined1 *local_88;
  byte local_79;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  ulong local_60;
  ulong local_58;
  byte local_49;
  ulong local_48;
  char *local_40;
  uint local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if ((local_28 == 0) ||
     ((uVar3 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_uiMessageType_0269d0a8),
      (int)uVar3 != 1 &&
      (uVar3 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_uiMessageType_0269d0a8),
      (int)uVar3 != 0x31)))) {
    local_38 = 1;
    goto LAB_0002acbc;
  }
  pcVar4 = "SettingUtil";
  _objc_getClass(0);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getLocalUsrName__0269ce98,0);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_40 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
  local_e4 = 1;
  if (pcVar4 != (char *)0x0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsFromUsr_0269d088);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e4 = (uint)uVar3;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_e4 & 1) == 0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsRealChatUsr_0269d190);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if ((uVar6 & 1) == 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsRealChatUsr_0269d190);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      FUN_0001a2e4();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar6 & 1) == 0) {
        uVar3 = local_28;
        FUN_00011dac();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_28;
        local_58 = uVar3;
        FUN_00010240(local_28,local_40);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_58;
        local_60 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (((uVar3 == 0) ||
            (uVar3 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0)
            , uVar3 == 0)) ||
           (puVar7 = PTR_WCRefineHelper_026ce000,
           (*(code *)PTR__objc_msgSend_02578628)
                     (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                      local_60), ((ulong)puVar7 & 1) != 0)) {
          local_38 = 1;
        }
        else {
          puVar7 = PTR_WCRefineAIStore_026ce048;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_68 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_effectiveSessionOptionsForID__0269cea0,local_60);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = local_68;
          local_70 = puVar7;
          FUN_0001065c(local_68,puVar7);
          if (((ulong)puVar8 & 1) == 0) {
            local_38 = 1;
          }
          else {
            puVar8 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_chatReplyCommand_0269d4f0);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            FUN_0001a2e4();
            _objc_retainAutoreleasedReturnValue();
            local_78 = puVar9;
            (*(code *)PTR__objc_release_02578630)(puVar8);
            puVar8 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
            local_1ac = 0;
            if (puVar8 != (undefined1 *)0x0) {
              uVar3 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,local_78);
              local_1ac = (uint)uVar3;
            }
            local_79 = (byte)local_1ac & 1;
            if (((local_1ac & 1) != 0) &&
               (uVar3 = local_58, FUN_0002ad64(local_58,local_78), (uVar3 & 1) != 0)) {
              local_79 = 0;
            }
            local_91 = 0;
            puVar8 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionReplyMode);
            _objc_retainAutoreleasedReturnValue();
            if (puVar8 == (undefined1 *)0x0) {
              local_1e0 = local_68;
              (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_chatAgentReplyMode_0269d4f8);
            }
            else {
              local_1e0 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionReplyMode);
              _objc_retainAutoreleasedReturnValue();
              local_91 = 1;
              local_90 = local_1e0;
              (*(code *)PTR__objc_msgSend_02578628)();
            }
            if ((local_91 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_90);
            }
            (*(code *)PTR__objc_release_02578630)(puVar8);
            local_88 = local_1e0;
            if (local_1e0 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
              uVar3 = local_28;
              FUN_0001bc2c(local_28,local_40);
              local_1f8 = (byte)uVar3;
            }
            else {
              if (local_1e0 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
                uVar3 = local_28;
                FUN_0001c124(local_28,local_40);
                local_200 = (byte)uVar3;
              }
              else {
                local_200 = 1;
              }
              local_1f8 = local_200;
            }
            local_92 = local_1f8 & 1;
            uVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_uiMessageType_0269d0a8);
            local_93 = 0;
            if (((int)uVar3 == 1) && (local_93 = 0, (local_79 & 1) == 0)) {
              local_93 = local_92;
            }
            local_93 = local_93 & 1;
            uVar3 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_uiMessageType_0269d0a8);
            if (((int)uVar3 == 0x31) && ((local_79 & 1) == 0)) {
              local_38 = 1;
            }
            else if (((local_79 & 1) == 0) && ((local_93 & 1) == 0)) {
              local_38 = 1;
            }
            else {
              puVar8 = local_68;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68,PTR_s_isChatProviderConfigured_0269ce90);
              if (((ulong)puVar8 & 1) == 0) {
                local_38 = 1;
              }
              else {
                if ((local_79 & 1) == 0) {
                  uVar3 = local_28;
                  FUN_0001b32c(local_28,local_40);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = local_68;
                  local_a0 = uVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_68,PTR_s_allowsAutomaticReplyInSession_se_0269d500,local_60,uVar3
                             ,local_70);
                  local_38 = (uint)(((ulong)puVar8 & 1) == 0);
                  _objc_storeStrong(&local_a0,0);
                  if (local_38 != 0) goto LAB_0002ac5c;
                }
                uVar5 = local_28;
                FUN_0002b248(local_28,local_60,local_58);
                uVar3 = local_58;
                if ((uVar5 & 1) == 0) {
                  local_38 = 1;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  uVar5 = local_58;
                  local_a8 = uVar3;
                  if ((local_79 & 1) != 0) {
                    puVar8 = local_78;
                    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar5,PTR_s_substringFromIndex__0269d120,puVar8);
                    _objc_retainAutoreleasedReturnValue();
                    uVar6 = uVar5;
                    FUN_0001a2e4();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = local_28;
                    FUN_00011760();
                    _objc_retainAutoreleasedReturnValue();
                    uVar11 = uVar6;
                    FUN_0002b6d0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar3 = local_a8;
                    local_a8 = uVar11;
                    (*(code *)PTR__objc_release_02578630)(uVar3);
                    (*(code *)PTR__objc_release_02578630)(uVar10);
                    (*(code *)PTR__objc_release_02578630)(uVar6);
                    (*(code *)PTR__objc_release_02578630)(uVar5);
                  }
                  uVar6 = local_28;
                  pcVar4 = local_40;
                  uVar5 = local_60;
                  uVar3 = local_a8;
                  bVar1 = true;
                  bVar2 = (local_79 & 1) == 0;
                  if (bVar2) {
                    local_b0 = local_28;
                    FUN_00011760();
                    _objc_retainAutoreleasedReturnValue();
                    uVar10 = local_b0;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    bVar1 = uVar10 != 0;
                  }
                  FUN_00012158(uVar3,uVar6,uVar5,pcVar4,bVar1);
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = local_a8;
                  local_a8 = uVar3;
                  (*(code *)PTR__objc_release_02578630)(uVar5);
                  if (bVar2) {
                    (*(code *)PTR__objc_release_02578630)(local_b0);
                  }
                  uVar3 = local_a8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
                  if (uVar3 != 0) {
                    FUN_0002b88c(local_a8,local_60,local_28,local_70,0);
                  }
                  local_38 = (uint)(uVar3 == 0);
                  _objc_storeStrong(&local_a8,0);
                }
              }
            }
LAB_0002ac5c:
            _objc_storeStrong(&local_78,0);
          }
          _objc_storeStrong(&local_70);
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      else {
        local_38 = 1;
      }
    }
    else {
      local_38 = 1;
    }
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_40,0);
LAB_0002acbc:
  _objc_storeStrong(&local_28,0);
  return;
}

