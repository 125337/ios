// FUN_01108628 @ 01108628

void FUN_01108628(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *local_160;
  undefined *local_158;
  undefined *local_140;
  undefined8 local_128;
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_c9;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_createDirectoryAtPath_withInterm_0269e230,*(undefined8 *)(param_1 + 0x20),
             1,0);
  FUN_011089a8();
  _objc_retainAutoreleasedReturnValue();
  local_c9 = 0;
  puVar2 = local_c0;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_fileExistsAtPath_isDirectory__026ca638,puVar1,&local_c9);
  if ((((ulong)puVar2 & 1) == 0) || ((local_c9 & 1) == 0)) {
    local_d0 = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    puVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c8,0);
    _objc_retainAutoreleasedReturnValue();
    local_140 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_140 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_158 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
              );
    if (local_158 != (undefined *)0x0) {
      lVar4 = *local_108;
      local_160 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar4 != 0) {
            _objc_enumerationMutation(*local_108 - lVar4,local_140);
          }
          local_d8 = *(undefined8 *)(local_110 + (long)local_160 * 8);
          puVar1 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          local_120 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_c0;
          local_128 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_fileExistsAtPath__026ca630,uVar3);
          if (((ulong)puVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_moveItemAtPath_toPath_error__0269f940,local_120,local_128,0);
          }
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_120,0);
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_160 = (undefined *)0x0;
      } while (local_158 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(local_140);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

