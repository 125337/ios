// resolvedSessionUserNameForRecord: @ 01b2140c

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::resolvedSessionUserNameForRecord_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct **ppcVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_350;
  cfstringStruct *local_348;
  cfstringStruct *local_318;
  cfstringStruct *local_300;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2c0;
  cfstringStruct **local_280;
  cfstringStruct **local_278;
  cfstringStruct *local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  cfstringStruct *local_228;
  byte local_219;
  undefined *local_218;
  byte local_209;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  byte local_1f1;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  cfstringStruct **local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  uint local_154;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  SEL local_140;
  ID local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = (cfstringStruct *)0x0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  pcVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = pcVar2;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_150 = pcVar8;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar8 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
  pcVar2 = local_150;
  if (pcVar8 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = pcVar2;
    local_154 = 1;
    goto LAB_01b21fa0;
  }
  pcVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionName);
  _objc_retainAutoreleasedReturnValue();
  pcVar8 = pcVar2;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_160 = pcVar8;
  (*(code *)PTR__objc_release_02578630)();
  FUN_01b21ff8();
  _objc_retainAutoreleasedReturnValue();
  local_168 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = &::cf___;
    local_154 = 1;
  }
  else {
    pcVar2 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
    ppcVar4 = (cfstringStruct **)0x0;
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_170 = pcVar2;
      _memset(auStack_1b8,0,0x40);
      pcVar2 = local_168;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10)
      ;
      if (local_2c0 != (cfstringStruct *)0x0) {
        lVar5 = *local_1a8;
        local_2c8 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_1a8 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1a8 - lVar5,pcVar2);
            }
            uVar6 = *(ulong *)(local_1b0 + (long)local_2c8 * 8);
            local_178 = uVar6;
            FUN_01b22924();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_178;
            local_1c0 = uVar6;
            FUN_01b22b28(local_178,PTR_s_m_nsUsrName_0269d638);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_178;
            local_1c8 = uVar3;
            FUN_01b22b28(local_178,PTR_s_m_nsNickName_0269d758);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_178;
            local_1d0 = uVar6;
            FUN_01b22b28(local_178,PTR_s_m_nsRemark_0269d760);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_1c0;
            local_1d8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_length_0269cca0);
            if (((((uVar6 != 0) &&
                  (uVar3 = local_1c0,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c0,PTR_s_isEqualToString__0269ccc8,local_160), (uVar3 & 1) != 0)
                  ) || ((uVar3 = local_1d0,
                        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_length_0269cca0),
                        uVar3 != 0 &&
                        (uVar3 = local_1d0,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_1d0,PTR_s_isEqualToString__0269ccc8,local_160),
                        (uVar3 & 1) != 0)))) ||
                ((uVar3 = local_1d8,
                 (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0), uVar3 != 0
                 && (uVar3 = local_1d8,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1d8,PTR_s_isEqualToString__0269ccc8,local_160),
                    (uVar3 & 1) != 0)))) ||
               ((uVar3 = local_1c8,
                (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0), uVar3 != 0
                && (uVar3 = local_1c8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_1c8,PTR_s_isEqualToString__0269ccc8,local_160), (uVar3 & 1) != 0
                   )))) {
              (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addObject__0269d180,local_1c8);
            }
            _objc_storeStrong(&local_1d8);
            _objc_storeStrong(&local_1d0,0);
            _objc_storeStrong(&local_1c8,0);
            _objc_storeStrong(&local_1c0,0);
            local_2c8 = (cfstringStruct *)((long)&local_2c8->field0_0x0 + 1);
          } while (local_2c8 < local_2c0);
          local_2c0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                     0x10);
          local_2c8 = (cfstringStruct *)0x0;
        } while (local_2c0 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0);
      puVar7 = (undefined1 *)((long)&pcVar2[-1].field3_0x18 + 7);
      bVar1 = puVar7 == (undefined1 *)0x0;
      if (bVar1) {
        pcVar2 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        local_130 = pcVar2;
      }
      local_154 = (uint)bVar1;
      ppcVar4 = &local_170;
      _objc_storeStrong(puVar7,ppcVar4,0);
      if (local_154 != 0) goto LAB_01b21f80;
    }
    FUN_01b22c2c(0);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = ppcVar4;
    if (ppcVar4 == (cfstringStruct **)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = &::cf___;
      local_154 = 1;
    }
    else {
      pcVar2 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_1f1 = 0;
      if (((ulong)pcVar8 & 1) == 0) {
        local_300 = (cfstringStruct *)0x0;
      }
      else {
        local_300 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
        _objc_retainAutoreleasedReturnValue();
        local_1f1 = 1;
        local_1f0 = local_300;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      if ((local_1f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1f0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_1e8 = local_300;
      pcVar2 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
      _objc_retainAutoreleasedReturnValue();
      pcVar8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_209 = 0;
      if (((ulong)pcVar8 & 1) == 0) {
        local_318 = (cfstringStruct *)0x0;
      }
      else {
        local_318 = local_148;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_mesSvrID);
        _objc_retainAutoreleasedReturnValue();
        local_209 = 1;
        local_208 = local_318;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      if ((local_209 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_208);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_200 = local_318;
      if (((long)local_1e8 < 1) && ((long)local_318 < 1)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = &::cf___;
        local_154 = 1;
      }
      else {
        local_218 = PTR_s_GetMsg_LocalID__0269d5e8;
        ppcVar4 = local_1e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1e0,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8);
        local_219 = (byte)ppcVar4;
        _memset(auStack_268,0,0x40);
        pcVar2 = local_168;
        (*(code *)PTR__objc_retain_02578638)();
        local_348 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_128,
                   0x10);
        if (local_348 != (cfstringStruct *)0x0) {
          lVar5 = *local_258;
          local_350 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_258 - lVar5 != 0) {
                _objc_enumerationMutation(*local_258 - lVar5,pcVar2);
              }
              pcVar8 = *(cfstringStruct **)(local_260 + (long)local_350 * 8);
              local_228 = pcVar8;
              FUN_01b22b28(pcVar8,PTR_s_m_nsUsrName_0269d638);
              _objc_retainAutoreleasedReturnValue();
              local_270 = pcVar8;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_length_0269cca0);
              if (pcVar8 == (cfstringStruct *)0x0) {
                pcVar8 = (cfstringStruct *)((long)&MACH_HEADER.cputype + 3);
                local_154 = 7;
              }
              else {
                if (0 < (long)local_200) {
                  ppcVar4 = local_1e0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e0,PTR_s_GetMsg_n64SvrID__0269d5f0,local_270,local_200);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar8 = local_270;
                  local_278 = ppcVar4;
                  if (ppcVar4 != (cfstringStruct **)0x0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_130 = pcVar8;
                  }
                  local_154 = (uint)(ppcVar4 != (cfstringStruct **)0x0);
                  _objc_storeStrong(&local_278,0);
                  pcVar8 = (cfstringStruct *)(ulong)local_154;
                  if (local_154 != 0) goto LAB_01b21e90;
                }
                pcVar8 = local_1e8;
                if ((0 < (long)local_1e8) &&
                   (pcVar8 = (cfstringStruct *)(ulong)local_219, (local_219 & 1) != 0)) {
                  ppcVar4 = local_1e0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1e0,local_218,local_270,local_1e8);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar8 = local_270;
                  local_280 = ppcVar4;
                  if (ppcVar4 != (cfstringStruct **)0x0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_130 = pcVar8;
                  }
                  local_154 = (uint)(ppcVar4 != (cfstringStruct **)0x0);
                  _objc_storeStrong(&local_280,0);
                  pcVar8 = (cfstringStruct *)(ulong)local_154;
                  if (local_154 != 0) goto LAB_01b21e90;
                }
                local_154 = 0;
              }
LAB_01b21e90:
              _objc_storeStrong(pcVar8,&local_270,0);
              if ((local_154 != 0) && (local_154 != 7)) goto LAB_01b21f24;
              local_350 = (cfstringStruct *)((long)&local_350->field0_0x0 + 1);
            } while (local_350 < local_348);
            local_348 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                       auStack_128,0x10);
            local_350 = (cfstringStruct *)0x0;
          } while (local_348 != (cfstringStruct *)0x0);
        }
        local_154 = 0;
LAB_01b21f24:
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (local_154 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = &::cf___;
          local_154 = 1;
        }
      }
    }
    _objc_storeStrong(&local_1e0,0);
  }
LAB_01b21f80:
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
LAB_01b21fa0:
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

