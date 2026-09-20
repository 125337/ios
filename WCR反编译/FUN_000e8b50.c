// FUN_000e8b50 @ 000e8b50

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000e8b50(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  undefined *local_280;
  undefined *local_278;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  double local_160;
  double dStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  double dStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined *local_e8;
  double local_e0;
  long local_d8;
  undefined4 local_d0;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  uVar4 = local_b8;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_c0 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar4 & 1) == 0) {
    local_b0 = 0;
    local_d0 = 1;
  }
  else {
    local_d8 = 0;
    dVar5 = -1.7976931348623157e+308;
    local_e0 = -1.7976931348623157e+308;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar1;
    while (puVar1 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0),
          lVar3 = local_d8, puVar1 != (undefined *)0x0) {
      puVar1 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_removeLastObject_0269e830);
      if ((local_c0 == 0) ||
         (puVar1 = local_f0,
         (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isKindOfClass__0269cd68,local_c0),
         ((ulong)puVar1 & 1) != 0)) {
        puVar1 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bounds_026ca548);
        local_130 = dVar5;
        local_128 = param_2;
        local_120 = param_3;
        local_118 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_convertRect_toView__0269ded8,local_b8);
        local_160 = dVar5;
        dStack_158 = param_2;
        local_150 = param_3;
        uStack_148 = param_4;
        local_110 = dVar5;
        dStack_108 = param_2;
        local_100 = param_3;
        uStack_f8 = param_4;
        _CGRectGetMaxX();
        local_138 = dVar5;
        if ((local_d8 == 0) || (param_2 = local_e0, local_e0 < dVar5)) {
          _objc_storeStrong(&local_d8,local_f0);
          local_e0 = local_138;
          dVar5 = local_138;
        }
      }
      _memset(auStack_1a8,0,0x40);
      puVar1 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_278 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10)
      ;
      if (local_278 != (undefined *)0x0) {
        lVar3 = *local_198;
        local_280 = (undefined *)0x0;
        do {
          do {
            if (*local_198 - lVar3 != 0) {
              _objc_enumerationMutation(*local_198 - lVar3,puVar2);
            }
            uVar4 = *(ulong *)(local_1a0 + (long)local_280 * 8);
            puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_168 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar4 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_168);
            }
            local_280 = local_280 + 1;
          } while (local_280 < local_278);
          local_278 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                     0x10);
          local_280 = (undefined *)0x0;
        } while (local_278 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_f0,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = lVar3;
    local_d0 = 1;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

