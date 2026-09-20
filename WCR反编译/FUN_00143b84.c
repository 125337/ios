// FUN_00143b84 @ 00143b84

void FUN_00143b84(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  undefined *local_210;
  undefined *local_208;
  double local_168;
  double local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0 [3];
  undefined *local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  long local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_3);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    local_c8 = 0;
    local_140 = 0.0;
    local_d0 = 0.0;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    while (puVar1 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
          uVar6 = local_c8, puVar1 != (undefined *)0x0) {
      puVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_f0[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeLastObject_0269e830);
      _memset(auStack_138,0,0x40);
      puVar1 = local_f0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_208 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_208 != (undefined *)0x0) {
        lVar4 = *local_128;
        local_210 = (undefined *)0x0;
        do {
          do {
            if (*local_128 - lVar4 != 0) {
              _objc_enumerationMutation(*local_128 - lVar4,puVar1);
            }
            local_f8 = *(ulong *)(local_130 + (long)local_210 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_f8);
            uVar3 = local_f8;
            puVar2 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar3 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
              _CGRectGetWidth();
              local_168 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
              _CGRectGetHeight(local_168,param_2);
              dVar5 = local_140;
              if ((local_140 <= 1.0) || (dVar5 = local_168, local_168 <= 1.0)) {
                uVar6 = 0x3ff0000000000000;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_frame_026ca640);
                _CGRectGetWidth();
                local_168 = dVar5;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_frame_026ca640);
                _CGRectGetHeight(local_168,uVar6);
                local_140 = dVar5;
              }
              local_140 = local_140 * local_168;
              param_2 = local_d0;
              if (local_d0 < local_140) {
                local_d0 = local_140;
                _objc_storeStrong(&local_c8,local_f8);
              }
            }
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                     0x10);
          local_210 = (undefined *)0x0;
        } while (local_208 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(local_f0,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar6;
    local_bc = 1;
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

