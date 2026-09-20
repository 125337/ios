// FUN_010ccb24 @ 010ccb24

byte FUN_010ccb24(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_198;
  ulong local_190;
  uint local_154;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  ulong local_108;
  byte local_f9;
  ulong local_f8;
  byte local_e9;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  byte local_c9;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    uVar1 = local_b8;
    FUN_010ca4b4(local_b8,PTR_s_pathForPreview_026a4a18);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    FUN_010ca620();
    local_c9 = 0;
    local_d9 = 0;
    local_e9 = 0;
    local_f9 = 0;
    local_154 = 1;
    if ((uVar4 & 1) == 0) {
      uVar4 = local_b8;
      FUN_010ca4b4(local_b8,PTR_s_pathForData_026a4a20);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_c8 = uVar4;
      FUN_010ca620();
      local_154 = 1;
      if ((uVar4 & 1) == 0) {
        uVar4 = local_b8;
        FUN_010ca4b4(local_b8,PTR_s_pathForSightData_026a4a28);
        _objc_retainAutoreleasedReturnValue();
        local_d9 = 1;
        local_d8 = uVar4;
        FUN_010ca620();
        local_154 = 1;
        if ((uVar4 & 1) == 0) {
          uVar4 = local_b8;
          FUN_010ca4b4(local_b8,PTR_s_pathForExistData_026a4a30);
          _objc_retainAutoreleasedReturnValue();
          local_e9 = 1;
          local_e8 = uVar4;
          FUN_010ca620();
          local_154 = 1;
          if ((uVar4 & 1) == 0) {
            uVar4 = local_b8;
            FUN_010ca4b4(local_b8,PTR_s_pathForHdData_026a4a38);
            _objc_retainAutoreleasedReturnValue();
            local_f9 = 1;
            local_f8 = uVar4;
            FUN_010ca620();
            local_154 = (uint)uVar4;
          }
        }
      }
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_154 & 1) == 0) {
      uVar1 = local_b8;
      _objc_getAssociatedObject(local_b8,DAT_0280e1b0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_108 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((uVar1 & 1) == 0) ||
         (uVar1 = local_108, (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0),
         uVar1 == 0)) {
        local_a9 = 0;
        local_bc = 1;
      }
      else {
        _memset(auStack_150,0,0x40);
        uVar1 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_allValues_0269dae8);
        _objc_retainAutoreleasedReturnValue();
        local_190 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_190 != 0) {
          lVar3 = *local_140;
          local_198 = 0;
          do {
            do {
              if (*local_140 - lVar3 != 0) {
                _objc_enumerationMutation(*local_140 - lVar3,uVar1);
              }
              uVar4 = *(ulong *)(local_148 + local_198 * 8);
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_110 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((uVar4 & 1) != 0) && (uVar4 = local_110, FUN_010ca620(), (uVar4 & 1) != 0)) {
                local_a9 = 1;
                local_bc = 1;
                goto LAB_010ccfe8;
              }
              local_198 = local_198 + 1;
            } while (local_198 < local_190);
            local_190 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                       0x10);
            local_198 = 0;
          } while (local_190 != 0);
        }
        local_bc = 0;
LAB_010ccfe8:
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_bc == 0) {
          local_a9 = 0;
          local_bc = 1;
        }
      }
      _objc_storeStrong(&local_108,0);
    }
    else {
      local_a9 = 1;
      local_bc = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

