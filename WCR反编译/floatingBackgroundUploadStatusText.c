// floatingBackgroundUploadStatusText @ 019c371c

/* Function Stack Size: 0x10 bytes */

ID WCRefineFloatingTabBarSettingsViewController::floatingBackgroundUploadStatusText
             (ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_b8;
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_currentFloatingBackgroundFolderP_026bacc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,IVar3,0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _memset(auStack_118,0,0x40);
  puVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_150 != (undefined *)0x0) {
    lVar6 = *local_108;
    local_158 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar6 != 0) {
          _objc_enumerationMutation(*local_108 - lVar6,puVar2);
        }
        lVar7 = *(long *)(local_110 + (long)local_158 * 8);
        local_d8 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar7;
        FUN_019c3a4c();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
        (*(code *)PTR__objc_release_02578630)(lVar7);
        if (lVar5 != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = &cf__X__W;
          bVar1 = true;
          goto LAB_019c39a8;
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
  bVar1 = false;
LAB_019c39a8:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (!bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf_NO;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

