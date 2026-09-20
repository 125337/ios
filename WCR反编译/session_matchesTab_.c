// session:matchesTab: @ 015218a0

/* Function Stack Size: 0x20 bytes */

bool __thiscall
WCRefineTelegramGroupingStore::session_matchesTab_
          (WCRefineTelegramGroupingStore *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  double in_d0;
  byte local_e0;
  byte local_dc;
  cfstringStruct *local_d0;
  bool local_a1;
  long local_98;
  undefined1 *local_80;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_4c;
  undefined *local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = (undefined1 *)0x0;
  _objc_storeStrong(&local_48,param_4);
  if (local_48 == (undefined1 *)0x0) {
    local_21 = 1;
    local_4c = 1;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefineGroupDataProvider_026ce540;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_usernameForNativeObject__026a2c08,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_d0 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_d0;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
               local_60);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_kind_026a27e8);
      if (puVar2 == (undefined1 *)0x0) {
        local_21 = 1;
      }
      else {
        IVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_shouldHideBoundSessionFromBuilti_026b02a0,local_48);
        if (((IVar3 & 1) == 0) ||
           (IVar3 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_30,PTR_s_sessionBelongsToBoundCustomTab_u_026b02a8,local_40,local_60),
           (IVar3 & 1) == 0)) {
          IVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_effectiveScopeMaskForTab__026b0298,local_48);
          puVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_kind_026a27e8);
          if (puVar2 == (undefined1 *)((long)&MACH_HEADER.cputype + 1)) {
            pcVar1 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
            local_dc = 0;
            if (pcVar1 != (cfstringStruct *)0x0) {
              puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefinePrivateFriendManager_026ce160,
                         PTR_s_isSelectedUsername__026afed0,local_60);
              local_dc = (byte)puVar2;
            }
            local_21 = local_dc & 1;
          }
          else {
            puVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_kind_026a27e8);
            if (puVar2 + -2 == (undefined1 *)0x0) {
              pcVar1 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
              local_e0 = 0;
              if (pcVar1 != (cfstringStruct *)0x0) {
                IVar3 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_session_matchesCustomTab_usernam_026b0290,local_40,
                           local_48,local_60);
                local_e0 = (byte)IVar3;
              }
              local_21 = local_e0 & 1;
            }
            else {
              pcVar1 = local_60;
              FUN_01520f2c(puVar2 + -2,local_60,local_40);
              puVar2 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_kind_026a27e8);
              if ((dword *)puVar2 == &MACH_HEADER.cputype) {
                local_21 = (byte)pcVar1 & 1;
              }
              else if (((ulong)pcVar1 & 1) == 0) {
                puVar2 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tabId_026a8270);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(puVar2);
                if (((ulong)puVar4 & 1) == 0) {
                  pcVar1 = local_60;
                  FUN_015221cc();
                  if (((ulong)pcVar1 & 1) == 0) {
                    puVar2 = local_48;
                    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_kind_026a27e8);
                    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
                      puVar2 = local_48;
                      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_recentDays_026b0128);
                      if ((long)puVar2 < 1) {
                        puVar2 = PTR_WCRefineConfig_026cdf58;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                        _objc_retainAutoreleasedReturnValue();
                        local_80 = puVar2;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                      }
                      else {
                        local_80 = local_48;
                        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_recentDays_026b0128);
                      }
                      puVar4 = local_80 + -1;
                      if ((long)local_80 < 1) {
                        puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
                        local_80 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
                      }
                      local_98 = local_40;
                      FUN_01520288(puVar4,local_40,&cf_m_uLastTime);
                      if (local_98 < 1) {
                        local_21 = 0;
                      }
                      else {
                        if (1000000000000 < local_98) {
                          local_98 = local_98 / 1000;
                        }
                        puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
                        _objc_retainAutoreleasedReturnValue();
                        (*(code *)PTR__objc_msgSend_02578628)();
                        (*(code *)PTR__objc_release_02578630)(puVar2);
                        local_21 = (long)in_d0 - local_98 <= (long)local_80 * 0x15180 &&
                                   -1 < (long)in_d0 - local_98;
                      }
                    }
                    else {
                      local_a1 = false;
                      if ((IVar3 & 0x1f) != 0) {
                        pcVar1 = local_58;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_58,PTR_s_groupScopeForNativeSession__026a2c60,local_40);
                        local_a1 = ((ulong)pcVar1 & IVar3 & 0x1f) != 0;
                      }
                      uVar6 = (uint)IVar3;
                      if ((local_a1 == false) && ((uVar6 >> 5 & 1) != 0)) {
                        lVar5 = local_40;
                        FUN_0152119c(local_40,&cf_m_bIsTop);
                        local_a1 = SUB81(lVar5,0);
                      }
                      if (((local_a1 & 1U) == 0) && ((uVar6 >> 6 & 1) != 0)) {
                        lVar5 = local_40;
                        FUN_01520288(local_40,&cf_m_uUnReadCount);
                        local_a1 = 0 < lVar5;
                      }
                      if (((local_a1 & 1U) == 0) && ((uVar6 >> 7 & 1) != 0)) {
                        IVar3 = local_30;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_30,PTR_s_sessionHasAtMeHint_username__026b0288,local_40,
                                   local_60);
                        local_a1 = SUB81(IVar3,0);
                      }
                      local_21 = local_a1 & 1;
                    }
                  }
                  else {
                    local_21 = (IVar3 & 0x18) != 0;
                  }
                }
                else {
                  pcVar1 = local_60;
                  FUN_015221cc();
                  if (((ulong)pcVar1 & 1) == 0) {
                    pcVar1 = local_58;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_58,PTR_s_groupScopeForNativeSession__026a2c60,local_40);
                    if (((ulong)pcVar1 & 3) == 0) {
                      if ((((uint)pcVar1 >> 2 & 1) == 0) ||
                         (IVar3 = local_30,
                         (*(code *)PTR__objc_msgSend_02578628)
                                   (local_30,PTR_s_hasVisibleOfficialTab_026b02b0), (IVar3 & 1) == 0
                         )) {
                        local_21 = 1;
                      }
                      else {
                        local_21 = 0;
                      }
                    }
                    else {
                      local_21 = 0;
                    }
                  }
                  else {
                    local_21 = 1;
                  }
                }
              }
              else {
                puVar2 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tabId_026a8270);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_21 = (byte)puVar4 & 1;
                (*(code *)PTR__objc_release_02578630)(puVar2);
              }
            }
          }
        }
        else {
          local_21 = 0;
        }
      }
    }
    else {
      local_21 = 0;
    }
    local_4c = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

