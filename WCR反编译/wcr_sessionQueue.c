// wcr_sessionQueue @ 014eca38

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsEngine::wcr_sessionQueue(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  ID IVar5;
  undefined1 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong local_350;
  ulong local_348;
  ulong local_330;
  char *local_2c0;
  char *local_2b8;
  undefined1 *local_260;
  uint local_254;
  char *local_250;
  byte local_245;
  int local_244;
  ulong local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  ulong local_1f8;
  uint local_1ec;
  long local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  long local_190;
  undefined *local_188 [3];
  char *local_170;
  char *local_168;
  ulong local_160;
  char *local_158;
  undefined *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_148 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "MMNewSessionMgr";
  local_150 = puVar1;
  _objc_getClass();
  FUN_014e23b8();
  _objc_retainAutoreleasedReturnValue();
  local_160 = 0;
  local_158 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_GetUserNamesOnSessionList_0269f7e8);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_GetUserNamesOnSessionList_0269f7e8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_168 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar3 & 1) != 0) {
      _objc_storeStrong(&local_160,local_168);
    }
    _objc_storeStrong(&local_168,0);
  }
  if (local_160 == 0) {
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_valueForKey__0269d128,&cf_m_arrSession);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_170 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar3 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_188[0] = puVar1;
      _memset(auStack_1d0,0,0x40);
      pcVar3 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_copy_0269d150);
      local_2b8 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10)
      ;
      if (local_2b8 != (char *)0x0) {
        lVar8 = *local_1c0;
        local_2c0 = (char *)0x0;
        do {
          do {
            if (*local_1c0 - lVar8 != 0) {
              _objc_enumerationMutation(*local_1c0 - lVar8,pcVar3);
            }
            lVar9 = *(long *)(local_1c8 + (long)local_2c0 * 8);
            local_1d8 = 0;
            local_190 = lVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar9,PTR_s_valueForKey__0269d128,&cf_m_nsUserName);
            _objc_retainAutoreleasedReturnValue();
            lVar4 = local_1d8;
            local_1d8 = lVar9;
            (*(code *)PTR__objc_release_02578630)(lVar4);
            lVar9 = local_1d8;
            FUN_014dfa54();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = local_1d8;
            local_1d8 = lVar9;
            (*(code *)PTR__objc_release_02578630)(lVar4);
            lVar4 = local_1d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0);
            if (lVar4 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_188[0],PTR_s_addObject__0269d180,local_1d8);
            }
            _objc_storeStrong(&local_1d8,0);
            local_2c0 = local_2c0 + 1;
          } while (local_2c0 < local_2b8);
          local_2b8 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,
                     0x10);
          local_2c0 = (char *)0x0;
        } while (local_2b8 != (char *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      _objc_storeStrong(&local_160,local_188[0]);
      _objc_storeStrong(local_188,0);
    }
    _objc_storeStrong(&local_170,0);
  }
  IVar5 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_jobWindowStart_026afaf8);
  local_1ec = (uint)IVar5;
  _memset(auStack_238,0,0x40);
  if (local_160 == 0) {
    local_330 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_330 = local_160;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_348 = local_330;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_330,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_128,0x10)
  ;
  if (local_348 != 0) {
    lVar8 = *local_228;
    local_350 = 0;
    do {
      do {
        if (*local_228 - lVar8 != 0) {
          _objc_enumerationMutation(*local_228 - lVar8,local_330);
        }
        uVar10 = *(ulong *)(local_230 + local_350 * 8);
        local_1f8 = uVar10;
        FUN_014dfa54();
        _objc_retainAutoreleasedReturnValue();
        local_240 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_length_0269cca0);
        if ((uVar10 == 0) ||
           (puVar1 = local_150,
           (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsObject__0269cbb8,local_240)
           , ((ulong)puVar1 & 1) != 0)) {
          local_244 = 7;
        }
        else {
          uVar10 = local_240;
          FUN_014e76b8();
          if ((uVar10 & 1) == 0) {
            uVar10 = local_240;
            FUN_014e78c0();
            if ((uVar10 & 1) == 0) {
              puVar1 = PTR_WCRefineMessageBlockSupport_026ce0f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineMessageBlockSupport_026ce0f8,PTR_s_isChatRoomID__0269ec68,
                         local_240);
              local_245 = (byte)puVar1;
              if (((local_1ec != 0) && (local_158 != (char *)0x0)) &&
                 (pcVar3 = local_158,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_158,PTR_s_respondsToSelector__026ca818,
                            PTR_s_GetSessionByUserName__026afb68), ((ulong)pcVar3 & 1) != 0)) {
                pcVar3 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_GetSessionByUserName__026afb68,local_240);
                _objc_retainAutoreleasedReturnValue();
                local_250 = pcVar3;
                FUN_014e48f4(pcVar3,&cf_m_uLastTime);
                local_254 = (uint)pcVar3;
                if (local_254 == 0) {
                  pcVar3 = local_250;
                  FUN_014e48f4(local_250,&cf_m_uiLastMsgTime);
                  local_254 = (uint)pcVar3;
                }
                uVar7 = local_254;
                if ((local_254 == 0) || (uVar7 = local_254 - local_1ec, local_1ec <= local_254)) {
                  local_244 = 0;
                }
                else {
                  uVar7 = 7;
                  local_244 = 7;
                }
                _objc_storeStrong(uVar7,&local_250,0);
                if (local_244 != 0) goto LAB_014ed330;
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_240);
              if ((local_245 & 1) == 0) {
                puVar6 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
                if (puVar6 < &section_00000068.reserved3) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_140,PTR_s_addObject__0269d180,local_240);
                }
              }
              else {
                puVar6 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
                if (puVar6 < section_00000068.segname) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_148,PTR_s_addObject__0269d180,local_240);
                }
              }
              local_244 = 0;
            }
            else {
              local_244 = 7;
            }
          }
          else {
            local_244 = 7;
          }
        }
LAB_014ed330:
        _objc_storeStrong(&local_240,0);
        local_350 = local_350 + 1;
      } while (local_350 < local_348);
      local_348 = local_330;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_330,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,auStack_128,
                 0x10);
      local_350 = 0;
    } while (local_348 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_330);
  puVar6 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_mutableCopy_0269d8a0);
  local_260 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObjectsFromArray__0269d540,local_148);
  puVar6 = local_260;
  (*(code *)PTR__objc_msgSend_02578628)(local_260,PTR_s_copy_0269d150);
  local_244 = 1;
  _objc_storeStrong(&local_260);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar6;
}

