// currentFolderHasMediaFile @ 0187d0bc

/* Function Stack Size: 0x10 bytes */

bool WCRefineChatAttachmentBeautifyViewController::currentFolderHasMediaFile(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *local_170;
  undefined *local_168;
  undefined *local_140;
  long local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  undefined *local_d0;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentFolderPathEnsureExists_026b6ea8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_140 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_140;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_118,0,0x40);
  puVar3 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_168 != (undefined *)0x0) {
    lVar6 = *local_108;
    local_170 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar6 != 0) {
          _objc_enumerationMutation(*local_108 - lVar6,puVar3);
        }
        lVar7 = *(long *)(local_110 + (long)local_170 * 8);
        local_d8 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_120 = lVar5;
        (*(code *)PTR__objc_release_02578630)(lVar7);
        lVar5 = local_120;
        FUN_0187d458();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar5);
        bVar2 = lVar7 != 0;
        if (bVar2) {
          local_a9 = 1;
        }
        _objc_storeStrong(bVar2,&local_120,0);
        bVar1 = true;
        if (bVar2) goto LAB_0187d3c0;
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_170 = (undefined *)0x0;
    } while (local_168 != (undefined *)0x0);
  }
  bVar1 = false;
LAB_0187d3c0:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar1) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

