// FUN_00364b04 @ 00364b04

byte FUN_00364b04(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar4 = local_b8;
  puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar4 & 1) == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleCells_0269fc48);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_138 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
    if (local_138 != 0) {
      lVar3 = *local_f8;
      local_140 = 0;
      do {
        do {
          if (*local_f8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_100 + local_140 * 8);
          local_c8 = uVar4;
          FUN_003b269c();
          if ((uVar4 & 1) != 0) {
            local_a9 = 1;
            local_bc = 1;
            goto LAB_00364d20;
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    local_bc = 0;
LAB_00364d20:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_bc == 0) {
      uVar4 = local_b8;
      FUN_003b28b0();
      if ((uVar4 & 1) == 0) {
        local_a9 = 0;
        local_bc = 1;
      }
      else {
        local_a9 = 1;
        local_bc = 1;
      }
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

