// toDoBackgroundMediaFolders @ 01eca1b4

/* WARNING: Removing unreachable block (ram,0x01eca448) */
/* WARNING: Removing unreachable block (ram,0x01eca498) */
/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoListSettingsViewController::toDoBackgroundMediaFolders(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_170;
  undefined *local_168;
  undefined *local_140;
  ID local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ensureToDoBackgroundBaseFolders_026c7a78);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_toDoBackgroundBasePath_026c7b80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_140 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_140 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_140;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  _memset(auStack_118,0,0x40);
  puVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_168 != (undefined *)0x0) {
    lVar4 = *local_108;
    local_170 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,puVar2);
        }
        local_d8 = *(undefined8 *)(local_110 + (long)local_170 * 8);
        IVar1 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_d8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_120 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_120,0);
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_170 = (undefined *)0x0;
    } while (local_168 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,&::cf__);
  }
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar2;
}

