// firstImagePathInFolder: @ 0182988c

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarFrameLibraryViewController::firstImagePathInFolder_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c8,0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  _memset(auStack_120,0,0x40);
  puVar2 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_150 != (undefined *)0x0) {
    lVar5 = *local_110;
    local_158 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,puVar2);
        }
        uVar6 = *(ulong *)(local_118 + (long)local_158 * 8);
        local_e0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        FUN_01826888();
        (*(code *)PTR__objc_release_02578630)(uVar6);
        if ((uVar3 & 1) != 0) {
          IVar4 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_e0);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_b0 = IVar4;
          goto LAB_01829ac8;
        }
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_158 = (undefined *)0x0;
    } while (local_150 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_01829ac8:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (!bVar1) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

