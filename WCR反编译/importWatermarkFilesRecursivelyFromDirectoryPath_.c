// importWatermarkFilesRecursivelyFromDirectoryPath: @ 01faf998

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

long_long WCRefineWatermarkLibraryViewController::importWatermarkFilesRecursivelyFromDirectoryPath_
                    (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_170;
  undefined *local_168;
  byte local_139;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  long_long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  long_long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar6 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if ((uVar6 == 0) || (uVar6 = local_c8, FUN_01fafdb8(), (uVar6 & 1) != 0)) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_enumeratorAtPath__026ad0c8,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = 0;
    local_e0 = puVar1;
    _memset(auStack_130,0,0x40);
    puVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_168 != (undefined *)0x0) {
      lVar5 = *local_120;
      local_170 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,puVar1);
          }
          uVar6 = *(ulong *)(local_128 + (long)local_170 * 8);
          local_f0 = uVar6;
          FUN_01fafdb8();
          if ((uVar6 & 1) == 0) {
            uVar6 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_f0);
            _objc_retainAutoreleasedReturnValue();
            local_139 = 0;
            local_138 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar6,&local_139);
            if ((local_139 & 1) == 0) {
              uVar6 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar6;
              FUN_01faf448();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              IVar4 = local_b8;
              if ((uVar2 & 1) == 0) {
                local_cc = 3;
              }
              else {
                puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,
                           local_138);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_processSingleImageFile__026c9e10);
                (*(code *)PTR__objc_release_02578630)(puVar3);
                if ((IVar4 & 1) != 0) {
                  local_e8 = local_e8 + 1;
                }
                local_cc = 0;
              }
            }
            else {
              local_cc = 3;
            }
            _objc_storeStrong(&local_138,0);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_skipDescendants_026b0be8);
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_170 = (undefined *)0x0;
      } while (local_168 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_b0 = local_e8;
    local_cc = 1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

