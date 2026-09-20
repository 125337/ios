// FUN_00165e9c @ 00165e9c

byte FUN_00165e9c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_1d8;
  cfstringStruct *local_190;
  byte local_a9;
  char *local_a8;
  cfstringStruct *local_a0;
  undefined4 local_94;
  ulong local_90;
  ulong local_88;
  cfstringStruct *local_80;
  undefined4 local_74;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (local_38 == 0)) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    pcVar2 = "ChatRoomTopMsgInfo";
    _objc_getClass();
    local_50 = (cfstringStruct *)pcVar2;
    if ((cfstringStruct *)pcVar2 == (cfstringStruct *)0x0) {
      local_21 = 0;
      local_48 = 1;
    }
    else {
      local_58 = 0;
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_n64MesSvrID_0269d3e0);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_n64MesSvrID_0269d3e0);
        local_58 = uVar1;
      }
      if (local_58 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_mo_fNSn_v);
        local_21 = 0;
        local_48 = 1;
      }
      else {
        uVar1 = local_30;
        FUN_00166b84(local_30,local_58);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_30;
          FUN_0015e890();
          _objc_retainAutoreleasedReturnValue();
          local_60 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_count_0269cfe0);
          if (4 < uVar1) {
            uVar1 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            local_68 = uVar1;
            FUN_0015ecd4();
            local_70 = uVar1;
            if (uVar1 == 0) {
              uVar1 = local_68;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_topId_0269f790);
              if ((uVar1 & 1) != 0) {
                uVar1 = local_68;
                (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_topId_0269f790);
                local_74 = (undefined4)uVar1;
                FUN_001657e4(local_30,uVar1 & 0xffffffff);
              }
            }
            else {
              FUN_00164568(uVar1,local_30,uVar1);
            }
            _objc_storeStrong(&local_68,0);
          }
          local_80 = (cfstringStruct *)0x0;
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsRealChatUsr_0269d190);
          if ((uVar1 & 1) != 0) {
            uVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsRealChatUsr_0269d190);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_88 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
            if (((uVar1 & 1) != 0) &&
               (uVar1 = local_88,
               (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0), uVar1 != 0)) {
              _objc_storeStrong(uVar1,&local_80,local_88);
            }
            _objc_storeStrong(&local_88,0);
          }
          pcVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
          if ((pcVar4 == (cfstringStruct *)0x0) &&
             (uVar1 = local_38,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFromUsr_0269d088),
             (uVar1 & 1) != 0)) {
            uVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsFromUsr_0269d088);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_90 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar1 & 1) != 0) {
              _objc_storeStrong(&local_80,local_90);
            }
            _objc_storeStrong(&local_90,0);
          }
          pcVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
          if (pcVar4 == (cfstringStruct *)0x0) {
            FUN_001637c0();
            _objc_retainAutoreleasedReturnValue();
            local_190 = pcVar4;
            if (pcVar4 == (cfstringStruct *)0x0) {
              local_190 = &cf___;
            }
            _objc_storeStrong(&local_80,local_190);
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          local_94 = 0;
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMessageType_0269d0a8);
          if ((uVar1 & 1) != 0) {
            uVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_uiMessageType_0269d0a8);
            local_94 = (undefined4)uVar1;
          }
          pcVar4 = local_50;
          _objc_alloc_init();
          local_a0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_setUserName__0269f680);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setUserName__0269f680,local_30);
          }
          pcVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setTopId__0269f688);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_setTopId__0269f688,local_58 & 0xffffffff);
          }
          pcVar5 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setOpUserName__0269f690);
          pcVar4 = local_a0;
          puVar3 = PTR_s_setOpUserName__0269f690;
          if (((ulong)pcVar5 & 1) != 0) {
            FUN_001637c0();
            _objc_retainAutoreleasedReturnValue();
            local_1d8 = pcVar5;
            if (pcVar5 == (cfstringStruct *)0x0) {
              local_1d8 = &cf___;
            }
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar3,local_1d8);
            (*(code *)PTR__objc_release_02578630)(pcVar5);
          }
          pcVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setMsgSvrID__0269f698);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setMsgSvrID__0269f698,local_58);
          }
          pcVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setMsgType__0269f6a0);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setMsgType__0269f6a0,local_94);
          }
          pcVar5 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setMsgSummary__0269f6a8);
          pcVar4 = local_a0;
          puVar3 = PTR_s_setMsgSummary__0269f6a8;
          if (((ulong)pcVar5 & 1) != 0) {
            uVar1 = local_38;
            FUN_00163a20();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar3);
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          pcVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setStatus__0269f6b0);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setStatus__0269f6b0,0);
          }
          pcVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setMsgUserName__0269f6b8);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setMsgUserName__0269f6b8,local_80);
          }
          pcVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setIsRevoke__0269f6c0);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setIsRevoke__0269f6c0,0);
          }
          pcVar4 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_setExposureTime__0269f6c8);
          if (((ulong)pcVar4 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setExposureTime__0269f6c8,0);
          }
          pcVar2 = "CContactMgr";
          _objc_getClass();
          FUN_0015f0b8();
          _objc_retainAutoreleasedReturnValue();
          local_a9 = 0;
          local_a8 = pcVar2;
          if ((pcVar2 != (char *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_respondsToSelector__026ca818,
                         PTR_s_addChatRoomTopMsgLocalWithUserNa_0269f7b0), ((ulong)pcVar2 & 1) != 0)
             ) {
            pcVar2 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a8,PTR_s_addChatRoomTopMsgLocalWithUserNa_0269f7b0,local_30,local_a0);
            local_a9 = (byte)pcVar2;
          }
          local_21 = local_a9 & 1;
          local_48 = 1;
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_a0,0);
          _objc_storeStrong(&local_80,0);
          _objc_storeStrong(&local_60,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__n_v);
          local_21 = 1;
          local_48 = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

