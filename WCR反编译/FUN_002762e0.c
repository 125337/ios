// FUN_002762e0 @ 002762e0

void FUN_002762e0(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_188;
  undefined *local_180;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined *local_c0;
  undefined8 local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = param_1;
  if (param_1 <= 0.0) {
    local_b0 = 3600.0;
  }
  FUN_0027215c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_b8 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    local_d0 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (-local_b0,PTR__OBJC_CLASS___NSDate_026cdf88,
               PTR_s_dateWithTimeIntervalSinceNow__0269cf50);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    _memset(auStack_120,0,0x40);
    puVar1 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_180 != (undefined *)0x0) {
      lVar5 = *local_110;
      local_188 = (undefined *)0x0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,puVar1);
          }
          local_e0 = *(undefined8 *)(local_118 + (long)local_188 * 8);
          uVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_stringByAppendingPathComponent__026cab30,local_e0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          local_128 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_130 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_objectForKeyedSubscript__0269d098,
                     *(undefined8 *)PTR__NSFileModificationDate_02578020);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
          local_138 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
          if ((((ulong)puVar2 & 1) != 0) &&
             (puVar2 = local_138,
             (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_compare__0269cd10,local_d8),
             puVar2 == (undefined *)0xffffffffffffffff)) {
            puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          _objc_storeStrong(&local_138);
          _objc_storeStrong(&local_130,0);
          _objc_storeStrong(&local_128,0);
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                   0x10);
        local_188 = (undefined *)0x0;
      } while (local_180 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_d8,0);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

