// openFrameEditorWithImage: @ 017f3be0

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::openFrameEditorWithImage_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1b8 [3];
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  long local_180;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined *local_168;
  undefined *local_160;
  ulong local_158;
  ulong local_150;
  byte local_141;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  if (local_c0 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrR_1Y_);
    local_c4 = 1;
  }
  else {
    uVar1 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_d8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_d8,0);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = 0;
    local_e8 = puVar3;
    _memset(auStack_138,0,0x40);
    puVar3 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1e0 != (undefined *)0x0) {
      lVar8 = *local_128;
      local_1e8 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar8 != 0) {
            _objc_enumerationMutation(*local_128 - lVar8,puVar3);
          }
          local_f8 = *(ulong *)(local_130 + (long)local_1e8 * 8);
          uVar2 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_stringByAppendingPathComponent__026cab30,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_141 = 0;
          puVar4 = local_e0;
          local_140 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar2,&local_141);
          if (((((ulong)puVar4 & 1) != 0) && ((local_141 & 1) != 0)) &&
             (uVar5 = local_f8,
             (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_hasPrefix__0269d320,&::cf_W),
             uVar7 = local_f8, (uVar5 & 1) != 0)) {
            pcVar6 = &::cf_W;
            (*(code *)PTR__objc_msgSend_02578628)(&::cf_W,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_substringFromIndex__0269d120,pcVar6);
            _objc_retainAutoreleasedReturnValue();
            local_150 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_integerValue_026ca750);
            uVar5 = uVar7 - local_f0;
            if (uVar7 - local_f0 != 0 && (long)local_f0 <= (long)uVar7) {
              uVar5 = uVar7;
              local_f0 = uVar7;
            }
            local_158 = uVar7;
            _objc_storeStrong(uVar5,&local_150,0);
          }
          _objc_storeStrong(&local_140,0);
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1e8 = (undefined *)0x0;
      } while (local_1e0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_f0 = local_f0 + 1;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_W);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineScreenshotFrameEditorViewController_026cf038;
    local_160 = puVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_168 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setDefaultName__026b5948,local_160);
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setDefaultAuthor__026b5950,&cf___);
    _objc_initWeak(auStack_170,local_b0);
    local_1a0 = PTR___NSConcreteStackBlock_02578660;
    local_198 = 0xc2000000;
    local_194 = 0;
    local_190 = FUN_017f426c;
    local_188 = &DAT_02589318;
    _objc_copyWeak(auStack_178,auStack_170);
    lVar8 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = lVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_setOnSave__026b5960,&local_1a0);
    puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_initWithRootViewController__0269d2a0,local_168);
    local_1b8[0] = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setModalPresentationStyle__0269d2a8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_presentViewController_animated_c_0269d2b0,local_1b8[0],1,0);
    _objc_storeStrong(local_1b8);
    _objc_storeStrong(&local_180,0);
    _objc_destroyWeak(auStack_178);
    _objc_destroyWeak(auStack_170);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

