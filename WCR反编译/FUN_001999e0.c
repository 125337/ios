// FUN_001999e0 @ 001999e0

void FUN_001999e0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_188;
  ulong local_180;
  undefined *local_130;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  long local_d0;
  uint local_c8;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_b0 = (undefined *)0x0;
    local_c8 = 1;
  }
  else {
    lVar2 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    if (lVar4 == 0) {
      local_b0 = (undefined *)0x0;
      local_c8 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar3;
      _memset(auStack_120,0,0x40);
      uVar1 = local_b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_180 != 0) {
        lVar4 = *local_110;
        local_188 = 0;
        do {
          do {
            if (*local_110 - lVar4 != 0) {
              _objc_enumerationMutation(*local_110 - lVar4,uVar1);
            }
            local_e0 = *(undefined8 *)(local_118 + local_188 * 8);
            lVar2 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,local_e0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_d8;
            local_128 = lVar2;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_fileExistsAtPath__026ca630,lVar2);
            if (((ulong)puVar3 & 1) == 0) {
              local_c8 = 3;
            }
            else {
              puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                         local_128);
              _objc_retainAutoreleasedReturnValue();
              local_130 = puVar3;
              if (puVar3 != (undefined *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = puVar3;
              }
              local_c8 = (uint)(puVar3 != (undefined *)0x0);
              _objc_storeStrong(&local_130,0);
            }
            _objc_storeStrong(&local_128,0);
            if ((local_c8 != 0) && (local_c8 != 3)) goto LAB_00199df4;
            local_188 = local_188 + 1;
          } while (local_188 < local_180);
          local_180 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_188 = 0;
        } while (local_180 != 0);
      }
      local_c8 = 0;
LAB_00199df4:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if (local_c8 == 0) {
        local_b0 = (undefined *)0x0;
        local_c8 = 1;
      }
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

