// FUN_005707ac @ 005707ac

void FUN_005707ac(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_218;
  ulong local_210;
  ulong local_1d8;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  long local_110;
  long local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  if ((local_b0 == 0) ||
     (uVar1 = local_b0,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData__026a5220),
     (uVar1 & 1) == 0)) {
    local_c8 = 1;
  }
  else {
    uVar4 = local_b0;
    FUN_00565494();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar4;
    FUN_00570f10();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = uVar4;
    FUN_005710fc();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_d0;
    local_e0 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = uVar1;
    if ((local_e0 != 0) &&
       ((uVar1 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
        uVar1 != 0 &&
        (uVar1 = local_e0,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_respondsToSelector__026ca818,PTR_s_getDataItemByID__026a5228),
        (uVar1 & 1) != 0)))) {
      uVar1 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_getDataItemByID__026a5228,local_d8);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar1;
      if (uVar1 != 0) {
        _objc_storeStrong(&local_e8,uVar1);
      }
      _objc_storeStrong(&local_f0,0);
    }
    if (local_e8 == 0) {
      local_c8 = 1;
    }
    else {
      uVar1 = local_e8;
      FUN_00566368(local_e8,&cf_commentUsers);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_f8 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) == 0) {
        local_1d8 = 0;
      }
      else {
        local_1d8 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
      }
      uVar1 = local_f8;
      local_100 = local_1d8;
      local_108 = 0;
      local_110 = 0;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) {
        _memset(auStack_158,0,0x40);
        uVar1 = local_f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_210 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        if (local_210 != 0) {
          lVar3 = *local_148;
          local_218 = 0;
          do {
            do {
              if (*local_148 - lVar3 != 0) {
                _objc_enumerationMutation(*local_148 - lVar3,uVar1);
              }
              uVar4 = *(ulong *)(local_150 + local_218 * 8);
              local_118 = uVar4;
              FUN_00571250();
              if (((uVar4 & 1) == 0) && (uVar4 = local_118, FUN_00571344(), (uVar4 & 1) != 0)) {
                local_110 = local_110 + 1;
              }
              else {
                local_108 = local_108 + 1;
              }
              local_218 = local_218 + 1;
            } while (local_218 < local_210);
            local_210 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                       0x10);
            local_218 = 0;
          } while (local_210 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadData__026a5220,local_e8);
      _objc_storeStrong(&local_f8,0);
      local_c8 = 0;
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

