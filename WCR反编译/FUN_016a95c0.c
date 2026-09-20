// FUN_016a95c0 @ 016a95c0

void FUN_016a95c0(undefined8 param_1,byte param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  cfstringStruct *local_1c0;
  byte local_11c;
  cfstringStruct *local_118;
  long local_d8;
  cfstringStruct *local_d0;
  long local_c8;
  byte local_b9;
  char *local_b8;
  char *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined1 local_79;
  char *local_78;
  char *local_70;
  char *local_68;
  byte local_59;
  cfstringStruct *local_58;
  long local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  byte local_29;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_29 = param_2;
  if ((local_28 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_28, FUN_016aa590(), ((ulong)pcVar1 & 1) != 0)) {
    local_40 = 1;
  }
  else {
    if ((local_29 & 1) != 0) {
      FUN_016aa68c();
    }
    FUN_016aa7d8();
    pcVar2 = local_28;
    local_48 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_uiMessageType_0269d0a8);
    local_50 = (long)(int)pcVar2;
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsContent_0269d0a0);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_118 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_118;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_11c = 0;
    if (local_50 == 0x31) {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_containsString__0269d0b0,&cf_<refermsg);
      local_11c = (byte)pcVar1;
    }
    local_59 = local_11c & 1;
    FUN_016aa94c(local_28);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      pcVar1 = local_28;
      FUN_016ab488();
      if (((ulong)pcVar1 & 1) == 0) {
        if ((((local_50 == 1) || (local_50 == 3)) || (local_50 == 0x2f)) || ((local_59 & 1) != 0)) {
          if (DAT_028e3e68 == (char *)0x0) {
            pcVar7 = "MMServiceCenter";
            _objc_getClass();
            DAT_028e3e68 = pcVar7;
          }
          pcVar7 = DAT_028e3e68;
          _objc_retainAutoreleaseReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_defaultCenter_026ca5e0);
          _objc_retainAutoreleasedReturnValue();
          if (DAT_028e3e70 == (char *)0x0) {
            pcVar5 = "CContactMgr";
            _objc_getClass();
            DAT_028e3e70 = pcVar5;
          }
          pcVar5 = DAT_028e3e70;
          _objc_retainAutoreleaseReturnValue();
          pcVar6 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_getService__0269d170,pcVar5);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          if (local_68 == (char *)0x0) {
            local_40 = 1;
          }
          else {
            pcVar7 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getSelfContact_0269da60);
            _objc_retainAutoreleasedReturnValue();
            local_70 = pcVar7;
            if (pcVar7 == (char *)0x0) {
              local_40 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
              _objc_retainAutoreleasedReturnValue();
              local_78 = pcVar7;
              if (pcVar7 == (char *)0x0) {
                local_40 = 1;
              }
              else {
                pcVar1 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsFromUsr_0269d088);
                _objc_retainAutoreleasedReturnValue();
                pcVar2 = pcVar1;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(pcVar1);
                local_79 = SUB81(pcVar2,0);
                local_91 = 0;
                local_a1 = 0;
                local_1c0 = local_28;
                if (((ulong)pcVar2 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsFromUsr_0269d088);
                  _objc_retainAutoreleasedReturnValue();
                  local_a1 = 1;
                  local_a0 = local_1c0;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_m_nsToUsr_0269d090);
                  _objc_retainAutoreleasedReturnValue();
                  local_91 = 1;
                  local_90 = local_1c0;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_88 = local_1c0;
                if ((local_a1 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_a0);
                }
                if ((local_91 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_90);
                }
                if (local_88 == (cfstringStruct *)0x0) {
                  local_40 = 1;
                }
                else {
                  local_b0 = (char *)0x0;
                  if ((local_50 == 3) &&
                     (pcVar7 = local_68,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_68,PTR_s_respondsToSelector__026ca818,
                                PTR_s_getContactByName__0269d178), ((ulong)pcVar7 & 1) != 0)) {
                    pcVar5 = local_68;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_68,PTR_s_getContactByName__0269d178,local_88);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_b0;
                    local_b0 = pcVar5;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                  }
                  if (DAT_028e3e68 == (char *)0x0) {
                    pcVar7 = "MMServiceCenter";
                    _objc_getClass();
                    DAT_028e3e68 = pcVar7;
                  }
                  pcVar7 = DAT_028e3e68;
                  _objc_retainAutoreleaseReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_defaultCenter_026ca5e0);
                  _objc_retainAutoreleasedReturnValue();
                  if (DAT_028e3e78 == (char *)0x0) {
                    pcVar5 = "CMessageMgr";
                    _objc_getClass();
                    DAT_028e3e78 = pcVar5;
                  }
                  pcVar5 = DAT_028e3e78;
                  _objc_retainAutoreleaseReturnValue();
                  pcVar6 = pcVar7;
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_getService__0269d170,pcVar5);
                  _objc_retainAutoreleasedReturnValue();
                  local_b8 = pcVar6;
                  (*(code *)PTR__objc_release_02578630)(pcVar7);
                  if (local_b8 != (char *)0x0) {
                    local_b9 = 0;
                    for (local_c8 = 0; local_c8 < (long)local_48; local_c8 = local_c8 + 1) {
                      local_d0 = (cfstringStruct *)0x0;
                      if (local_50 == 3) {
                        pcVar2 = local_28;
                        FUN_016ab708(0,local_28,local_78,local_88,local_b0);
                        _objc_retainAutoreleasedReturnValue();
                        pcVar1 = local_d0;
                        local_d0 = pcVar2;
                        (*(code *)PTR__objc_release_02578630)(pcVar1);
                      }
                      else {
                        if (DAT_028e3e80 == (cfstringStruct *)0x0) {
                          pcVar7 = "CMessageWrap";
                          _objc_getClass();
                          DAT_028e3e80 = (cfstringStruct *)pcVar7;
                        }
                        pcVar1 = DAT_028e3e80;
                        _objc_retainAutoreleaseReturnValue();
                        _objc_alloc();
                        pcVar2 = local_28;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_28,PTR_s_m_uiMessageType_0269d0a8);
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (pcVar1,PTR_s_initWithMsgType_nsFromUsr__026a9ae8,
                                   (long)(int)pcVar2,local_78);
                        pcVar2 = local_d0;
                        local_d0 = pcVar1;
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                        if (local_d0 != (cfstringStruct *)0x0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_28,PTR_s_copyToMsg__026a9b68,local_d0);
                          FUN_016abc9c(local_d0,local_78,local_88);
                        }
                      }
                      if (local_d0 == (cfstringStruct *)0x0) {
                        lVar8 = 4;
                        local_40 = 4;
                      }
                      else {
                        if (local_50 == 0x2f) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_b8,PTR_s_AddEmoticonMsg_MsgWrap__026a1e58,local_88,
                                     local_d0);
                        }
                        else {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_b8,PTR_s_AddMsg_MsgWrap__0269d040,local_88,local_d0);
                        }
                        lVar8 = local_50 + -3;
                        if (lVar8 == 0) {
                          lVar8 = 1;
                          local_b9 = 1;
                        }
                        local_40 = 0;
                      }
                      _objc_storeStrong(lVar8,&local_d0,0);
                    }
                    if ((local_50 == 3) && ((local_b9 & 1) == 0)) {
                      FUN_016abf68(&cf_VGrY1Y_VGrSgRNS_u);
                    }
                  }
                  local_40 = 1;
                  _objc_storeStrong(&local_b8);
                  _objc_storeStrong(&local_b0,0);
                }
                _objc_storeStrong(&local_88,0);
              }
              _objc_storeStrong(&local_78,0);
            }
            _objc_storeStrong(&local_70,0);
          }
          _objc_storeStrong(&local_68,0);
        }
        else {
          pcVar1 = &cf_HBHelperUtil;
          _NSClassFromString();
          if ((pcVar1 == (cfstringStruct *)0x0) || (local_50 == 3)) {
            pcVar1 = local_28;
            FUN_016aaa88(0,local_28,local_48);
            if (((ulong)pcVar1 & 1) == 0) {
              local_40 = 0;
            }
            else {
              local_40 = 1;
            }
          }
          else {
            for (local_d8 = 0; local_d8 < (long)local_48; local_d8 = local_d8 + 1) {
              if (DAT_028e3e88 == (char *)0x0) {
                pcVar7 = "HBHelperUtil";
                _objc_getClass();
                DAT_028e3e88 = pcVar7;
              }
              pcVar7 = DAT_028e3e88;
              _objc_retainAutoreleaseReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar7,PTR_s_rereadMessageWrap__026b2b68,local_28);
            }
            local_40 = 1;
          }
        }
      }
      else {
        FUN_016aaa88(local_28,local_48);
        local_40 = 1;
      }
    }
    else {
      FUN_016aaa88(local_28,local_48);
      local_40 = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

