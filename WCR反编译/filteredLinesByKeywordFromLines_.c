// filteredLinesByKeywordFromLines: @ 00911b00

/* Function Stack Size: 0x18 bytes */

ID LogViewerViewController::filteredLinesByKeywordFromLines_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  ulong local_280;
  ulong local_278;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  long local_160;
  undefined *local_158;
  undefined4 local_14c;
  ulong local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  uVar1 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_14c = 1;
    local_130 = puVar2;
  }
  else {
    IVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_activeKeywordTokens_026aa1e8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (IVar4 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_158 = puVar2;
      _memset(auStack_1a0,0,0x40);
      uVar1 = local_148;
      (*(code *)PTR__objc_retain_02578638)();
      local_228 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
      if (local_228 != 0) {
        lVar5 = *local_190;
        local_230 = 0;
        do {
          do {
            if (*local_190 - lVar5 != 0) {
              _objc_enumerationMutation(*local_190 - lVar5,uVar1);
            }
            lVar6 = *(long *)(local_198 + local_230 * 8);
            local_160 = lVar6;
            (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
            if (lVar6 != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_160);
            }
            local_230 = local_230 + 1;
          } while (local_230 < local_228);
          local_228 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_230 = 0;
        } while (local_228 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar2 = local_158;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar2;
      local_14c = 1;
      _objc_storeStrong(&local_158,0);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = puVar2;
      _memset(auStack_1f0,0,0x40);
      uVar1 = local_148;
      (*(code *)PTR__objc_retain_02578638)();
      local_278 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,0x10)
      ;
      if (local_278 != 0) {
        lVar5 = *local_1e0;
        local_280 = 0;
        do {
          do {
            if (*local_1e0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1e0 - lVar5,uVar1);
            }
            local_1b0 = *(undefined8 *)(local_1e8 + local_280 * 8);
            IVar3 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_lineMatchesKeyword__026aa1d8,local_1b0);
            if ((IVar3 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_addObject__0269d180,local_1b0);
            }
            local_280 = local_280 + 1;
          } while (local_280 < local_278);
          local_278 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                     0x10);
          local_280 = 0;
        } while (local_278 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      puVar2 = local_1a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar2;
      local_14c = 1;
      _objc_storeStrong(&local_1a8,0);
    }
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

