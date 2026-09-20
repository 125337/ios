// FUN_005d9510 @ 005d9510

byte FUN_005d9510(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1a0;
  ulong local_198;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  uint local_dc;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_getAllCells_026a5540);
  if ((uVar2 & 1) == 0) {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,&cf_m_cells);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_c0;
    local_c0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_getAllCells_026a5540);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_c0;
    local_c0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  uVar2 = local_c0;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar2 & 1) == 0) {
    local_a9 = 0;
    local_dc = 1;
  }
  else {
    _memset(auStack_128,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_198 != 0) {
      lVar5 = *local_118;
      local_1a0 = 0;
      do {
        do {
          if (*local_118 - lVar5 != 0) {
            _objc_enumerationMutation(*local_118 - lVar5,uVar2);
          }
          uVar6 = *(ulong *)(local_120 + local_1a0 * 8);
          local_130 = 0;
          local_e8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_valueForKey__0269d128,&cf_m_title);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_130;
          local_130 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_130;
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((uVar3 & 1) == 0) {
            uVar6 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_valueForKeyPath__026a0b98,&cf_cellConfig_leftConfig_title);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_130;
            local_130 = uVar6;
            (*(code *)PTR__objc_release_02578630)(uVar3);
          }
          uVar3 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isEqualToString__0269ccc8,&cf_SW>__)
          ;
          bVar1 = (uVar3 & 1) != 0;
          if (bVar1) {
            local_a9 = 1;
          }
          local_dc = (uint)bVar1;
          _objc_storeStrong(&local_130,0);
          if (local_dc != 0) goto LAB_005d9a64;
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    local_dc = 0;
LAB_005d9a64:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_dc == 0) {
      local_a9 = 0;
      local_dc = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

