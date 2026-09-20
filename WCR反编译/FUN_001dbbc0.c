// FUN_001dbbc0 @ 001dbbc0

void FUN_001dbbc0(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *local_208;
  undefined *local_200;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  undefined *local_f8;
  ulong local_f0;
  double local_e8;
  undefined8 local_e0 [3];
  undefined *local_c8;
  undefined4 local_bc;
  long local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    lVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithArray__0269eab8);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_e0[0] = 0;
    local_e8 = 0.0;
    local_f0 = 0;
    dVar3 = 0.0;
    while (puVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
          local_b0 = local_e0[0], puVar1 != (undefined *)0x0 && local_f0 < 100) {
      puVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_removeObjectAtIndex__0269d530,0);
      local_f0 = local_f0 + 1;
      puVar1 = local_f8;
      FUN_001dc0e8();
      dVar4 = dVar3;
      dVar5 = param_2;
      dVar6 = param_3;
      dVar7 = param_4;
      if (((ulong)puVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
        dVar4 = param_3 * param_4;
        dVar5 = local_e8;
        dVar6 = param_2;
        dVar7 = dVar3;
        local_138 = dVar4;
        local_130 = dVar3;
        local_128 = param_2;
        local_120 = param_3;
        dStack_118 = param_4;
        local_110 = param_3;
        dStack_108 = param_4;
        if (local_e8 < dVar4) {
          local_e8 = dVar4;
          _objc_storeStrong(local_e0,local_f8);
          dVar6 = param_2;
          dVar7 = dVar3;
        }
      }
      _memset(auStack_180,0,0x40);
      puVar1 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_200 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_200 != (undefined *)0x0) {
        lVar2 = *local_170;
        local_208 = (undefined *)0x0;
        do {
          do {
            if (*local_170 - lVar2 != 0) {
              _objc_enumerationMutation(*local_170 - lVar2,puVar1);
            }
            local_140 = *(undefined8 *)(local_178 + (long)local_208 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_140);
            local_208 = local_208 + 1;
          } while (local_208 < local_200);
          local_200 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                     0x10);
          local_208 = (undefined *)0x0;
        } while (local_200 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_f8,0);
      dVar3 = dVar4;
      param_2 = dVar5;
      param_3 = dVar6;
      param_4 = dVar7;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_bc = 1;
    _objc_storeStrong(local_e0);
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

