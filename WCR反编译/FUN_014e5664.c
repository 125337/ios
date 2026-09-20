// FUN_014e5664 @ 014e5664

void FUN_014e5664(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  char *local_158;
  char *local_150;
  int local_12c;
  ulong local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  undefined *local_c0;
  char *local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "CContactMgr";
  _objc_getClass();
  FUN_014e23b8();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_b0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_b8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  _memset(auStack_108,0,0x40);
  pcVar1 = local_b0;
  FUN_014e6fbc();
  _objc_retainAutoreleasedReturnValue();
  local_150 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_150 != (char *)0x0) {
    lVar6 = *local_f8;
    local_158 = (char *)0x0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,pcVar1);
        }
        uVar7 = *(ulong *)(local_100 + (long)local_158 * 8);
        local_110 = 0;
        local_c8 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_110;
        local_110 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar7 = local_110;
        FUN_014dfa54();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_110;
        local_110 = uVar7;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        uVar4 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
        if ((uVar4 == 0) ||
           (puVar3 = local_c0,
           (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_containsObject__0269cbb8,local_110),
           ((ulong)puVar3 & 1) != 0)) {
          pcVar2 = (char *)((long)&MACH_HEADER.magic + 3);
          local_12c = 3;
        }
        else {
          puVar3 = PTR_WCRefineMessageBlockSupport_026ce0f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,local_110
                    );
          if ((((ulong)puVar3 & 1) == 0) && (uVar4 = local_110, FUN_014e76b8(), (uVar4 & 1) == 0)) {
            puVar3 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                       local_110);
            if (((ulong)puVar3 & 1) == 0) {
              puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefinePrivateFriendManager_026ce160,
                         PTR_s_shouldConcealUsername__0269fef8,local_110);
              if (((ulong)puVar3 & 1) == 0) {
                uVar4 = local_c8;
                FUN_014fce2c();
                if ((uVar4 & 1) == 0) {
                  pcVar2 = (char *)((long)&MACH_HEADER.magic + 3);
                  local_12c = 3;
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c0,PTR_s_addObject__0269d180,local_110);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_b8,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8,local_110
                            );
                  pcVar5 = local_b8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
                  pcVar2 = pcVar5 + -5000;
                  if (pcVar5 < "raphics.framework/CoreGraphics") {
                    local_12c = 0;
                  }
                  else {
                    pcVar2 = (char *)((long)&MACH_HEADER.magic + 2);
                    local_12c = 2;
                  }
                }
              }
              else {
                pcVar2 = (char *)((long)&MACH_HEADER.magic + 3);
                local_12c = 3;
              }
            }
            else {
              pcVar2 = (char *)((long)&MACH_HEADER.magic + 3);
              local_12c = 3;
            }
          }
          else {
            pcVar2 = (char *)((long)&MACH_HEADER.magic + 3);
            local_12c = 3;
          }
        }
        _objc_storeStrong(pcVar2,&local_110,0);
        if ((local_12c != 0) && (local_12c != 3)) goto LAB_014e5a9c;
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_158 = (char *)0x0;
    } while (local_150 != (char *)0x0);
  }
LAB_014e5a9c:
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,pcVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

