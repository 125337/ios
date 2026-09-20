// FUN_00754ab8 @ 00754ab8

void FUN_00754ab8(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  char *local_570;
  char *local_568;
  undefined *local_4f0;
  undefined *local_4e8;
  undefined *local_4b0;
  undefined *local_4a8;
  char *local_340;
  undefined1 auStack_338 [8];
  long local_330;
  long *local_328;
  char *local_2f8;
  char *local_2f0;
  undefined1 auStack_2e8 [8];
  long local_2e0;
  long *local_2d8;
  ulong local_2a8;
  undefined1 auStack_2a0 [8];
  long local_298;
  long *local_290;
  ulong local_260;
  undefined *local_258;
  undefined *local_250 [2];
  char *local_240;
  char *local_238;
  char *local_230 [2];
  char *local_220 [2];
  char *local_210;
  char *local_208;
  char *local_200;
  uint local_1f8;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  undefined1 auStack_1d0 [128];
  undefined1 auStack_150 [128];
  undefined1 auStack_d0 [128];
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1e0 = (char *)0x0;
  _objc_storeStrong(&local_1e0,param_1);
  pcVar2 = local_1e0;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = pcVar2;
  FUN_00744988();
  if (((ulong)pcVar2 & 1) == 0) {
    local_1d8 = (char *)0x0;
    local_1f8 = 1;
    goto LAB_00755b58;
  }
  pcVar13 = local_1e8;
  FUN_0074e2f8();
  _objc_retainAutoreleasedReturnValue();
  local_200 = pcVar13;
  FUN_007562d0();
  pcVar2 = local_200;
  if (((ulong)pcVar13 & 1) == 0) {
    if (DAT_028cc810 == (char *)0x0) {
      pcVar2 = "CContactMgr";
      _objc_getClass();
      DAT_028cc810 = pcVar2;
    }
    pcVar2 = DAT_028cc810;
    _objc_retainAutoreleaseReturnValue();
    FUN_00744160();
    _objc_retainAutoreleasedReturnValue();
    local_208 = pcVar2;
    if (pcVar2 == (char *)0x0) {
LAB_00754ed8:
      if (DAT_028cc828 == (char *)0x0) {
        pcVar2 = "MMNewSessionMgr";
        _objc_getClass();
        DAT_028cc828 = pcVar2;
      }
      pcVar2 = DAT_028cc828;
      _objc_retainAutoreleaseReturnValue();
      FUN_00744160();
      _objc_retainAutoreleasedReturnValue();
      local_230[0] = pcVar2;
      if ((pcVar2 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,
                     PTR_s_genSessionInfoByUserName__026a7d50), ((ulong)pcVar2 & 1) == 0)) {
LAB_007550f8:
        if ((local_208 != (char *)0x0) &&
           (pcVar2 = local_208,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_208,PTR_s_respondsToSelector__026ca818,
                      PTR_s_getContactList_contactType__026a2fc8), ((ulong)pcVar2 & 1) != 0)) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_38 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_30 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_38,2);
          _objc_retainAutoreleasedReturnValue();
          local_250[0] = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_50 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_48 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_40 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_50,3);
          _objc_retainAutoreleasedReturnValue();
          local_258 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _memset(auStack_2a0,0,0x40);
          puVar3 = local_250[0];
          (*(code *)PTR__objc_retain_02578638)();
          local_4a8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,auStack_d0,
                     0x10);
          if (local_4a8 != (undefined *)0x0) {
            lVar10 = *local_290;
            local_4b0 = (undefined *)0x0;
            do {
              do {
                if (*local_290 - lVar10 != 0) {
                  _objc_enumerationMutation(*local_290 - lVar10,puVar3);
                }
                local_260 = *(ulong *)(local_298 + (long)local_4b0 * 8);
                _memset(auStack_2e8,0,0x40);
                puVar4 = local_258;
                (*(code *)PTR__objc_retain_02578638)();
                local_4e8 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,
                           auStack_150,0x10);
                if (local_4e8 != (undefined *)0x0) {
                  lVar11 = *local_2d8;
                  local_4f0 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_2d8 - lVar11 != 0) {
                        _objc_enumerationMutation(*local_2d8 - lVar11,puVar4);
                      }
                      pcVar2 = local_208;
                      puVar5 = PTR_s_getContactList_contactType__026a2fc8;
                      local_2a8 = *(ulong *)(local_2e0 + (long)local_4f0 * 8);
                      uVar7 = local_260;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_260,PTR_s_unsignedIntValue_0269db10);
                      uVar8 = local_2a8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_2a8,PTR_s_unsignedIntValue_0269db10);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar2,puVar5,uVar7 & 0xffffffff,uVar8 & 0xffffffff);
                      _objc_retainAutoreleasedReturnValue();
                      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                      local_2f0 = pcVar2;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
                      if (((ulong)pcVar2 & 1) == 0) {
                        local_1f8 = 8;
                      }
                      else {
                        _memset(auStack_338,0,0x40);
                        pcVar2 = local_2f0;
                        (*(code *)PTR__objc_retain_02578638)();
                        local_568 = pcVar2;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_338,auStack_1d0,0x10);
                        if (local_568 != (char *)0x0) {
                          lVar12 = *local_328;
                          local_570 = (char *)0x0;
                          do {
                            do {
                              if (*local_328 - lVar12 != 0) {
                                _objc_enumerationMutation(*local_328 - lVar12,pcVar2);
                              }
                              pcVar13 = *(char **)(local_330 + (long)local_570 * 8);
                              local_2f8 = pcVar13;
                              FUN_007562d0();
                              if (((ulong)pcVar13 & 1) != 0) {
                                pcVar9 = local_2f8;
                                FUN_0074c5f8(local_2f8,&cf_m_nsUsrName);
                                _objc_retainAutoreleasedReturnValue();
                                local_340 = pcVar9;
                                (*(code *)PTR__objc_msgSend_02578628)
                                          (pcVar9,PTR_s_isEqualToString__0269ccc8,local_1e8);
                                pcVar13 = local_2f8;
                                bVar1 = ((ulong)pcVar9 & 1) != 0;
                                if (bVar1) {
                                  (*(code *)PTR__objc_retain_02578638)();
                                  local_1d8 = pcVar13;
                                }
                                local_1f8 = (uint)bVar1;
                                _objc_storeStrong(&local_340,0);
                                if (local_1f8 != 0) goto LAB_007558d0;
                              }
                              local_570 = local_570 + 1;
                            } while (local_570 < local_568);
                            local_568 = pcVar2;
                            (*(code *)PTR__objc_msgSend_02578628)
                                      (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                       auStack_338,auStack_1d0,0x10);
                            local_570 = (char *)0x0;
                          } while (local_568 != (char *)0x0);
                        }
                        local_1f8 = 0;
LAB_007558d0:
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                        if (local_1f8 == 0) {
                          local_1f8 = 0;
                        }
                      }
                      _objc_storeStrong(&local_2f0,0);
                      if ((local_1f8 != 0) && (local_1f8 != 8)) goto LAB_00755998;
                      local_4f0 = local_4f0 + 1;
                    } while (local_4f0 < local_4e8);
                    local_4e8 = puVar4;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2e8,
                               auStack_150,0x10);
                    local_4f0 = (undefined *)0x0;
                  } while (local_4e8 != (undefined *)0x0);
                }
                local_1f8 = 0;
LAB_00755998:
                (*(code *)PTR__objc_release_02578630)(puVar4);
                if (local_1f8 != 0) goto LAB_00755a2c;
                local_4b0 = local_4b0 + 1;
              } while (local_4b0 < local_4a8);
              local_4a8 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a0,
                         auStack_d0,0x10);
              local_4b0 = (undefined *)0x0;
            } while (local_4a8 != (undefined *)0x0);
          }
          local_1f8 = 0;
LAB_00755a2c:
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (local_1f8 == 0) {
            local_1f8 = 0;
          }
          _objc_storeStrong(&local_258);
          _objc_storeStrong(local_250,0);
          if (local_1f8 != 0) goto LAB_00755af8;
        }
        local_1d8 = (char *)0x0;
        local_1f8 = 1;
      }
      else {
        pcVar13 = local_230[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_230[0],PTR_s_genSessionInfoByUserName__026a7d50,local_1e8);
        _objc_retainAutoreleasedReturnValue();
        local_238 = pcVar13;
        FUN_0074c70c(pcVar13,&cf_m_contact);
        _objc_retainAutoreleasedReturnValue();
        local_240 = pcVar13;
        FUN_007562d0();
        pcVar2 = local_240;
        bVar1 = ((ulong)pcVar13 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_1d8 = pcVar2;
        }
        local_1f8 = (uint)bVar1;
        _objc_storeStrong(&local_240);
        _objc_storeStrong(&local_238,0);
        if (local_1f8 == 0) goto LAB_007550f8;
      }
LAB_00755af8:
      _objc_storeStrong(local_230,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactFromDic__0269fef0);
      if (((ulong)pcVar2 & 1) == 0) {
LAB_00754d90:
        pcVar2 = local_208;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_208,PTR_s_respondsToSelector__026ca818,
                   PTR_s_getContactForSearchByName__0269f828);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar13 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_208,PTR_s_getContactForSearchByName__0269f828,local_1e8);
          _objc_retainAutoreleasedReturnValue();
          local_220[0] = pcVar13;
          FUN_007562d0();
          pcVar2 = local_220[0];
          bVar1 = ((ulong)pcVar13 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1d8 = pcVar2;
          }
          local_1f8 = (uint)bVar1;
          _objc_storeStrong(local_220,0);
          if (local_1f8 != 0) goto LAB_00755b18;
        }
        goto LAB_00754ed8;
      }
      pcVar13 = local_208;
      (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_getContactFromDic__0269fef0,local_1e8);
      _objc_retainAutoreleasedReturnValue();
      local_210 = pcVar13;
      FUN_007562d0();
      pcVar2 = local_210;
      bVar1 = ((ulong)pcVar13 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_1d8 = pcVar2;
      }
      local_1f8 = (uint)bVar1;
      _objc_storeStrong(&local_210,0);
      if (local_1f8 == 0) goto LAB_00754d90;
    }
LAB_00755b18:
    _objc_storeStrong(&local_208,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = pcVar2;
    local_1f8 = 1;
  }
  _objc_storeStrong(&local_200,0);
LAB_00755b58:
  _objc_storeStrong(&local_1e8);
  _objc_storeStrong(&local_1e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_1d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

