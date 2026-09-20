// FUN_00654cf0 @ 00654cf0

void FUN_00654cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_2b8;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1b8;
  ulong local_188 [2];
  ulong local_178;
  undefined4 local_16c;
  ulong local_168;
  ulong local_160;
  ulong local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  ulong local_100;
  bool local_f1;
  ulong local_f0;
  ulong local_e8 [3];
  ulong local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  if (local_b0 == 0) {
    local_c4 = 1;
  }
  else {
    local_1b8 = local_b0;
    FUN_00650304();
    _objc_retainAutoreleasedReturnValue();
    local_f1 = false;
    bVar1 = local_1b8 == 0;
    local_d0 = local_1b8;
    if (bVar1) {
      local_1b8 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_indexPathsForVisibleRows_0269ec40);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_1b8;
    }
    local_f1 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8[0] = local_1b8;
    if ((local_f1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    uVar3 = local_e8[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_count_0269cfe0);
    if (uVar3 == 0) {
      local_c4 = 1;
    }
    else {
      uVar3 = local_b0;
      FUN_006555fc();
      _objc_retainAutoreleasedReturnValue();
      local_100 = uVar3;
      _memset(auStack_148,0,0x40);
      uVar3 = local_e8[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_1f0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      if (local_1f0 != 0) {
        lVar7 = *local_138;
        local_1f8 = 0;
        do {
          do {
            if (*local_138 - lVar7 != 0) {
              _objc_enumerationMutation(*local_138 - lVar7,uVar3);
            }
            uVar8 = *(ulong *)(local_140 + local_1f8 * 8);
            puVar4 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
            local_108 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar4);
            uVar2 = local_b8;
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            if ((uVar8 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_section_0269e988);
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_row_0269e210);
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_stringWithFormat__0269cca8,&cf__ld__ld);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              uVar8 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_section_0269e988);
              if (-1 < (long)uVar8) {
                uVar5 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_section_0269e988);
                uVar6 = local_100;
                (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
                uVar8 = local_100;
                if (uVar5 < uVar6) {
                  uVar5 = local_108;
                  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_section_0269e988);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar8,PTR_s_objectAtIndexedSubscript__0269cc78,uVar5);
                  _objc_retainAutoreleasedReturnValue();
                  local_150 = uVar8;
                  FUN_00655814();
                  _objc_retainAutoreleasedReturnValue();
                  local_158 = uVar8;
                  if ((uVar8 == 0) &&
                     (uVar5 = local_150,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_150,PTR_s_respondsToSelector__026ca818,
                                PTR_s_cellDataForRow__026a62b0), uVar8 = local_150,
                     puVar4 = PTR_s_cellDataForRow__026a62b0, (uVar5 & 1) != 0)) {
                    uVar5 = local_108;
                    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_row_0269e210);
                    local_16c = 0;
                    local_2b8 = uVar5;
                    if ((long)uVar5 < 0) {
                      local_2b8 = 0;
                    }
                    local_178 = local_2b8;
                    local_168 = uVar5;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar8,puVar4,local_2b8);
                    _objc_retainAutoreleasedReturnValue();
                    local_160 = uVar8;
                    FUN_00655814();
                    _objc_retainAutoreleasedReturnValue();
                    uVar5 = local_158;
                    local_158 = uVar8;
                    (*(code *)PTR__objc_release_02578630)(uVar5);
                    _objc_storeStrong(&local_160,0);
                  }
                  uVar8 = local_158;
                  FUN_00655b28();
                  _objc_retainAutoreleasedReturnValue();
                  local_188[0] = uVar8;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_length_0269cca0);
                  if (uVar8 != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_c0,PTR_s_addObject__0269d180,local_188[0]);
                  }
                  _objc_storeStrong(local_188);
                  _objc_storeStrong(&local_158,0);
                  _objc_storeStrong(&local_150,0);
                }
              }
            }
            local_1f8 = local_1f8 + 1;
          } while (local_1f8 < local_1f0);
          local_1f0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1f8 = 0;
        } while (local_1f0 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      _objc_storeStrong(&local_100,0);
      local_c4 = 0;
    }
    _objc_storeStrong(local_e8);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

