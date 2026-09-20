// FUN_003d9948 @ 003d9948

void FUN_003d9948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_1a8;
  ulong local_180;
  ulong local_178;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  long local_c0;
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
  uVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) || (local_c0 == 0)) {
    local_c4 = 1;
  }
  else {
    uVar3 = local_b8;
    FUN_003a48f4(local_b8,local_c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_b0;
    local_d0 = uVar3;
    FUN_003612b8(local_b0,&cf_arrMenuItems);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar4 = local_b0;
      FUN_003b3da8(local_b0,"arrMenuItems");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_d8;
      local_d8 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_d8;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      _memset(auStack_120,0,0x40);
      uVar2 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_178 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_178 != 0) {
        lVar5 = *local_110;
        local_180 = 0;
        do {
          do {
            if (*local_110 - lVar5 != 0) {
              _objc_enumerationMutation(*local_110 - lVar5,uVar2);
            }
            local_e0 = *(undefined8 *)(local_118 + local_180 * 8);
            FUN_003de4c0(local_e0,local_d0);
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_b0;
    FUN_003b3da8(local_b0,"_menuContentView");
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = uVar2;
    if (uVar2 == 0) {
      local_1a8 = local_b0;
    }
    local_128 = uVar2;
    FUN_003de898(local_1a8,local_d0);
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
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

