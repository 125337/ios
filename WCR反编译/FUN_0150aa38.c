// FUN_0150aa38 @ 0150aa38

byte FUN_0150aa38(ulong param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint local_16c;
  ulong local_150;
  ulong local_148;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined *local_c8;
  uint local_bc;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_01509968();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    local_a9 = 0;
    local_bc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    _memset(auStack_110,0,0x40);
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectEnumerator_026a8228);
    _objc_retainAutoreleasedReturnValue();
    local_148 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_148 != 0) {
      lVar5 = *local_100;
      local_150 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,uVar3);
          }
          lVar6 = *(long *)(local_108 + local_150 * 8);
          local_d0 = lVar6;
          FUN_01509a84();
          _objc_retainAutoreleasedReturnValue();
          local_118 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          puVar2 = local_c8;
          local_16c = 0;
          if (lVar4 != 0) {
            lVar4 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_path_0269d4d8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630);
            local_16c = (uint)puVar2;
            (*(code *)PTR__objc_release_02578630)(lVar4);
          }
          (*(code *)PTR__objc_release_02578630)(lVar6);
          bVar1 = (local_16c & 1) != 0;
          if (bVar1) {
            local_a9 = 1;
          }
          local_bc = (uint)bVar1;
          _objc_storeStrong(&local_118,0);
          if (local_bc != 0) goto LAB_0150ad50;
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    local_bc = 0;
LAB_0150ad50:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_bc == 0) {
      local_a9 = 0;
      local_bc = 1;
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

