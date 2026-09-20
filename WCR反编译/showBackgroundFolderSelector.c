// showBackgroundFolderSelector @ 01897fa0

/* Function Stack Size: 0x10 bytes */

void WCRefineChatAvatarProfileCardViewController::showBackgroundFolderSelector
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  char *pcVar4;
  long lVar5;
  undefined *local_180;
  undefined *local_178;
  undefined *local_150;
  long local_148;
  char *local_140;
  ID local_138;
  byte local_129;
  ID local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined *local_d8;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_backgroundBasePath_026b73b8);
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
  puVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  _memset(auStack_120,0,0x40);
  puVar1 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_178 != (undefined *)0x0) {
    lVar5 = *local_110;
    local_180 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,puVar1);
        }
        local_e0 = *(undefined8 *)(local_118 + (long)local_180 * 8);
        IVar3 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_e0);
        _objc_retainAutoreleasedReturnValue();
        local_129 = 0;
        puVar2 = local_c8;
        local_128 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_fileExistsAtPath_isDirectory__026ca638,IVar3,&local_129);
        if ((((ulong)puVar2 & 1) != 0) && ((local_129 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
        }
        _objc_storeStrong(&local_128,0);
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_180 = (undefined *)0x0;
    } while (local_178 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    IVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_138 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_createDirectoryAtPath_withInterm_0269e230,IVar3,1,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,&::cf__);
    _objc_storeStrong(&local_138,0);
  }
  pcVar4 = "WCUIActionSheet";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_140 = pcVar4;
  for (local_148 = 0; lVar5 = local_148, puVar1 = local_d8,
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0), lVar5 < (long)puVar1;
      local_148 = local_148 + 1) {
    puVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d8,PTR_s_objectAtIndexedSubscript__0269cc78,local_148);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_150 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_selectChatAvatarProfileCardFolder_ld_);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_addFolderSelectionMethod_folderN_026b73c0,puVar1,local_150);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_addBtnTitle_target_sel__0269d278,local_150,local_b0,puVar1);
    _objc_storeStrong(&local_150,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_140,PTR_s_addBtnTitle_target_sel__0269d278,&cf_R_eeN9Y,local_b0,
             PTR_s_showCreateFolderDialog_026b6f20);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_140,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
  pcVar4 = local_140;
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_showInView__0269d310);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_140,0);
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

