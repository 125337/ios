// FUN_00215cb0 @ 00215cb0

void FUN_00215cb0(double param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  undefined *local_350;
  undefined *local_348;
  long *local_2f8;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  undefined *local_208;
  ulong local_200;
  undefined *local_1f8;
  long local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  double local_1a0;
  double local_198;
  undefined *local_190;
  double local_188;
  long local_180;
  long local_178;
  ulong local_170;
  undefined *local_168;
  double local_160;
  double local_158;
  undefined4 local_150;
  undefined8 local_140;
  double local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  long *plVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar2 = &local_130;
  local_130 = 0;
  _objc_storeStrong(plVar2,param_3);
  uVar1 = (uint)plVar2;
  local_140 = param_2;
  local_138 = param_1;
  FUN_001cf94c();
  if (((uVar1 & 1) == 0) || (local_130 == 0)) {
    local_150 = 1;
  }
  else {
    _CACurrentMediaTime();
    local_160 = param_1 + local_138;
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_158 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_130);
    _objc_retainAutoreleasedReturnValue();
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    dVar5 = -1.0;
    local_188 = -1.0;
    local_168 = puVar3;
    while (puVar3 = local_168, (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0)
          , puVar3 != (undefined *)0x0 && local_170 < 0xb4) {
      puVar3 = local_168;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_190 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_removeObjectAtIndex__0269d530,0);
      local_170 = local_170 + 1;
      puVar3 = local_190;
      FUN_00216580();
      if (((ulong)puVar3 & 1) != 0) {
        FUN_00216878(local_190);
        local_198 = dVar5;
        if (local_158 < dVar5) {
          _objc_storeStrong(&local_178,local_190);
        }
        FUN_00216a20(local_190);
        local_1a0 = dVar5;
        if (local_188 < dVar5) {
          local_188 = dVar5;
          _objc_storeStrong(&local_180,local_190);
        }
      }
      _memset(auStack_1e8,0,0x40);
      puVar3 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_2c8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2c8 != (undefined *)0x0) {
        lVar4 = *local_1d8;
        local_2d0 = (undefined *)0x0;
        do {
          do {
            if (*local_1d8 - lVar4 != 0) {
              _objc_enumerationMutation(*local_1d8 - lVar4,puVar3);
            }
            local_1a8 = *(undefined8 *)(local_1e0 + (long)local_2d0 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_1a8);
            local_2d0 = local_2d0 + 1;
          } while (local_2d0 < local_2c8);
          local_2c8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_a8,
                     0x10);
          local_2d0 = (undefined *)0x0;
        } while (local_2c8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_190,0);
    }
    if (local_178 == 0) {
      local_2f8 = &local_180;
    }
    else {
      local_2f8 = &local_178;
    }
    lVar4 = *local_2f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = lVar4;
    if (lVar4 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_130
                );
      _objc_retainAutoreleasedReturnValue();
      local_200 = 0;
      local_1f8 = puVar3;
      while (puVar3 = local_1f8,
            (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0),
            puVar3 != (undefined *)0x0 && local_200 < 0xb4) {
        puVar3 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_208 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_removeObjectAtIndex__0269d530,0);
        local_200 = local_200 + 1;
        if (((long)local_208 - local_1f0 != 0) &&
           (FUN_00216878((long)local_208 - local_1f0,local_208), 0.0 < dVar5)) {
          dVar5 = 0.0;
          FUN_00216fc4(local_208);
          FUN_00217110(local_208);
        }
        _memset(auStack_250,0,0x40);
        puVar3 = local_208;
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_348 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_348 != (undefined *)0x0) {
          lVar4 = *local_240;
          local_350 = (undefined *)0x0;
          do {
            do {
              if (*local_240 - lVar4 != 0) {
                _objc_enumerationMutation(*local_240 - lVar4,puVar3);
              }
              local_210 = *(undefined8 *)(local_248 + (long)local_350 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_addObject__0269d180,local_210);
              local_350 = local_350 + 1;
            } while (local_350 < local_348);
            local_348 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,
                       auStack_128,0x10);
            local_350 = (undefined *)0x0;
          } while (local_348 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_208,0);
      }
      FUN_00216fc4(local_160,local_1f0);
      FUN_00217930(local_1f0);
      FUN_00217b88(local_140,local_1f0);
      _objc_storeStrong(&local_1f8,0);
    }
    _objc_storeStrong(&local_1f0);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_168,0);
    local_150 = 0;
  }
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

