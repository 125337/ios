// officialUsernameForDisplayName: @ 0111b944

/* Function Stack Size: 0x18 bytes */

ID WCRefinePrivateFriendManager::officialUsernameForDisplayName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  cfstringStruct *pcVar14;
  long lVar15;
  undefined *local_548;
  undefined *local_540;
  ulong local_508;
  ulong local_500;
  undefined *local_4a0;
  undefined *local_498;
  undefined *local_428;
  undefined *local_420;
  undefined1 auStack_3d0 [8];
  long local_3c8;
  long *local_3c0;
  undefined8 local_390;
  cfstringStruct *local_388;
  undefined1 auStack_380 [8];
  long local_378;
  long *local_370;
  cfstringStruct *local_340;
  ID local_338;
  undefined1 auStack_330 [8];
  long local_328;
  long *local_320;
  undefined8 local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  ulong local_2a8;
  int local_29c;
  ID local_298;
  long local_290;
  long local_288;
  SEL local_280;
  ID local_278;
  cfstringStruct *local_270;
  cfstringStruct *local_268;
  cfstringStruct *local_260;
  cfstringStruct *local_258;
  undefined1 auStack_250 [128];
  undefined1 auStack_1d0 [128];
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_138 [128];
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_288 = 0;
  local_280 = param_2;
  local_278 = param_1;
  _objc_storeStrong(&local_288,param_3);
  lVar11 = local_288;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_278;
  local_290 = lVar11;
  (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_contactManager_026ab1d8);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = local_290;
  local_298 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_290,PTR_s_length_0269cca0);
  if (((lVar11 == 0) || (local_298 == 0)) ||
     (IVar1 = local_298,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_298,PTR_s_respondsToSelector__026ca818,
                PTR_s_getContactList_contactType__026a2fc8), (IVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_270 = &::cf___;
    local_29c = 1;
  }
  else {
    _memset(auStack_2e8,0,0x40);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_b8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_420 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_a8,0x10);
    if (local_420 != (undefined *)0x0) {
      lVar11 = *local_2d8;
      local_428 = (undefined *)0x0;
      do {
        do {
          if (*local_2d8 - lVar11 != 0) {
            _objc_enumerationMutation(*local_2d8 - lVar11,puVar4);
          }
          local_2a8 = *(ulong *)(local_2e0 + (long)local_428 * 8);
          _memset(auStack_330,0,0x40);
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_150 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_148 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_140 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_150,3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_498 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,auStack_138,
                     0x10);
          if (local_498 != (undefined *)0x0) {
            lVar12 = *local_320;
            local_4a0 = (undefined *)0x0;
            do {
              do {
                if (*local_320 - lVar12 != 0) {
                  _objc_enumerationMutation(*local_320 - lVar12,puVar6);
                }
                IVar1 = local_298;
                puVar2 = PTR_s_getContactList_contactType__026a2fc8;
                local_2f0 = *(undefined8 *)(local_328 + (long)local_4a0 * 8);
                uVar7 = local_2a8;
                (*(code *)PTR__objc_msgSend_02578628)(local_2a8,PTR_s_unsignedIntValue_0269db10);
                uVar8 = local_2f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_2f0,PTR_s_unsignedIntValue_0269db10);
                (*(code *)PTR__objc_msgSend_02578628)(IVar1,puVar2,uVar7 & 0xffffffff,uVar8);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                local_338 = IVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
                if ((IVar1 & 1) == 0) {
                  local_29c = 5;
                }
                else {
                  _memset(auStack_380,0,0x40);
                  IVar1 = local_338;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_500 = IVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,
                             auStack_1d0,0x10);
                  if (local_500 != 0) {
                    lVar13 = *local_370;
                    local_508 = 0;
                    do {
                      do {
                        if (*local_370 - lVar13 != 0) {
                          _objc_enumerationMutation(*local_370 - lVar13,IVar1);
                        }
                        pcVar14 = *(cfstringStruct **)(local_378 + local_508 * 8);
                        local_340 = pcVar14;
                        FUN_01112028();
                        _objc_retainAutoreleasedReturnValue();
                        local_388 = pcVar14;
                        (*(code *)PTR__objc_msgSend_02578628)(pcVar14,PTR_s_length_0269cca0);
                        if ((pcVar14 == (cfstringStruct *)0x0) ||
                           (puVar2 = PTR_WCRefineHelper_026ce000,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (PTR_WCRefineHelper_026ce000,
                                      PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,local_388),
                           ((ulong)puVar2 & 1) == 0)) {
                          local_29c = 7;
                        }
                        else {
                          _memset(auStack_3d0,0,0x40);
                          local_268 = &cf_m_nsRemark;
                          local_260 = &cf_m_nsNickName;
                          local_258 = &cf_m_nsAliasName;
                          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                     PTR_s_arrayWithObjects_count__0269cc70,&local_268,3);
                          _objc_retainAutoreleasedReturnValue();
                          local_540 = puVar2;
                          (*(code *)PTR__objc_msgSend_02578628)();
                          if (local_540 != (undefined *)0x0) {
                            lVar15 = *local_3c0;
                            local_548 = (undefined *)0x0;
                            do {
                              do {
                                if (*local_3c0 - lVar15 != 0) {
                                  _objc_enumerationMutation(*local_3c0 - lVar15,puVar2);
                                }
                                local_390 = *(undefined8 *)(local_3c8 + (long)local_548 * 8);
                                pcVar14 = local_340;
                                FUN_0111b06c(local_340,local_390);
                                _objc_retainAutoreleasedReturnValue();
                                pcVar9 = pcVar14;
                                FUN_0110d24c();
                                _objc_retainAutoreleasedReturnValue();
                                pcVar10 = pcVar9;
                                (*(code *)PTR__objc_msgSend_02578628)();
                                (*(code *)PTR__objc_release_02578630)(pcVar9);
                                (*(code *)PTR__objc_release_02578630)(pcVar14);
                                pcVar14 = local_388;
                                if (((ulong)pcVar10 & 1) != 0) {
                                  (*(code *)PTR__objc_retain_02578638)();
                                  local_270 = pcVar14;
                                  local_29c = 1;
                                  goto LAB_0111c13c;
                                }
                                local_548 = local_548 + 1;
                              } while (local_548 < local_540);
                              local_540 = puVar2;
                              (*(code *)PTR__objc_msgSend_02578628)
                                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                         auStack_3d0,auStack_250,0x10);
                              local_548 = (undefined *)0x0;
                            } while (local_540 != (undefined *)0x0);
                          }
                          local_29c = 0;
LAB_0111c13c:
                          (*(code *)PTR__objc_release_02578630)(puVar2);
                          if (local_29c == 0) {
                            local_29c = 0;
                          }
                        }
                        _objc_storeStrong(&local_388,0);
                        if ((local_29c != 0) && (local_29c != 7)) goto LAB_0111c1f8;
                        local_508 = local_508 + 1;
                      } while (local_508 < local_500);
                      local_500 = IVar1;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_380,
                                 auStack_1d0,0x10);
                      local_508 = 0;
                    } while (local_500 != 0);
                  }
                  local_29c = 0;
LAB_0111c1f8:
                  (*(code *)PTR__objc_release_02578630)(IVar1);
                  if (local_29c == 0) {
                    local_29c = 0;
                  }
                }
                _objc_storeStrong(&local_338,0);
                if ((local_29c != 0) && (local_29c != 5)) goto LAB_0111c2b4;
                local_4a0 = local_4a0 + 1;
              } while (local_4a0 < local_498);
              local_498 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_330,
                         auStack_138,0x10);
              local_4a0 = (undefined *)0x0;
            } while (local_498 != (undefined *)0x0);
          }
          local_29c = 0;
LAB_0111c2b4:
          (*(code *)PTR__objc_release_02578630)(puVar6);
          if (local_29c != 0) goto LAB_0111c33c;
          local_428 = local_428 + 1;
        } while (local_428 < local_420);
        local_420 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,auStack_a8,
                   0x10);
        local_428 = (undefined *)0x0;
      } while (local_420 != (undefined *)0x0);
    }
    local_29c = 0;
LAB_0111c33c:
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_29c == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_270 = &::cf___;
      local_29c = 1;
    }
  }
  _objc_storeStrong(&local_298);
  _objc_storeStrong(&local_290,0);
  _objc_storeStrong(&local_288,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_270;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

