// FUN_010c313c @ 010c313c

void FUN_010c313c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_278;
  undefined *local_270;
  undefined *local_230;
  undefined *local_228;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  long local_1a8;
  undefined4 local_1a0;
  byte local_199;
  undefined8 local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  long local_150;
  undefined *local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_138 = param_1;
  local_130 = param_1;
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_cacheRootPath_026ae668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _memset(auStack_190,0,0x40);
  puVar1 = local_148;
  (*(code *)PTR__objc_retain_02578638)();
  local_228 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10);
  if (local_228 != (undefined *)0x0) {
    lVar5 = *local_180;
    local_230 = (undefined *)0x0;
    do {
      do {
        if (*local_180 - lVar5 != 0) {
          _objc_enumerationMutation(*local_180 - lVar5,puVar1);
        }
        lVar6 = *(long *)(local_188 + (long)local_230 * 8);
        local_150 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
        if (lVar6 != 0) {
          uVar3 = *(undefined8 *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_cacheRootPath_026ae668);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_198 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          local_199 = 0;
          puVar4 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_198,&local_199);
          if ((((ulong)puVar4 & 1) == 0) || ((local_199 & 1) == 0)) {
            local_1a0 = 3;
          }
          else {
            local_1a8 = 0;
            _memset(auStack_1f0,0,0x40);
            puVar4 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_198,0);
            _objc_retainAutoreleasedReturnValue();
            local_270 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_270 != (undefined *)0x0) {
              lVar6 = *local_1e0;
              local_278 = (undefined *)0x0;
              do {
                do {
                  if (*local_1e0 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_1e0 - lVar6,puVar4);
                  }
                  uVar7 = *(ulong *)(local_1e8 + (long)local_278 * 8);
                  local_1b0 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_hasSuffix__0269d018,&cf__dat);
                  if ((uVar7 & 1) != 0) {
                    local_1a8 = local_1a8 + 1;
                  }
                  local_278 = local_278 + 1;
                } while (local_278 < local_270);
                local_270 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                           auStack_128,0x10);
                local_278 = (undefined *)0x0;
              } while (local_270 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                       local_1a8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKeyedSubscript__0269d248,
                       puVar4,local_150);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            local_1a0 = 0;
          }
          _objc_storeStrong(&local_198,0);
        }
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10)
      ;
      local_230 = (undefined *)0x0;
    } while (local_228 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

