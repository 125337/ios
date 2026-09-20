// FUN_01568640 @ 01568640

byte FUN_01568640(undefined8 param_1,byte param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined4 local_114;
  ulong local_108;
  ulong local_f8;
  undefined *local_e0;
  char *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  ulong local_b8;
  byte local_a9;
  ulong local_a8;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  ulong local_88;
  char *local_80;
  undefined *local_78;
  ulong local_70;
  char *local_68;
  ulong local_60;
  ulong local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  byte local_31;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_31 = param_2;
  if ((local_30 == 0) || (uVar2 = local_30, FUN_01565620(), (uVar2 & 1) != 0)) {
    local_21 = 0;
    local_38 = 1;
  }
  else {
    FUN_01563370();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    FUN_01532090();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_48 = uVar2;
    FUN_01564574();
    local_49 = (byte)uVar3;
    uVar2 = local_30;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_58 = uVar2;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = "CContact";
    local_60 = uVar3;
    _objc_getClass();
    local_68 = pcVar4;
    if ((local_40 == 0) || (local_48 == 0)) {
      local_21 = 0;
      local_38 = 1;
    }
    else {
      uVar2 = local_30;
      FUN_015696f0(local_30,local_48);
      if ((uVar2 & 1) == 0) {
        local_21 = 0;
        local_38 = 1;
      }
      else if (((local_49 & 1) == 0) || ((local_31 & 1) != 0)) {
        FUN_01569a40();
        _objc_retainAutoreleasedReturnValue();
        local_78 = PTR_s_getService__0269d170;
        pcVar4 = "WCRedEnvelopesControlMgr";
        local_70 = uVar2;
        _objc_getClass();
        uVar2 = local_48;
        local_80 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,local_68);
        local_91 = 0;
        bVar1 = (uVar2 & 1) == 0;
        if (bVar1) {
          local_f8 = local_60;
          FUN_0155771c();
          _objc_retainAutoreleasedReturnValue();
          local_90 = local_f8;
        }
        else {
          local_f8 = local_48;
        }
        local_91 = bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_88 = local_f8;
        if ((local_91 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,local_68);
        local_a9 = 0;
        bVar1 = (uVar2 & 1) == 0;
        if (bVar1) {
          local_108 = local_58;
          FUN_0155771c();
          _objc_retainAutoreleasedReturnValue();
          local_a8 = local_108;
        }
        else {
          local_108 = local_30;
        }
        local_a9 = bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = local_108;
        if ((local_a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a8);
        }
        if (((local_70 == 0) || (local_80 == (char *)0x0)) ||
           (uVar2 = local_70,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_70,PTR_s_respondsToSelector__026ca818,local_78), (uVar2 & 1) == 0)) {
          local_21 = 0;
          local_38 = 1;
        }
        else {
          uVar2 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isKindOfClass__0269cd68,local_68);
          if ((uVar2 & 1) == 0) {
            local_21 = 0;
            local_38 = 1;
          }
          else {
            uVar2 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,local_78,local_80);
            _objc_retainAutoreleasedReturnValue();
            local_b8 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,local_80);
            if ((uVar2 & 1) == 0) {
              local_21 = 0;
              local_38 = 1;
            }
            else {
              if ((local_31 & 1) == 0) {
                uVar2 = local_48;
                FUN_01564574();
                local_114 = 2;
                if ((uVar2 & 1) == 0) {
                  local_114 = 1;
                }
              }
              else {
                local_114 = 2;
              }
              local_bc = local_114;
              local_c8 = 0;
              if (((local_31 & 1) != 0) &&
                 (uVar2 = local_b8,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_b8,PTR_s_respondsToSelector__026ca818,
                            PTR_s_refreshCurrentRedEnvLaunchMode__026b0628), (uVar2 & 1) != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b8,PTR_s_refreshCurrentRedEnvLaunchMode__026b0628,0);
              }
              if (((local_49 & 1) == 0) && (uVar2 = local_48, FUN_01564574(), (uVar2 & 1) != 0)) {
                pcVar4 = "WCRedEnvelopesControlData";
                _objc_getClass();
                local_d0 = pcVar4;
                if ((pcVar4 == (char *)0x0) ||
                   ((uVar2 = local_58,
                    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
                    uVar2 == 0 ||
                    (uVar2 = local_a0,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_a0,PTR_s_isKindOfClass__0269cd68,local_68), (uVar2 & 1) == 0)))
                   ) {
                  local_21 = 0;
                  local_38 = 1;
                }
                else {
                  uVar2 = local_b8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_b8,PTR_s_respondsToSelector__026ca818,
                             PTR_s_refreshCurrentRedEnvLaunchMode__026b0628);
                  if ((uVar2 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_b8,PTR_s_refreshCurrentRedEnvLaunchMode__026b0628,2);
                  }
                  pcVar4 = local_d0;
                  _objc_alloc_init();
                  local_d8 = pcVar4;
                  if (pcVar4 == (char *)0x0) {
                    local_21 = 0;
                  }
                  else {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar4,PTR_s_respondsToSelector__026ca818,
                               PTR_s_setM_oSelectContact__026b0630);
                    if (((ulong)pcVar4 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_d8,PTR_s_setM_oSelectContact__026b0630,local_88);
                    }
                    pcVar4 = local_d8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d8,PTR_s_respondsToSelector__026ca818,
                               PTR_s_setSelectedMemberContact__026b0638);
                    if (((ulong)pcVar4 & 1) != 0) {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_d8,PTR_s_setSelectedMemberContact__026b0638,local_a0);
                    }
                    pcVar4 = local_d8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d8,PTR_s_respondsToSelector__026ca818,
                               PTR_s_setM_arrSelectedSendRedEnvelopes_026b0640);
                    if (((ulong)pcVar4 & 1) != 0) {
                      puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSMutableArray_026ce088,
                                 PTR_s_arrayWithObject__0269d538,local_58);
                      _objc_retainAutoreleasedReturnValue();
                      local_e0 = puVar5;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_d8,PTR_s_setM_arrSelectedSendRedEnvelopes_026b0640,puVar5);
                      _objc_storeStrong(&local_e0,0);
                    }
                    uVar2 = local_b8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_b8,PTR_s_respondsToSelector__026ca818,
                               PTR_s_startSendRedEnvelopesLogic_Data__026b0648);
                    if ((uVar2 & 1) == 0) {
                      local_21 = 0;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_b8,PTR_s_startSendRedEnvelopesLogic_Data__026b0648,local_40,
                                 local_d8,local_88,local_bc,local_c8);
                      local_21 = 1;
                    }
                  }
                  local_38 = 1;
                  _objc_storeStrong(&local_d8,0);
                }
              }
              else {
                uVar2 = local_b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_b8,PTR_s_respondsToSelector__026ca818,
                           PTR_s_startSendRedEnvelopesLogic_WithS_026b0650);
                if ((uVar2 & 1) == 0) {
                  local_21 = 0;
                  local_38 = 1;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_b8,PTR_s_startSendRedEnvelopesLogic_WithS_026b0650,local_40,
                             local_88,local_bc,local_c8);
                  local_21 = 1;
                  local_38 = 1;
                }
              }
            }
            _objc_storeStrong(&local_b8,0);
          }
        }
        _objc_storeStrong(&local_a0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_70,0);
      }
      else {
        puVar5 = PTR_s_onRedEnvelopesControlLogic_026b0618;
        FUN_015698b0(PTR_s_onRedEnvelopesControlLogic_026b0618,PTR_s_onRedEnvelopesClicked__026b0620
                     ,&cf_red_envelope_group);
        local_21 = (byte)puVar5 & 1;
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

