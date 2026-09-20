// FUN_0007dc30 @ 0007dc30

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0007dc30(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  undefined8 uVar5;
  ulong local_348;
  ulong local_340;
  double local_310;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  double local_1d8;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  double local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0 [3];
  undefined4 local_d4;
  long local_d0;
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_5);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_6);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_7);
  if (((local_c0 == 0) || (local_c8 == 0)) || (local_d0 == 0)) {
    local_d4 = 1;
  }
  else {
    local_b0 = &DAT_028c7f58;
    local_b8 = 0;
    _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_02579ab0);
    if (*local_b0 + 1 != 0) {
      _dispatch_once(*local_b0 + 1,local_b0,local_b8);
    }
    _objc_storeStrong(&local_b8,0);
    if ((DAT_028c7f50 != 0) &&
       (uVar1 = local_c0,
       (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isKindOfClass__0269cd68,DAT_028c7f50),
       uVar2 = local_c0, (uVar1 & 1) != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_f0[0] = uVar2;
      FUN_0007e29c();
      if ((uVar2 & 1) != 0) {
        FUN_0007c690(local_f0[0],local_c8);
        uVar5 = param_3;
        local_150 = param_1;
        uStack_148 = param_2;
        local_140 = param_3;
        uStack_138 = param_4;
        local_110 = param_1;
        uStack_108 = param_2;
        local_100 = param_3;
        uStack_f8 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
        local_170 = param_3;
        local_168 = uVar5;
        local_160 = param_2;
        local_158 = param_1;
        _CGRectIntersection();
        local_130 = local_150;
        uStack_128 = uStack_148;
        local_120 = local_140;
        uStack_118 = uStack_138;
        _CGRectGetWidth(local_150,uStack_148,local_140,uStack_138);
        local_310 = local_130;
        local_180 = local_150;
        _CGRectGetHeight(local_130,uStack_128,local_120,uStack_118);
        if (local_180 < local_310) {
          local_310 = local_180;
        }
        local_1d8 = local_310;
        local_178 = local_310;
        dVar4 = local_130;
        _CGRectGetWidth(local_130,uStack_128,local_120,uStack_118);
        if (((0.5 < dVar4) &&
            (_CGRectGetHeight(local_130,uStack_128,local_120,uStack_118), 0.5 < local_130)) &&
           (28.0 <= local_178)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_f0[0]);
        }
      }
      _objc_storeStrong(local_f0,0);
    }
    _memset(auStack_268,0,0x40);
    uVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_340 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_340 != 0) {
      lVar3 = *local_258;
      local_348 = 0;
      do {
        do {
          if (*local_258 - lVar3 != 0) {
            _objc_enumerationMutation(*local_258 - lVar3,uVar2);
          }
          local_228 = *(undefined8 *)(local_260 + local_348 * 8);
          FUN_0007dc30(local_228,local_c8,local_d0);
          local_348 = local_348 + 1;
        } while (local_348 < local_340);
        local_340 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_a8,0x10
                  );
        local_348 = 0;
      } while (local_340 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

