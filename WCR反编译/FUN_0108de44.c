// FUN_0108de44 @ 0108de44

void FUN_0108de44(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_198;
  undefined *local_190;
  undefined *local_168;
  ulong local_138;
  byte local_129;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  uint local_c4;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  local_c0 = param_2;
  FUN_0108e290();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  uVar3 = local_b8;
  if (uVar1 == 0) {
    if (local_c0 < 1) {
      local_b0 = 0;
      local_c4 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_b8,0);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_168 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = local_168;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _memset(auStack_120,0,0x40);
      puVar2 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      if (local_190 != (undefined *)0x0) {
        lVar5 = *local_110;
        local_198 = (undefined *)0x0;
        do {
          do {
            if (*local_110 - lVar5 != 0) {
              _objc_enumerationMutation(*local_110 - lVar5,puVar2);
            }
            local_e0 = *(undefined8 *)(local_118 + (long)local_198 * 8);
            uVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_stringByAppendingPathComponent__026cab30,local_e0);
            _objc_retainAutoreleasedReturnValue();
            local_128 = uVar3;
            FUN_0107d2f4();
            if ((uVar3 & 1) == 0) {
              local_129 = 0;
              puVar4 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_128,&local_129)
              ;
              if ((((ulong)puVar4 & 1) == 0) || ((local_129 & 1) == 0)) {
                local_c4 = 3;
              }
              else {
                uVar1 = local_128;
                FUN_0108de44(local_128,local_c0 + -1);
                _objc_retainAutoreleasedReturnValue();
                local_138 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
                uVar3 = local_138;
                if (uVar1 != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = uVar3;
                }
                local_c4 = (uint)(uVar1 != 0);
                _objc_storeStrong(&local_138,0);
              }
            }
            else {
              local_c4 = 3;
            }
            _objc_storeStrong(&local_128,0);
            if ((local_c4 != 0) && (local_c4 != 3)) goto LAB_0108e1f8;
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_198 = (undefined *)0x0;
        } while (local_190 != (undefined *)0x0);
      }
      local_c4 = 0;
LAB_0108e1f8:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_c4 == 0) {
        local_b0 = 0;
        local_c4 = 1;
      }
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_d0,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar3;
    local_c4 = 1;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

