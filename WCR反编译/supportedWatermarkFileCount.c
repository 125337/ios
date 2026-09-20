// supportedWatermarkFileCount @ 01fb007c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineWatermarkLibraryViewController::supportedWatermarkFileCount
                    (ID param_1,SEL param_2)

{
  long_long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_158;
  undefined *local_150;
  undefined *local_128;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  long_long local_d0;
  undefined *local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,
             *(undefined8 *)(local_b0 + (long)_libraryDirectory),0);
  _objc_retainAutoreleasedReturnValue();
  local_128 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_128 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_128;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  puVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_150 != (undefined *)0x0) {
    lVar4 = *local_108;
    local_158 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,puVar2);
        }
        uVar5 = *(ulong *)(local_110 + (long)local_158 * 8);
        local_d8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        FUN_01fa5868();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar3 & 1) != 0) {
          local_d0 = local_d0 + 1;
        }
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_158 = (undefined *)0x0;
    } while (local_150 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar1 = local_d0;
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

