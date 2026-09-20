// FUN_0089bfb0 @ 0089bfb0

void FUN_0089bfb0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *local_158;
  undefined *local_150;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0 [3];
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_b0,0);
  _objc_retainAutoreleasedReturnValue();
  local_d0[0] = puVar1;
  _memset(auStack_118,0,0x40);
  puVar1 = local_d0[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_150 != (undefined *)0x0) {
    lVar3 = *local_108;
    local_158 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar3 != 0) {
          _objc_enumerationMutation(*local_108 - lVar3,puVar1);
        }
        local_d8 = *(undefined8 *)(local_110 + (long)local_158 * 8);
        uVar2 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_120 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_removeItemAtPath_error__0269f910,uVar2,0);
        _objc_storeStrong(&local_120,0);
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_158 = (undefined *)0x0;
    } while (local_150 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(local_d0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

