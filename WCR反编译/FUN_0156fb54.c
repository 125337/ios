// FUN_0156fb54 @ 0156fb54

byte FUN_0156fb54(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_118;
  char *local_f8;
  char *local_e0;
  char *local_d8;
  byte local_c9;
  char *local_c8;
  char *local_c0;
  byte local_b1;
  char *local_b0;
  byte local_a1;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  undefined *local_78;
  char *local_70;
  char *local_68;
  byte local_5a;
  byte local_59;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  byte local_21;
  
  local_30 = (char *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if ((local_30 == (char *)0x0) || (pcVar2 = local_30, FUN_01565620(), ((ulong)pcVar2 & 1) != 0)) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    pcVar2 = local_30;
    FUN_01579760();
    if (((ulong)pcVar2 & 1) == 0) {
      FUN_01563370();
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar2;
      FUN_01532090();
      _objc_retainAutoreleasedReturnValue();
      local_50 = (char *)0x0;
      pcVar3 = local_40;
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_GetContact_0269d2c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      if (local_50 == (char *)0x0) {
        _objc_storeStrong(&local_50,local_48);
      }
      pcVar2 = local_30;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_30;
      local_58 = pcVar2;
      FUN_01564574();
      local_59 = (byte)pcVar3;
      pcVar2 = local_30;
      FUN_0157804c();
      local_5a = (byte)pcVar2;
      pcVar2 = "CContact";
      _objc_getClass();
      local_68 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_21 = 0;
        local_34 = 1;
      }
      else if (local_40 == (char *)0x0) {
        local_21 = 0;
        local_34 = 1;
      }
      else if (((local_59 & 1) == 0) ||
              (pcVar2 = local_30, FUN_015696f0(local_30,local_48), ((ulong)pcVar2 & 1) != 0)) {
        if ((local_59 & 1) == 0) {
          FUN_01569a40();
          _objc_retainAutoreleasedReturnValue();
          local_78 = PTR_s_getService__0269d170;
          pcVar3 = "WCPayControlMgr";
          local_70 = pcVar2;
          _objc_getClass();
          pcVar2 = "WCPayControlData";
          local_80 = pcVar3;
          _objc_getClass();
          local_88 = pcVar2;
          FUN_0157a074();
          pcVar3 = local_50;
          local_90 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_68);
          local_a1 = 0;
          local_b1 = 0;
          bVar1 = ((ulong)pcVar3 & 1) == 0;
          if (bVar1) {
            local_f8 = local_50;
            FUN_01528d34();
            _objc_retainAutoreleasedReturnValue();
            local_a1 = 1;
            local_a0 = local_f8;
            FUN_0155771c();
            _objc_retainAutoreleasedReturnValue();
            local_b0 = local_f8;
          }
          else {
            local_f8 = local_50;
          }
          local_b1 = bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = local_f8;
          if ((local_b1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b0);
          }
          if ((local_a1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a0);
          }
          pcVar2 = local_58;
          FUN_0155771c();
          _objc_retainAutoreleasedReturnValue();
          local_c0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,local_68);
          if ((((ulong)pcVar2 & 1) == 0) &&
             (pcVar2 = local_30,
             (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,local_68),
             ((ulong)pcVar2 & 1) != 0)) {
            _objc_storeStrong(&local_c0,local_30);
          }
          pcVar2 = local_98;
          FUN_01528d34();
          _objc_retainAutoreleasedReturnValue();
          local_c8 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasSuffix__0269d018,&cf__chatroom);
          local_c9 = (byte)pcVar2;
          if (((local_5a & 1) == 0) && (((ulong)pcVar2 & 1) == 0)) {
            pcVar2 = local_30;
            FUN_01569b94();
            if (((ulong)pcVar2 & 1) == 0) {
              local_21 = 0;
              local_34 = 1;
            }
            else {
              puVar4 = PTR_s_onTransferMoneyControlLogic_026b0700;
              FUN_015698b0(PTR_s_onTransferMoneyControlLogic_026b0700,
                           PTR_s_onTransferButtonClicked__026b0708,&cf_transfer);
              if (((ulong)puVar4 & 1) == 0) {
                local_21 = 0;
                local_34 = 1;
              }
              else {
                local_21 = 1;
                local_34 = 1;
              }
            }
          }
          else if ((local_70 == (char *)0x0) ||
                  ((((local_80 == (char *)0x0 || (local_88 == (char *)0x0)) ||
                    (local_90 == (char *)0x0)) ||
                   (pcVar2 = local_70,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_70,PTR_s_respondsToSelector__026ca818,local_78),
                   ((ulong)pcVar2 & 1) == 0)))) {
            local_21 = 0;
            local_34 = 1;
          }
          else {
            pcVar2 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isKindOfClass__0269cd68,local_68);
            if ((((ulong)pcVar2 & 1) == 0) ||
               (pcVar2 = local_c0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_c0,PTR_s_isKindOfClass__0269cd68,local_68), ((ulong)pcVar2 & 1) == 0
               )) {
              local_21 = 0;
              local_34 = 1;
            }
            else {
              pcVar2 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
              if (pcVar2 == (char *)0x0) {
                local_21 = 0;
                local_34 = 1;
              }
              else {
                pcVar2 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,local_78,local_80);
                _objc_retainAutoreleasedReturnValue();
                local_d8 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,local_80)
                ;
                if (((ulong)pcVar2 & 1) == 0) {
                  local_21 = 0;
                  local_34 = 1;
                }
                else {
                  pcVar2 = local_88;
                  _objc_alloc_init();
                  local_e0 = pcVar2;
                  if (pcVar2 == (char *)0x0) {
                    local_21 = 0;
                  }
                  else {
                    if ((local_c9 & 1) != 0) {
                      pcVar2 = local_c0;
                      FUN_015781b8();
                      _objc_retainAutoreleasedReturnValue();
                      local_118 = pcVar2;
                      if (pcVar2 == (char *)0x0) {
                        local_118 = local_c0;
                      }
                      _objc_storeStrong(&local_c0,local_118);
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                    }
                    pcVar2 = local_e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e0,PTR_s_respondsToSelector__026ca818,
                               PTR_s_setM_nsSelectedUserNameFromQRCod_026b0710);
                    if (((ulong)pcVar2 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_e0,PTR_s_setM_nsSelectedUserNameFromQRCod_026b0710,local_58);
                    }
                    pcVar2 = local_e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e0,PTR_s_respondsToSelector__026ca818,
                               PTR_s_setM_oSelectedContact__026b0718);
                    if (((ulong)pcVar2 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_e0,PTR_s_setM_oSelectedContact__026b0718,local_c0);
                    }
                    if (((local_c9 & 1) != 0) &&
                       (pcVar2 = local_e0,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_e0,PTR_s_respondsToSelector__026ca818,
                                  PTR_s_setSelectedTransferChatroomUsern_026b0720),
                       ((ulong)pcVar2 & 1) != 0)) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_e0,PTR_s_setSelectedTransferChatroomUsern_026b0720,local_c8);
                    }
                    pcVar2 = local_e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e0,PTR_s_respondsToSelector__026ca818,
                               PTR_s_setSessionChatType__026b0728);
                    if (((ulong)pcVar2 & 1) != 0) {
                      pcVar2 = local_90;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_90,PTR_s_chatTypeValueFromTalker__026b0730,local_c8);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_e0,PTR_s_setSessionChatType__026b0728,pcVar2);
                    }
                    pcVar2 = local_e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_e0,PTR_s_respondsToSelector__026ca818,
                               PTR_s_setSessionSendType__026b0738);
                    if (((ulong)pcVar2 & 1) != 0) {
                      pcVar2 = local_90;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_90,PTR_s_commonSendTypeValue_026b0740);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_e0,PTR_s_setSessionSendType__026b0738,pcVar2);
                    }
                    pcVar2 = local_d8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d8,PTR_s_respondsToSelector__026ca818,
                               PTR_s_startTransferMoneyLogic_Data__026b0748);
                    if (((ulong)pcVar2 & 1) == 0) {
                      local_21 = 0;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_d8,PTR_s_startTransferMoneyLogic_Data__026b0748,local_40,
                                 local_e0);
                      local_21 = 1;
                    }
                  }
                  local_34 = 1;
                  _objc_storeStrong(&local_e0,0);
                }
                _objc_storeStrong(&local_d8,0);
              }
            }
          }
          _objc_storeStrong(&local_c8);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_98,0);
          _objc_storeStrong(&local_70,0);
        }
        else {
          puVar4 = PTR_s_onTransferMoneyControlLogic_026b0700;
          FUN_015698b0(PTR_s_onTransferMoneyControlLogic_026b0700,
                       PTR_s_onTransferButtonClicked__026b0708,&cf_transfer_group);
          local_21 = (byte)puVar4 & 1;
          local_34 = 1;
        }
      }
      else {
        local_21 = 0;
        local_34 = 1;
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_21 = 1;
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

