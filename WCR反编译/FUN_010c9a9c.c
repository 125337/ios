// FUN_010c9a9c @ 010c9a9c

void FUN_010c9a9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_160;
  undefined *local_158;
  undefined *local_120;
  undefined8 local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
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
  _objc_alloc_init();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_cacheRootPath_026ae668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_enumeratorAtPath__026ad0c8);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _memset(auStack_110,0,0x40);
  puVar1 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_158 != (undefined *)0x0) {
    lVar6 = *local_100;
    local_160 = (undefined *)0x0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,puVar1);
        }
        local_d0 = *(undefined8 *)(local_108 + (long)local_160 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_cacheRootPath_026ae668);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_118 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        puVar4 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_attributesOfItemAtPath_error__0269db08,local_118,0);
        _objc_retainAutoreleasedReturnValue();
        local_120 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_objectForKeyedSubscript__0269d098,
                   *(undefined8 *)PTR__NSFileType_02578030);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (((ulong)puVar5 & 1) != 0) {
          puVar4 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectForKeyedSubscript__0269d098,
                     *(undefined8 *)PTR__NSFileSize_02578028);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          *(undefined **)(lVar7 + 0x18) = puVar5 + *(long *)(lVar7 + 0x18);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        _objc_storeStrong(&local_120);
        _objc_storeStrong(&local_118,0);
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_160 = (undefined *)0x0;
    } while (local_158 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

