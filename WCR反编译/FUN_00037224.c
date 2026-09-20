// FUN_00037224 @ 00037224

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00037224(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_2f0;
  ulong local_288;
  ulong *local_1b8;
  uint local_194;
  bool local_e1;
  ulong local_e0;
  ulong local_c8;
  ulong local_b8;
  ulong local_a8;
  ulong local_98;
  ulong local_90;
  byte local_81;
  ulong local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  char *local_50;
  undefined4 local_48;
  char *local_38;
  ulong local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = "WCPayControlData";
  _objc_getClass();
  uVar4 = local_30;
  local_38 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) != 0) {
      pcVar1 = local_38;
      _objc_alloc_init();
      local_50 = pcVar1;
      if (pcVar1 == (char *)0x0) {
        local_28 = (char *)0x0;
        local_48 = 1;
      }
      else {
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_currentUser);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_receiverUser);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_payerUser);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_81 = 0;
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_isChatroom);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_194 = 0;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_isChatroom);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_194 = (uint)uVar3;
        }
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        (*(code *)PTR__objc_release_02578630)(uVar4);
        local_71 = (byte)local_194 & 1;
        if (((local_194 & 1) == 0) ||
           (uVar4 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
           uVar4 == 0)) {
          local_1b8 = &local_58;
        }
        else {
          local_1b8 = &local_60;
        }
        uVar4 = *local_1b8;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
        if (uVar4 == 0) {
          _objc_storeStrong(&local_90,local_60);
        }
        pcVar1 = local_50;
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_transferID);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        FUN_000389fc(pcVar1,&cf_m_nsTransferID);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        pcVar1 = local_50;
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_transID);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        FUN_000389fc(pcVar1,&cf_m_nsControlTransationID);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        FUN_000389fc(local_50,&cf_m_nsCurrentUserName,local_90);
        FUN_000389fc(local_50,&cf_m_tarnsferPayerUserName,local_70);
        FUN_000389fc(local_50,&cf_m_receiverUserName,local_68);
        pcVar1 = local_50;
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_payerName);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        FUN_000389fc(pcVar1,&cf_m_payerNickname);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        pcVar1 = local_50;
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_rawAmount);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (uVar5 == 0) {
          local_b8 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
          _objc_retainAutoreleasedReturnValue();
          local_288 = local_b8;
          FUN_0003102c();
          _objc_retainAutoreleasedReturnValue();
          local_c8 = local_288;
        }
        else {
          local_98 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_rawAmount);
          _objc_retainAutoreleasedReturnValue();
          local_288 = local_98;
          FUN_0003102c();
          _objc_retainAutoreleasedReturnValue();
          local_a8 = local_288;
        }
        FUN_000389fc(pcVar1,&cf_m_nsTranferMoneyString,local_288);
        if (uVar5 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_c8);
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        else {
          (*(code *)PTR__objc_release_02578630)(local_a8);
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        pcVar1 = local_50;
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_transferAttach);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        FUN_000389fc(pcVar1,&cf_m_nsTransferAttach);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        FUN_00038c30(local_50,&cf_m_isSender,0);
        if ((local_71 & 1) != 0) {
          FUN_000389fc(local_50,&cf_selectedTransferChatroomUsername,local_58);
        }
        uVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_invalidTime);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_e1 = (uVar3 & 1) == 0;
        if (local_e1) {
          local_2f0 = 0;
        }
        else {
          local_e0 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_invalidTime);
          _objc_retainAutoreleasedReturnValue();
          local_2f0 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)();
        }
        local_e1 = !local_e1;
        if (local_e1) {
          (*(code *)PTR__objc_release_02578630)(local_e0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar4);
        FUN_00038e3c(local_50,&cf_m_uiTransferInvalidTime,local_2f0);
        pcVar1 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_48 = 1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_60,0);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50,0);
      goto LAB_000382f8;
    }
  }
  local_28 = (char *)0x0;
  local_48 = 1;
LAB_000382f8:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

