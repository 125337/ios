// presentDocumentPicker @ 01aa17a4

/* Function Stack Size: 0x10 bytes */

void WCRGroupAvatarPickerCoordinator::presentDocumentPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  char *local_280;
  undefined *local_218;
  undefined *local_210;
  undefined *local_1e8;
  char *local_1b0;
  char *local_1a8;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined1 auStack_180 [24];
  undefined *local_168;
  undefined1 auStack_160 [12];
  undefined4 local_154;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  byte local_101;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  SEL local_e8;
  ID local_e0;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineGroup_026ce630;
  local_e8 = param_2;
  local_e0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroup_026ce630,PTR_s_avatarDirectoryPath_026bdad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_f0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_1e8 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_1e8;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_58 = &cf_png;
  local_50 = &cf_jpg;
  local_48 = &cf_jpeg;
  local_40 = &cf_heic;
  local_38 = &cf_gif;
  local_30 = &cf_webp;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  local_101 = 0;
  local_100 = puVar1;
  _memset(auStack_150,0,0x40);
  puVar1 = local_f8;
  (*(code *)PTR__objc_retain_02578638)();
  local_210 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d8,0x10);
  if (local_210 != (undefined *)0x0) {
    lVar5 = *local_140;
    local_218 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar5 != 0) {
          _objc_enumerationMutation(*local_140 - lVar5,puVar1);
        }
        puVar2 = local_100;
        uVar6 = *(undefined8 *)(local_148 + (long)local_218 * 8);
        local_110 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        if (((ulong)puVar2 & 1) != 0) {
          local_101 = 1;
          local_154 = 2;
          goto LAB_01aa1b64;
        }
        local_218 = local_218 + 1;
      } while (local_218 < local_210);
      local_210 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_d8,0x10)
      ;
      local_218 = (undefined *)0x0;
    } while (local_210 != (undefined *)0x0);
  }
  local_154 = 0;
LAB_01aa1b64:
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_101 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_4YPvU__NzzHQ>eeQVGr
              );
    local_154 = 1;
  }
  else {
    _objc_initWeak(auStack_160,local_e0);
    puVar1 = PTR_WCRGroupAvatarDirectoryPickerViewController_026cf2f8;
    _objc_alloc();
    local_1a0 = PTR___NSConcreteStackBlock_02578660;
    local_198 = 0xc2000000;
    local_194 = 0;
    local_190 = FUN_01aa1e48;
    local_188 = &DAT_02589958;
    _objc_copyWeak(auStack_180,auStack_160);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithSelection__026bdb08,&local_1a0);
    local_280 = "MMUINavigationController";
    local_168 = puVar1;
    _objc_getClass();
    if (local_280 == (char *)0x0) {
      local_280 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_1a8 = local_280;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_280,PTR_s_initWithRootViewController__0269d2a0,local_168);
    IVar4 = local_e0;
    local_1b0 = local_280;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_presenter_0269fb78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_1b0);
    _objc_storeStrong(&local_168,0);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_160);
    local_154 = 0;
  }
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

