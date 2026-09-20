// deleteSelectedFiles @ 01c77d50

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::deleteSelectedFiles(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  cfstringStruct *local_2a0;
  cfstringStruct *local_290;
  ulong local_1f8;
  ulong local_1f0;
  ID local_1a8;
  cfstringStruct *local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  ID local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined8 local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  undefined4 local_e0;
  byte local_d9;
  ID local_d8;
  byte local_c9;
  ID local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_getAssociatedObject(param_1,DAT_028c6890);
  _objc_retainAutoreleasedReturnValue();
  local_c9 = 0;
  local_d9 = 0;
  local_1a8 = param_1;
  if (param_1 == 0) {
    local_1a8 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedFiles_026c2690);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_1a8;
  }
  local_d9 = param_1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_1a8;
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOperationAlert__026c2708);
  _objc_setAssociatedObject(local_b0,DAT_028c6890,0,1);
  IVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (IVar2 == 0) {
    local_e0 = 1;
  }
  else {
    local_e8 = (cfstringStruct *)0x0;
    local_f8 = 0;
    puVar3 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_deleteMediaFileNames_error__026b0ff8,
               local_c0,&local_f8);
    _objc_storeStrong(&local_e8,local_f8);
    local_e9 = (byte)puVar3;
    _memset(auStack_140,0,0x40);
    IVar2 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_1f0 != 0) {
      lVar7 = *local_130;
      local_1f8 = 0;
      do {
        do {
          if (*local_130 - lVar7 != 0) {
            _objc_enumerationMutation(*local_130 - lVar7,IVar2);
          }
          local_100 = *(undefined8 *)(local_138 + local_1f8 * 8);
          puVar3 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_repositoryPath_026aeb48);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_148 = puVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)();
          FUN_01c74690();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          _objc_storeStrong(&local_148,0);
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10
                  );
        local_1f8 = 0;
      } while (local_1f0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pinnedFiles_026c2658);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_150 = IVar6;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
    puVar5 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_repositoryMediaFiles_026bd740);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    IVar2 = local_150;
    puVar5 = local_158;
    puVar3 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
    local_180 = PTR___NSConcreteStackBlock_02578660;
    local_178 = 0xc2000000;
    local_174 = 0;
    local_170 = FUN_01c78510;
    local_168 = &DAT_02589138;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_predicateWithBlock__026ab6e0,&local_180);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_filterUsingPredicate__026ab6e8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPinnedFiles__026c2668,local_150);
    puVar3 = PTR_WCRefineHelper_026ce000;
    bVar1 = false;
    if ((local_e9 & 1) == 0) {
      local_188 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_2a0 = local_188;
      if (local_188 == (cfstringStruct *)0x0) {
        local_2a0 = &cf_RofRd1Y_;
      }
      local_290 = local_2a0;
    }
    else {
      local_290 = &cf_ybRd_b;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78,local_290);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_188);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_leaveMultiSelect_026c2610);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadFiles_026c25e8);
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_e8,0);
    local_e0 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

