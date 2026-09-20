// showSeparatorFolderSelector @ 01c68b10

/* Function Stack Size: 0x10 bytes */

void WCRefineNavigationAvatarViewController::showSeparatorFolderSelector(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  char *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_168;
  undefined *local_160;
  int local_154;
  char *local_150;
  ID local_148;
  byte local_139;
  ID local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getSeparatorBasePath_026c24b8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630,local_c0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_c0,1,0);
  }
  local_d0 = 0;
  local_e0 = 0;
  puVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c0,&local_e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_d0,local_e0);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar5;
  _memset(auStack_130,0,0x40);
  puVar1 = local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_1a0 != (undefined *)0x0) {
    lVar4 = *local_120;
    local_1a8 = (undefined *)0x0;
    do {
      do {
        if (*local_120 - lVar4 != 0) {
          _objc_enumerationMutation(*local_120 - lVar4,puVar1);
        }
        local_f0 = *(undefined8 *)(local_128 + (long)local_1a8 * 8);
        IVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_c8;
        local_138 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_fileExistsAtPath_isDirectory__026ca638,IVar2,&local_139);
        if ((((ulong)puVar5 & 1) != 0) && ((local_139 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,local_f0);
        }
        _objc_storeStrong(&local_138,0);
        local_1a8 = local_1a8 + 1;
      } while (local_1a8 < local_1a0);
      local_1a0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10)
      ;
      local_1a8 = (undefined *)0x0;
    } while (local_1a0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    IVar2 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_148 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_createDirectoryAtPath_withInterm_0269e230,IVar2,1,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_addObject__0269d180,&::cf__);
    _objc_storeStrong(&local_148,0);
  }
  pcVar3 = "WCUIActionSheet";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_150 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_addBtnTitle_target_sel__0269d278,&cf_RYSR__,local_b0,
             PTR_s_restoreDefaultSeparator_026c2568);
  for (local_154 = 0; puVar5 = (undefined *)(long)local_154, puVar1 = local_e8,
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0), puVar5 < puVar1;
      local_154 = local_154 + 1) {
    puVar1 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_objectAtIndexedSubscript__0269cc78,(long)local_154);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_160 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_selectSeparatorFolder_d_);
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar5;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_addDynamicMethodForSeparatorSele_026c2570,puVar5,local_160,local_c0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_addBtnTitle_target_sel__0269d278,local_160,local_b0,puVar5);
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_160,0);
  }
  _objc_setAssociatedObject(local_150,"basePath",local_c0,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_addBtnTitle_target_sel__0269d278,&cf_e_eN9Y,local_b0,
             PTR_s_showCreateSeparatorFolderDialog__026c2578);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
  pcVar3 = local_150;
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showInView__0269d310);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

