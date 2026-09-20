// selectMsgBannerBackgroundImageFolder @ 01b97248

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBannerBeautifyViewController::selectMsgBannerBackgroundImageFolder
               (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ID IVar9;
  long lVar10;
  undefined *local_220;
  undefined *local_218;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  undefined **local_198;
  undefined1 auStack_190 [8];
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  char *local_168;
  undefined4 local_15c;
  char *local_158;
  undefined8 local_150;
  byte local_141;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fileExistsAtPath__026ca630,local_c8);
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_c8,1,0);
  }
  local_d8 = 0;
  local_e8 = 0;
  puVar3 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c8,&local_e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_d8,local_e8);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar4;
  _memset(auStack_138,0,0x40);
  puVar3 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_218 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_218 != (undefined *)0x0) {
    lVar10 = *local_128;
    local_220 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar10 != 0) {
          _objc_enumerationMutation(*local_128 - lVar10,puVar3);
        }
        local_f8 = *(ulong *)(local_130 + (long)local_220 * 8);
        uVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_f8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_d0;
        local_140 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar2,&local_141);
        if (((((ulong)puVar4 & 1) != 0) && ((local_141 & 1) != 0)) &&
           (uVar5 = local_f8,
           (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_hasPrefix__0269d320,&::cf__),
           (uVar5 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_f8);
        }
        _objc_storeStrong(&local_140,0);
        local_220 = local_220 + 1;
      } while (local_220 < local_218);
      local_218 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_220 = (undefined *)0x0;
    } while (local_218 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
  if (puVar3 == (undefined *)0x0) {
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_150 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_createDirectoryAtPath_withInterm_0269e230,uVar2,1,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,&::cf__);
    _objc_storeStrong(&local_150,0);
  }
  pcVar6 = "WCUIActionSheet";
  _objc_getClass();
  local_158 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    local_15c = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_168 = pcVar6;
    for (local_170 = (undefined *)0x0; puVar3 = local_170, puVar4 = local_f0,
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0), puVar3 < puVar4;
        local_170 = local_170 + 1) {
      puVar3 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0,PTR_s_objectAtIndexedSubscript__0269cc78,local_170);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_178 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_selectMsgBannerImageFolder_ld_);
      _objc_retainAutoreleasedReturnValue();
      local_180 = puVar4;
      _NSSelectorFromString();
      local_188 = puVar4;
      _objc_initWeak(auStack_190,local_b0);
      puVar3 = local_178;
      ppuVar7 = &local_1c8;
      local_1c8 = PTR___NSConcreteStackBlock_02578660;
      local_1c0 = 0xc2000000;
      local_1bc = 0;
      local_1b8 = FUN_01b97b24;
      local_1b0 = &DAT_02581a90;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8 = puVar3;
      _objc_copyWeak(auStack_1a0,auStack_190);
      _objc_retainBlock();
      ppuVar8 = ppuVar7;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      IVar9 = local_b0;
      local_198 = ppuVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
      _class_replaceMethod(IVar9,local_188,local_198,"v@:@");
      (*(code *)PTR__objc_msgSend_02578628)
                (local_168,PTR_s_addBtnTitle_target_sel__0269d278,local_178,local_b0,local_188);
      _objc_destroyWeak(auStack_1a0);
      _objc_storeStrong(&local_1a8);
      _objc_destroyWeak(auStack_190);
      _objc_storeStrong(&local_180,0);
      _objc_storeStrong(&local_178,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_addBtnTitle_target_sel__0269d278,&cf_e_eN9Y,local_b0,
               PTR_s_showCreateMsgBannerImageFolderDi_026c00c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_168,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar6 = local_168;
    IVar9 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar9);
    _objc_storeStrong(&local_168,0);
    local_15c = 0;
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e0,0);
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

