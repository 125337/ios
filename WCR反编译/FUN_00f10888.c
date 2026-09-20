// FUN_00f10888 @ 00f10888

void FUN_00f10888(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_198;
  ulong local_190;
  undefined *local_150;
  long local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  int local_ec;
  long local_e8;
  long local_e0;
  ulong local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_1;
  _objc_storeStrong(&local_d8);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_3);
  lVar4 = local_e0;
  local_e8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
  if ((lVar4 == 0) ||
     (uVar1 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
     uVar1 != 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar2;
    _memset(auStack_140,0,0x40);
    uVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_190 != 0) {
      lVar4 = *local_130;
      local_198 = 0;
      do {
        do {
          if (*local_130 - lVar4 != 0) {
            _objc_enumerationMutation(*local_130 - lVar4,uVar1);
          }
          uVar6 = *(undefined8 *)(local_138 + local_198 * 8);
          uVar5 = *(ulong *)(param_1 + 0x28);
          local_100 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isVersionedBackupName__026abc80);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_100);
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_198 = 0;
      } while (local_190 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    lVar4 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_retainCount_026aba90);
    puVar3 = local_f8;
    local_148 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
    puVar2 = local_f8;
    lVar4 = local_148;
    if (local_148 < (long)puVar3) {
      puVar3 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
      local_c8 = (long)puVar3 - local_148;
      local_c0 = lVar4;
      local_b8 = lVar4;
      local_b0 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_subarrayWithRange__0269d848,lVar4,local_c8)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_150 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_deleteItems_index_removed_comple_026abca8,
                 puVar2,0,0,*(undefined8 *)(param_1 + 0x20));
      _objc_storeStrong(&local_150,0);
      local_ec = 0;
    }
    else {
      if (*(long *)(param_1 + 0x20) != 0) {
        (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
      }
      local_ec = 1;
    }
    _objc_storeStrong(&local_f8,0);
    if (local_ec == 0) {
      local_ec = 0;
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,local_e0);
    }
    local_ec = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

