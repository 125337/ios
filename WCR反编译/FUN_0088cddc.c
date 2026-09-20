// FUN_0088cddc @ 0088cddc

void FUN_0088cddc(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_198;
  undefined *local_190;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  undefined *local_e0 [3];
  undefined *local_c8;
  uint local_bc;
  long local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_b0 = (undefined *)0x0;
    local_bc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar2;
    do {
      puVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        local_b0 = (undefined *)0x0;
        local_bc = 1;
        break;
      }
      puVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_e0[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeLastObject_0269e830);
      puVar2 = local_e0[0];
      puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      puVar3 = local_e0[0];
      if (((ulong)puVar2 & 1) == 0) {
LAB_0088d00c:
        _memset(auStack_130,0,0x40);
        puVar2 = local_e0[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_e0[0],PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_190 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_190 != (undefined *)0x0) {
          lVar4 = *local_120;
          local_198 = (undefined *)0x0;
          do {
            do {
              if (*local_120 - lVar4 != 0) {
                _objc_enumerationMutation(*local_120 - lVar4,puVar2);
              }
              local_f0 = *(undefined8 *)(local_128 + (long)local_198 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_f0);
              local_198 = local_198 + 1;
            } while (local_198 < local_190);
            local_190 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8
                       ,0x10);
            local_198 = (undefined *)0x0;
          } while (local_190 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_bc = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = puVar3;
        FUN_0087d624();
        puVar2 = local_e8;
        bVar1 = ((ulong)puVar3 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar2;
        }
        local_bc = (uint)bVar1;
        _objc_storeStrong(&local_e8,0);
        if (local_bc == 0) goto LAB_0088d00c;
      }
      _objc_storeStrong(local_e0,0);
    } while (local_bc == 0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

