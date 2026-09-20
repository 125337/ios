// FUN_01579760 @ 01579760

byte FUN_01579760(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  ulong local_130;
  uint local_fc;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  char *local_c8;
  byte local_b9;
  ulong local_b8;
  byte local_a9;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  ulong local_90;
  char *local_88;
  undefined4 local_7c;
  undefined *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar1 = &DAT_028e38f0;
  _objc_loadWeakRetained();
  uVar2 = DAT_028e3900;
  local_38 = puVar1;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = DAT_028e38f8;
  local_40 = uVar2;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "CContact";
  local_48 = uVar3;
  _objc_getClass();
  pcVar5 = "MMContext";
  local_50 = pcVar4;
  _objc_getClass();
  pcVar4 = "WCPayControlMgr";
  local_58 = pcVar5;
  _objc_getClass();
  pcVar5 = "WCPayControlData";
  local_60 = pcVar4;
  _objc_getClass();
  local_68 = pcVar5;
  FUN_0157a074();
  puVar1 = local_38;
  local_78 = PTR_s_getService__0269d170;
  puVar6 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_70 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar6);
  if ((((ulong)puVar1 & 1) == 0) ||
     (uVar2 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasSuffix__0269d018,&cf__chatroom),
     (uVar2 & 1) == 0)) {
    local_21 = 0;
    local_7c = 1;
  }
  else {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      uVar3 = local_30;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_48;
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (((((uVar2 == 0) || (local_50 == (char *)0x0)) || (local_58 == (char *)0x0)) ||
        ((local_60 == (char *)0x0 || (local_68 == (char *)0x0)))) || (local_70 == (char *)0x0)) {
      local_21 = 0;
      local_7c = 1;
    }
    else {
      local_88 = (char *)0x0;
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_currentContext_0269d5f8);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_88;
        local_88 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      if ((local_88 == (char *)0x0) ||
         (pcVar4 = local_88,
         (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_respondsToSelector__026ca818,local_78)
         , ((ulong)pcVar4 & 1) == 0)) {
        local_21 = 0;
        local_7c = 1;
      }
      else {
        uVar2 = local_30;
        FUN_0157a0e8();
        _objc_retainAutoreleasedReturnValue();
        local_90 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,local_50);
        local_99 = 0;
        local_a9 = 0;
        local_b9 = 0;
        local_fc = 0;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,local_50);
          local_fc = 0;
          if ((uVar2 & 1) != 0) {
            uVar2 = local_30;
            FUN_01528d34();
            _objc_retainAutoreleasedReturnValue();
            local_99 = 1;
            local_98 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_a9 = 1;
            uVar3 = local_48;
            local_a8 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lowercaseString_0269d9c0);
            _objc_retainAutoreleasedReturnValue();
            local_b9 = 1;
            local_b8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
            local_fc = (uint)uVar2;
          }
        }
        if ((local_b9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        if ((local_a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        if ((local_99 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        if ((local_fc & 1) != 0) {
          _objc_storeStrong(&local_90,local_30);
        }
        uVar2 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_isKindOfClass__0269cd68,local_50);
        if ((uVar2 & 1) == 0) {
          local_21 = 0;
          local_7c = 1;
        }
        else {
          uVar2 = local_90;
          FUN_015781b8();
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar2;
          if (uVar2 == 0) {
            local_130 = local_90;
          }
          _objc_storeStrong(&local_90,local_130);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          pcVar4 = local_68;
          _objc_alloc_init();
          local_c8 = pcVar4;
          if (pcVar4 == (char *)0x0) {
            local_21 = 0;
            local_7c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_respondsToSelector__026ca818,
                       PTR_s_setM_nsSelectedUserNameFromQRCod_026b0710);
            if (((ulong)pcVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_setM_nsSelectedUserNameFromQRCod_026b0710,local_48);
            }
            pcVar4 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_respondsToSelector__026ca818,
                       PTR_s_setM_oSelectedContact__026b0718);
            if (((ulong)pcVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_setM_oSelectedContact__026b0718,local_90);
            }
            pcVar4 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_respondsToSelector__026ca818,
                       PTR_s_setSelectedTransferChatroomUsern_026b0720);
            if (((ulong)pcVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_setSelectedTransferChatroomUsern_026b0720,local_40);
            }
            local_d0 = (undefined *)0x0;
            puVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
            if (((ulong)puVar1 & 1) != 0) {
              puVar6 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_GetContact_0269d2c0);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = local_d0;
              local_d0 = puVar6;
              (*(code *)PTR__objc_release_02578630)(puVar1);
            }
            puVar1 = local_d0;
            FUN_01528d34();
            _objc_retainAutoreleasedReturnValue();
            local_d8 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
            if (puVar1 == (undefined *)0x0) {
              _objc_storeStrong(&local_d8,local_40);
            }
            pcVar4 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_respondsToSelector__026ca818,
                       PTR_s_setSessionChatType__026b0728);
            if (((ulong)pcVar4 & 1) != 0) {
              pcVar4 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_70,PTR_s_chatTypeValueFromTalker__026b0730,local_d8);
              local_e0 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_setSessionChatType__026b0728,pcVar4);
            }
            pcVar4 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_respondsToSelector__026ca818,
                       PTR_s_setSessionSendType__026b0738);
            if (((ulong)pcVar4 & 1) != 0) {
              pcVar4 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_commonSendTypeValue_026b0740);
              local_e8 = pcVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_setSessionSendType__026b0738,pcVar4);
            }
            pcVar4 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,local_78,local_60);
            _objc_retainAutoreleasedReturnValue();
            local_f0 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,local_60);
            if ((((ulong)pcVar4 & 1) == 0) ||
               (pcVar4 = local_f0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_f0,PTR_s_respondsToSelector__026ca818,
                          PTR_s_startTransferMoneyLogic_Data__026b0748), ((ulong)pcVar4 & 1) == 0))
            {
              local_21 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f0,PTR_s_startTransferMoneyLogic_Data__026b0748,local_38,local_c8);
              local_21 = 1;
            }
            local_7c = 1;
            _objc_storeStrong(&local_f0);
            _objc_storeStrong(&local_d8,0);
            _objc_storeStrong(&local_d0,0);
          }
          _objc_storeStrong(&local_c8,0);
        }
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_88,0);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

