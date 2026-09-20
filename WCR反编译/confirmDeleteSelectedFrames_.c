// confirmDeleteSelectedFrames: @ 01d743d8

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameLibraryViewController::confirmDeleteSelectedFrames_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong local_180;
  ulong local_178;
  undefined8 local_150;
  undefined1 local_141;
  undefined8 local_140;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  long local_e8;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ID local_c8 [2];
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8[1] = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(local_c8 + 1,param_3);
  IVar1 = local_b0;
  _objc_getAssociatedObject(local_b0,&cf_pathsToDeleteForDeleteSelected);
  _objc_retainAutoreleasedReturnValue();
  local_c8[0] = IVar1;
  if ((IVar1 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0), IVar1 == 0)) {
    IVar2 = *(ID *)(local_b0 + (long)_selectedExportPaths);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_allObjects_0269d228);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_c8[0];
    local_c8[0] = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_c8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_count_0269cfe0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_showToast__026b3a18,&cf_lgSRdvWYX);
    local_cc = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 9;
    local_d8 = puVar3;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    local_e8 = 0;
    _memset(auStack_130,0,0x40);
    IVar1 = local_c8[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_178 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_178 != 0) {
      lVar6 = *local_120;
      local_180 = 0;
      do {
        do {
          if (*local_120 - lVar6 != 0) {
            _objc_enumerationMutation(*local_120 - lVar6,IVar1);
          }
          uVar4 = *(ulong *)(local_128 + local_180 * 8);
          local_f0 = uVar4;
          (*(code *)PTR__objc_retain_02578638)();
          uVar5 = local_f0;
          local_138 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_hasPrefix__0269d320,&cf__);
          if ((uVar5 & 1) == 0) {
            uVar4 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_stringByAppendingPathComponent__026cab30,local_f0);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_138;
            local_138 = uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          puVar3 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_fileExistsAtPath__026ca630,local_138)
          ;
          if (((ulong)puVar3 & 1) != 0) {
            local_140 = 0;
            local_150 = 0;
            puVar3 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_removeItemAtPath_error__0269f910,local_138,&local_150);
            _objc_storeStrong(&local_140,local_150);
            local_141 = SUB81(puVar3,0);
            if (((ulong)puVar3 & 1) != 0) {
              local_e8 = local_e8 + 1;
            }
            _objc_storeStrong(&local_140,0);
          }
          _objc_storeStrong(&local_138,0);
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_setAssociatedObject(local_b0,&cf_pathsToDeleteForDeleteSelected,0,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_b0 + (long)_selectedExportPaths),
               PTR_s_removeAllObjects_0269d508);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cancelExportSelectMode_026b6588);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_loadFrames_026b63c0);
    IVar1 = local_b0;
    if (local_e8 < 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_showToast__026b3a18,&cf_Rd1Y_);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__Rd);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_showToast__026b3a18);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(local_c8);
  _objc_storeStrong(local_c8 + 1,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

