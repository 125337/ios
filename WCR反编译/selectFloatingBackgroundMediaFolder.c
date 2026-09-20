// selectFloatingBackgroundMediaFolder @ 019c3cb0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineFloatingTabBarSettingsViewController::selectFloatingBackgroundMediaFolder
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1d8;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined1 auStack_180 [8];
  undefined **local_178;
  undefined1 auStack_170 [8];
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  char *local_150;
  undefined4 local_144;
  char *local_140;
  ID local_138;
  byte local_129;
  ID local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHaptic_026bab98);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_floatingBackgroundBasePath_026bacb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_c0,1,0);
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c0,0);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_1d8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_1d8;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  _memset(auStack_120,0,0x40);
  puVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_200 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_200 != (undefined *)0x0) {
    lVar8 = *local_110;
    local_208 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar8 != 0) {
          _objc_enumerationMutation(*local_110 - lVar8,puVar2);
        }
        local_e0 = *(ulong *)(local_118 + (long)local_208 * 8);
        IVar1 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_e0);
        _objc_retainAutoreleasedReturnValue();
        local_129 = 0;
        puVar3 = local_c8;
        local_128 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_fileExistsAtPath_isDirectory__026ca638,IVar1,&local_129);
        if (((((ulong)puVar3 & 1) != 0) && ((local_129 & 1) != 0)) &&
           (uVar4 = local_e0,
           (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_hasPrefix__0269d320,&::cf__),
           (uVar4 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
        }
        _objc_storeStrong(&local_128,0);
        local_208 = local_208 + 1;
      } while (local_208 < local_200);
      local_200 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_208 = (undefined *)0x0;
    } while (local_200 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    IVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_138 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_createDirectoryAtPath_withInterm_0269e230,IVar1,1,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,&::cf__);
    _objc_storeStrong(&local_138,0);
  }
  pcVar5 = "WCUIActionSheet";
  _objc_getClass();
  local_140 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    local_144 = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_150 = pcVar5;
    for (local_158 = (undefined *)0x0; puVar2 = local_158, puVar3 = local_d8,
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0), puVar2 < puVar3;
        local_158 = local_158 + 1) {
      puVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_objectAtIndexedSubscript__0269cc78,local_158);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_160 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_selectFloatingBgFolder_ld_);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_168 = puVar2;
      _objc_initWeak(auStack_170,local_b0);
      puVar2 = local_160;
      ppuVar6 = &local_1a8;
      local_1a8 = PTR___NSConcreteStackBlock_02578660;
      local_1a0 = 0xc2000000;
      local_19c = 0;
      local_198 = FUN_019c4520;
      local_190 = &DAT_02581a90;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = puVar2;
      _objc_copyWeak(auStack_180,auStack_170);
      _objc_retainBlock();
      ppuVar7 = ppuVar6;
      _imp_implementationWithBlock();
      (*(code *)PTR__objc_release_02578630)(ppuVar6);
      IVar1 = local_b0;
      local_178 = ppuVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
      _class_replaceMethod(IVar1,local_168,local_178,"v@:@");
      (*(code *)PTR__objc_msgSend_02578628)
                (local_150,PTR_s_addBtnTitle_target_sel__0269d278,local_160,local_b0,local_168);
      _objc_destroyWeak(auStack_180);
      _objc_storeStrong(&local_188);
      _objc_destroyWeak(auStack_170);
      _objc_storeStrong(&local_160,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_addBtnTitle_target_sel__0269d278,&cf_e_eN9Y,local_b0,
               PTR_s_showCreateFloatingBackgroundFold_026bacd0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_150,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar5 = local_150;
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_150,0);
    local_144 = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

