// imageCountInDirectory: @ 010830c8

/* Function Stack Size: 0x18 bytes */

unsigned_long_long
WCRefineLocalEmoticonStore::imageCountInDirectory_(ID param_1,SEL param_2,ID param_3)

{
  unsigned_long_long uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_178;
  undefined *local_170;
  undefined *local_148;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  unsigned_long_long local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_148 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_148;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  puVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_170 != (undefined *)0x0) {
    lVar7 = *local_108;
    local_178 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar7 != 0) {
          _objc_enumerationMutation(*local_108 - lVar7,puVar2);
        }
        uVar8 = *(ulong *)(local_110 + (long)local_178 * 8);
        local_d8 = uVar8;
        FUN_0107d2f4();
        if ((uVar8 & 1) == 0) {
          uVar4 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          local_120 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (((ulong)puVar5 & 1) != 0) {
            uVar8 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar8;
            FUN_0107b0d4();
            (*(code *)PTR__objc_release_02578630)(uVar8);
            if ((uVar6 & 1) != 0) {
              local_d0 = local_d0 + 1;
            }
          }
          _objc_storeStrong(&local_120,0);
        }
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_178 = (undefined *)0x0;
    } while (local_170 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = local_d0;
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

