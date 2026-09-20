// FUN_016c2a78 @ 016c2a78

void FUN_016c2a78(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong local_178;
  ulong local_170;
  byte local_121;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  cfstringStruct *local_e0;
  undefined *local_d8;
  ulong local_d0;
  int local_c8;
  ulong local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if ((local_b8 == 0) ||
     (uVar2 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_getVoicePath_026a4578),
     (uVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_c8 = 1;
  }
  else {
    uVar2 = local_b8;
    FUN_016c2914(local_b8,PTR_s_getVoicePath_026a4578);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_016c2eb0();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar4;
    _memset(auStack_120,0,0x40);
    uVar2 = local_d0;
    FUN_016c3098();
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_170 != 0) {
      lVar5 = *local_110;
      local_178 = 0;
      do {
        do {
          if (*local_110 - lVar5 != 0) {
            _objc_enumerationMutation(*local_110 - lVar5,uVar2);
          }
          local_e0 = *(cfstringStruct **)(local_118 + local_178 * 8);
          local_121 = 0;
          puVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_e0,&local_121);
          pcVar1 = local_e0;
          if ((((ulong)puVar4 & 1) != 0) && ((local_121 & 1) == 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = pcVar1;
            local_c8 = 1;
            goto LAB_016c2dc4;
          }
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    local_c8 = 0;
LAB_016c2dc4:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_c8 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_c8 = 1;
    }
    _objc_storeStrong(&local_d8);
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

