// FUN_010becb0 @ 010becb0

void FUN_010becb0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_160;
  undefined *local_158;
  undefined8 local_120;
  byte local_111;
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
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_b8 = param_1;
  local_b0 = param_1;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_cacheRootPath_026ae668);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  puVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_158 != (undefined *)0x0) {
    lVar7 = *local_100;
    local_160 = (undefined *)0x0;
    do {
      do {
        if (*local_100 - lVar7 != 0) {
          _objc_enumerationMutation(*local_100 - lVar7,puVar2);
        }
        local_d0 = *(undefined8 *)(local_108 + (long)local_160 * 8);
        local_111 = 0;
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_cacheRootPath_026ae668);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_120 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = 0;
        if (((ulong)puVar6 & 1) != 0) {
          bVar1 = local_111;
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if ((bVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_d0);
        }
        _objc_storeStrong(&local_120,0);
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10)
      ;
      local_160 = (undefined *)0x0;
    } while (local_158 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28,local_c8);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

