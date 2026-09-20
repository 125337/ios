// exportFiles: @ 01c78a84

/* Function Stack Size: 0x18 bytes */

void WCRefinePageBackgroundLibraryViewController::exportFiles_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong local_158;
  ulong local_150;
  undefined *local_128;
  uint local_11c;
  undefined *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  undefined *local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  _memset(auStack_110,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_150 != 0) {
    lVar5 = *local_100;
    local_158 = 0;
    do {
      do {
        if (*local_100 - lVar5 != 0) {
          _objc_enumerationMutation(*local_100 - lVar5,uVar1);
        }
        local_d0 = *(undefined8 *)(local_108 + local_158 * 8);
        puVar2 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_repositoryPath_026aeb48);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByAppendingPathComponent__026cab30)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_118 = puVar4;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_c8;
        if (((ulong)puVar4 & 1) != 0) {
          puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_118);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        _objc_storeStrong(&local_118,0);
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if (puVar2 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_128 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_presentViewController_animated_c_0269d2b0,puVar4,1);
    _objc_storeStrong(&local_128,0);
  }
  local_11c = (uint)(puVar2 == (undefined *)0x0);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

