// FUN_001d8c8c @ 001d8c8c

void FUN_001d8c8c(undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined *local_140;
  ulong local_138;
  undefined *local_130 [2];
  double local_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  ulong local_f0 [3];
  ulong local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    local_c8 = 0;
    dVar5 = 0.0;
    local_d0 = 0.0;
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,&cf_imageView);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_d8;
    dVar6 = dVar5;
    dVar8 = param_2;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_f0[0] = uVar3;
      FUN_001dfa0c();
      dVar6 = dVar5;
      dVar8 = param_2;
      if ((uVar3 & 1) != 0) {
        dVar8 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0[0],PTR_s_bounds_026ca548);
        dVar6 = param_3 * dVar8;
        local_120 = dVar5;
        local_118 = param_2;
        local_110 = param_3;
        dStack_108 = dVar8;
        local_100 = param_3;
        dStack_f8 = dVar8;
        local_d0 = dVar6;
        _objc_storeStrong(&local_c8,local_f0[0]);
        param_3 = param_2;
        param_4 = dVar5;
      }
      _objc_storeStrong(local_f0,0);
    }
    _objc_storeStrong(&local_d8,0);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithArray__0269eab8);
    _objc_retainAutoreleasedReturnValue();
    local_130[0] = puVar2;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_138 = 0;
    while (puVar2 = local_130[0],
          (*(code *)PTR__objc_msgSend_02578628)(local_130[0],PTR_s_count_0269cfe0),
          local_b0 = local_c8, puVar2 != (undefined *)0x0 && local_138 < 0x28) {
      puVar2 = local_130[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_130[0],PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_140 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_130[0],PTR_s_removeObjectAtIndex__0269d530,0);
      local_138 = local_138 + 1;
      puVar2 = local_140;
      FUN_001e6254();
      dVar9 = param_3;
      dVar5 = param_4;
      if (((((ulong)puVar2 & 1) != 0) &&
          (puVar2 = local_140, FUN_001dfa0c(), dVar9 = param_3, dVar5 = param_4,
          ((ulong)puVar2 & 1) != 0)) &&
         (puVar2 = local_140, FUN_001d2ddc(), dVar9 = param_3, dVar5 = param_4,
         ((ulong)puVar2 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_bounds_026ca548);
        dVar7 = param_3;
        dVar5 = param_3;
        dVar9 = dVar8;
        dVar10 = dVar6;
        local_168 = dVar6;
        local_160 = dVar8;
        local_158 = param_3;
        local_150 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_bounds_026ca548);
        dVar6 = param_3 * dVar10;
        dVar8 = local_d0;
        local_188 = dVar7;
        local_180 = dVar5;
        local_178 = dVar9;
        local_170 = dVar10;
        local_148 = dVar6;
        if (local_d0 <= dVar6) {
          local_d0 = dVar6;
          _objc_storeStrong(&local_c8,local_140);
        }
      }
      _memset(auStack_1d0,0,0x40);
      puVar2 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_2d0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2d0 != (undefined *)0x0) {
        lVar4 = *local_1c0;
        local_2d8 = (undefined *)0x0;
        do {
          do {
            if (*local_1c0 - lVar4 != 0) {
              _objc_enumerationMutation(*local_1c0 - lVar4,puVar2);
            }
            local_190 = *(undefined8 *)(local_1c8 + (long)local_2d8 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_130[0],PTR_s_addObject__0269d180,local_190);
            local_2d8 = local_2d8 + 1;
          } while (local_2d8 < local_2d0);
          local_2d0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,
                     0x10);
          local_2d8 = (undefined *)0x0;
        } while (local_2d0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_140,0);
      param_3 = dVar9;
      param_4 = dVar5;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_bc = 1;
    _objc_storeStrong(local_130);
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

