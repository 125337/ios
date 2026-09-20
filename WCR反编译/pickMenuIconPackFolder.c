// pickMenuIconPackFolder @ 01e24f48

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatSettingsViewController::pickMenuIconPackFolder(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ID IVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *local_498;
  undefined *local_468;
  undefined *local_460;
  undefined *local_3b8;
  undefined *local_370;
  undefined *local_368;
  undefined *local_350;
  undefined *local_328;
  undefined4 local_320;
  undefined4 local_31c;
  code *local_318;
  undefined *local_310;
  undefined1 auStack_308 [15];
  undefined1 local_2f9;
  undefined *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  code *local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined1 auStack_2d0 [15];
  byte local_2c1;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined1 auStack_2b0 [8];
  long local_2a8;
  long *local_2a0;
  undefined *local_270;
  undefined *local_268;
  undefined1 auStack_260 [8];
  undefined *local_258;
  undefined1 local_24d;
  undefined *local_240;
  undefined4 local_238;
  undefined4 local_234;
  code *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined1 auStack_218 [8];
  undefined **local_210;
  undefined1 auStack_208 [8];
  undefined *local_200;
  bool local_1f1;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  long local_1d8;
  undefined *local_1d0;
  char *local_1c8;
  char *local_1c0;
  undefined *local_1b8;
  undefined4 local_1ac;
  undefined *local_1a8;
  byte local_199;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuIconPackRootAbsoluteDirector_026b18d0)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_140 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_148 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_150 = puVar4;
  _memset(auStack_198,0,0x40);
  puVar4 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_148,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_140,0);
  _objc_retainAutoreleasedReturnValue();
  local_350 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_350 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  local_368 = local_350;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_350,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10);
  if (local_368 != (undefined *)0x0) {
    lVar11 = *local_188;
    local_370 = (undefined *)0x0;
    do {
      do {
        if (*local_188 - lVar11 != 0) {
          _objc_enumerationMutation(*local_188 - lVar11,local_350);
        }
        local_158 = *(ulong *)(local_190 + (long)local_370 * 8);
        local_199 = 0;
        puVar4 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_stringByAppendingPathComponent__026cab30,local_158);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_158;
        local_1a8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_hasPrefix__0269d320,&::cf__);
        if ((uVar5 & 1) == 0) {
          puVar4 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_148,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_1a8,&local_199);
          if ((((ulong)puVar4 & 1) != 0) && ((local_199 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_158);
          }
          local_1ac = 0;
        }
        else {
          local_1ac = 3;
        }
        _objc_storeStrong(&local_1a8,0);
        local_370 = local_370 + 1;
      } while (local_370 < local_368);
      local_368 = local_350;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_350,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                 0x10);
      local_370 = (undefined *)0x0;
    } while (local_368 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_350);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_sortUsingSelector__0269e0a0,PTR_s_localizedStandardCompare__0269e098);
  puVar4 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsObject__0269cbb8,&::cf__);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_createDirectoryAtPath_withInterm_0269e230,puVar4,1,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_insertObject_atIndex__0269eac0,&::cf__,0);
    _objc_storeStrong(&local_1b8,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_removeObject__0269d678);
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_insertObject_atIndex__0269eac0,&::cf__,0);
  }
  pcVar6 = "WCUIActionSheet";
  _objc_getClass();
  local_1c0 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_bcVheN9Y,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_258 = puVar4;
    _objc_initWeak(auStack_260,local_130);
    puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuIconPackFolder_026b18c8);
    _objc_retainAutoreleasedReturnValue();
    local_268 = puVar4;
    _memset(auStack_2b0,0,0x40);
    puVar4 = local_150;
    (*(code *)PTR__objc_retain_02578638)();
    local_460 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,0x10);
    if (local_460 != (undefined *)0x0) {
      lVar11 = *local_2a0;
      local_468 = (undefined *)0x0;
      do {
        do {
          if (*local_2a0 - lVar11 != 0) {
            _objc_enumerationMutation(*local_2a0 - lVar11,puVar4);
          }
          puVar12 = *(undefined **)(local_2a8 + (long)local_468 * 8);
          local_2c1 = 0;
          local_270 = puVar12;
          (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_isEqualToString__0269ccc8,local_268);
          if (((ulong)puVar12 & 1) == 0) {
            local_498 = local_270;
          }
          else {
            local_498 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_2c1 = 1;
            local_2c0 = local_498;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_2b8 = local_498;
          if ((local_2c1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_2c0);
          }
          puVar3 = local_258;
          puVar2 = local_2b8;
          puVar12 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
          local_2f8 = PTR___NSConcreteStackBlock_02578660;
          local_2f0 = 0xc2000000;
          local_2ec = 0;
          local_2e8 = FUN_01e26128;
          local_2e0 = &DAT_0258a148;
          puVar10 = local_270;
          (*(code *)PTR__objc_retain_02578638)();
          local_2d8 = puVar10;
          _objc_copyWeak(auStack_2d0,auStack_260);
          local_2f9 = 1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar12,PTR_s_actionWithTitle_style_handler__0269dc08,puVar2,0,&local_2f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
          local_2f9 = 0;
          (*(code *)PTR__objc_release_02578630)(puVar12);
          _objc_destroyWeak(auStack_2d0);
          _objc_storeStrong(&local_2d8);
          _objc_storeStrong(&local_2b8,0);
          local_468 = local_468 + 1;
        } while (local_468 < local_460);
        local_460 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b0,auStack_128,
                   0x10);
        local_468 = (undefined *)0x0;
      } while (local_460 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar12 = local_258;
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_328 = PTR___NSConcreteStackBlock_02578660;
    local_320 = 0xc2000000;
    local_31c = 0;
    local_318 = FUN_01e26244;
    local_310 = &DAT_02583468;
    _objc_copyWeak(auStack_308,auStack_260);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_e_eN9Y,0,&local_328);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_258;
    puVar12 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_presentViewController_animated_c_0269d2b0,local_258,1,0);
    _objc_destroyWeak(auStack_308);
    _objc_storeStrong(&local_268);
    _objc_destroyWeak(auStack_260);
    _objc_storeStrong(&local_258,0);
    local_1ac = 0;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
    local_1c8 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuIconPackFolder_026b18c8);
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = puVar4;
    for (local_1d8 = 0; lVar11 = local_1d8, puVar4 = local_150,
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0), lVar11 < (long)puVar4
        ; local_1d8 = local_1d8 + 1) {
      puVar4 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_150,PTR_s_objectAtIndexedSubscript__0269cc78,local_1d8);
      _objc_retainAutoreleasedReturnValue();
      local_1e0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isEqualToString__0269ccc8,local_1d0);
      local_1f1 = false;
      bVar1 = ((ulong)puVar4 & 1) == 0;
      if (bVar1) {
        local_3b8 = local_1e0;
      }
      else {
        local_3b8 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_1f0 = local_3b8;
      }
      local_1f1 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = local_3b8;
      if ((local_1f1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1f0);
      }
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_wcr_selectMenuIconPack__ld_);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar4;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_200 = puVar12;
      _objc_initWeak(auStack_208,local_130);
      puVar4 = local_1e0;
      ppuVar7 = &local_240;
      local_240 = PTR___NSConcreteStackBlock_02578660;
      local_238 = 0xc2000000;
      local_234 = 0;
      local_230 = FUN_01e25fe8;
      local_228 = &DAT_02581a90;
      (*(code *)PTR__objc_retain_02578638)();
      local_220 = puVar4;
      _objc_copyWeak(auStack_218,auStack_208);
      local_24d = 1;
      _objc_retainBlock();
      ppuVar8 = ppuVar7;
      _imp_implementationWithBlock();
      local_24d = 0;
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      IVar9 = local_130;
      local_210 = ppuVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_class_0269cd60);
      _class_replaceMethod(IVar9,local_200,local_210,"v@:@");
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c8,PTR_s_addBtnTitle_target_sel__0269d278,local_1e8,local_130,local_200);
      _objc_destroyWeak(auStack_218);
      _objc_storeStrong(&local_220);
      _objc_destroyWeak(auStack_208);
      _objc_storeStrong(&local_1e8,0);
      _objc_storeStrong(&local_1e0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c8,PTR_s_addBtnTitle_target_sel__0269d278,&cf_e_eN9Y,local_130,
               PTR_s_createMenuIconPackFolder_026c61e8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c8,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar6 = local_1c8;
    IVar9 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar9);
    local_1ac = 1;
    _objc_storeStrong(&local_1d0,0);
    _objc_storeStrong(&local_1c8,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

