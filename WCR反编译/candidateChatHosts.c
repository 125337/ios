// candidateChatHosts @ 00ffbe24

/* Function Stack Size: 0x10 bytes */

ID WCRefineLinkMediaSender::candidateChatHosts(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_388;
  undefined *local_380;
  ulong local_338;
  ulong local_330;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  long local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  ulong local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  ID local_1c8;
  undefined *local_1c0;
  SEL local_1b8;
  ID local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_1b8 = param_2;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_1b0;
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_1c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_walkPastOverlaysFrom__026ad8a0);
  _objc_retainAutoreleasedReturnValue();
  local_1c8 = IVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_1c8 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_1c8);
  }
  local_1d0 = (undefined *)0x0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = puVar1;
  _memset(auStack_220,0,0x40);
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_2e8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10);
  if (local_2e8 != (undefined *)0x0) {
    lVar5 = *local_210;
    local_2f0 = (undefined *)0x0;
    do {
      do {
        if (*local_210 - lVar5 != 0) {
          _objc_enumerationMutation(*local_210 - lVar5,puVar2);
        }
        uVar6 = *(ulong *)(local_218 + (long)local_2f0 * 8);
        puVar1 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
        local_1e0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar6 & 1) != 0) {
          _memset(auStack_268,0,0x40);
          uVar6 = local_1e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_windows_0269dde0);
          _objc_retainAutoreleasedReturnValue();
          local_330 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_330 != 0) {
            lVar8 = *local_258;
            local_338 = 0;
            do {
              do {
                if (*local_258 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_258 - lVar8,uVar6);
                }
                uVar7 = *(ulong *)(local_260 + local_338 * 8);
                local_228 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isHidden_026ca768);
                if ((uVar7 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d8,PTR_s_addObject__0269d180,local_228);
                }
                local_338 = local_338 + 1;
              } while (local_338 < local_330);
              local_330 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                         auStack_128,0x10);
              local_338 = 0;
            } while (local_330 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar6);
        }
        local_2f0 = local_2f0 + 1;
      } while (local_2f0 < local_2e8);
      local_2e8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_a8,0x10)
      ;
      local_2f0 = (undefined *)0x0;
    } while (local_2e8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_1d0,local_1d8);
  _objc_storeStrong(&local_1d8,0);
  puVar1 = local_1d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_1d0;
    local_1d0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _memset(auStack_2b0,0,0x40);
  puVar1 = local_1d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_380 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_1a8,0x10);
  if (local_380 != (undefined *)0x0) {
    lVar5 = *local_2a0;
    local_388 = (undefined *)0x0;
    do {
      do {
        if (*local_2a0 - lVar5 != 0) {
          _objc_enumerationMutation(*local_2a0 - lVar5,puVar1);
        }
        lVar8 = *(long *)(local_2a8 + (long)local_388 * 8);
        local_270 = lVar8;
        (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_rootViewController_026ca820);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        puVar2 = local_1c0;
        if (lVar8 != 0) {
          lVar8 = local_270;
          (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_rootViewController_026ca820);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(lVar8);
        }
        local_388 = local_388 + 1;
      } while (local_388 < local_380);
      local_380 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_1a8,0x10
                );
      local_388 = (undefined *)0x0;
    } while (local_380 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_1c0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1d0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

