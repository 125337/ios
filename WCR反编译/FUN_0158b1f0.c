// FUN_0158b1f0 @ 0158b1f0

void FUN_0158b1f0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong local_168;
  ulong local_160;
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  ulong local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar2 = local_b8;
  FUN_015888ac();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if (uVar2 == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_c4 = 1;
    local_b0 = puVar3;
  }
  else {
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar3;
    _memset(auStack_118,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar5 = *local_108;
      local_168 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar2);
          }
          puVar3 = *(undefined **)(local_110 + local_168 * 8);
          local_d8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_groupContact);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = false;
          local_120 = puVar3;
          if (puVar3 != (undefined *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = puVar3 != puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar4);
          }
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_120);
          }
          _objc_storeStrong(&local_120,0);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    local_c4 = 1;
    local_b0 = puVar3;
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

