// wcr_copyAudioTreeFrom:to:error: @ 015bc9e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

bool WCRefineVoicePackStore::wcr_copyAudioTreeFrom_to_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  long lVar9;
  ulong uVar10;
  uint local_1fc;
  undefined *local_1d0;
  undefined *local_1c8;
  ID local_180;
  ID local_178;
  byte local_169;
  ulong local_168;
  byte local_159;
  ulong local_158;
  ID local_150;
  undefined4 local_148;
  byte local_141;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  ID *local_d8;
  ID local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_d8 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_enumeratorAtPath__026ad0c8,local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = 0;
  local_e8 = puVar1;
  _memset(auStack_138,0,0x40);
  puVar1 = local_e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_1c8 != (undefined *)0x0) {
    lVar9 = *local_128;
    local_1d0 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar9 != 0) {
          _objc_enumerationMutation(*local_128 - lVar9,puVar1);
        }
        uVar10 = *(ulong *)(local_130 + (long)local_1d0 * 8);
        local_f8 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar10;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar10);
        if ((uVar2 & 1) == 0) {
          uVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_141 = 0;
          puVar4 = local_e0;
          local_140 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar3,&local_141);
          if (((ulong)puVar4 & 1) == 0) {
            local_148 = 3;
          }
          else {
            IVar5 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,local_f8);
            _objc_retainAutoreleasedReturnValue();
            IVar6 = local_b8;
            local_150 = IVar5;
            if ((local_141 & 1) == 0) {
              uVar2 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_isSupportedAudioExtension__026a9d50)
              ;
              local_159 = 0;
              local_169 = 0;
              local_1fc = 0;
              if ((IVar6 & 1) == 0) {
                uVar10 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_pathExtension_0269e090);
                _objc_retainAutoreleasedReturnValue();
                local_159 = 1;
                local_158 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_169 = 1;
                local_168 = uVar10;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_1fc = (uint)uVar10 ^ 1;
              }
              if ((local_169 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_168);
              }
              if ((local_159 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_158);
              }
              (*(code *)PTR__objc_release_02578630)(uVar2);
              puVar4 = local_e0;
              if ((local_1fc & 1) == 0) {
                IVar6 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_stringByDeletingLastPathComponen_0269fb90);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_createDirectoryAtPath_withInterm_0269e230,IVar6,1,0);
                (*(code *)PTR__objc_release_02578630)(IVar6);
                local_178 = 0;
                puVar4 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_fileExistsAtPath__026ca630,local_150);
                IVar6 = local_b8;
                if (((ulong)puVar4 & 1) != 0) {
                  IVar7 = local_150;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_stringByDeletingLastPathComponen_0269fb90);
                  _objc_retainAutoreleasedReturnValue();
                  IVar8 = local_150;
                  (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_lastPathComponent_026ca780);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar6,PTR_s_uniquePathInDirectory_preferredN_026b0d30,IVar7);
                  _objc_retainAutoreleasedReturnValue();
                  IVar5 = local_150;
                  local_150 = IVar6;
                  (*(code *)PTR__objc_release_02578630)(IVar5);
                  (*(code *)PTR__objc_release_02578630)(IVar8);
                  (*(code *)PTR__objc_release_02578630)(IVar7);
                }
                local_180 = local_178;
                puVar4 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_copyItemAtPath_toPath_error__026a1758,local_140,local_150,
                           &local_180);
                _objc_storeStrong(&local_178,local_180);
                IVar6 = local_178;
                if (((ulong)puVar4 & 1) == 0) {
                  if ((local_d8 != (ID *)0x0) && (*local_d8 == 0)) {
                    _objc_retainAutorelease();
                    *local_d8 = IVar6;
                  }
                }
                else {
                  local_f0 = local_f0 + 1;
                }
                _objc_storeStrong(&local_178,0);
                local_148 = 0;
              }
              else {
                local_148 = 3;
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_createDirectoryAtPath_withInterm_0269e230,IVar5,1,0);
              local_148 = 3;
            }
            _objc_storeStrong(&local_150,0);
          }
          _objc_storeStrong(&local_140,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_skipDescendants_026b0be8);
        }
        local_1d0 = local_1d0 + 1;
      } while (local_1d0 < local_1c8);
      local_1c8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_1d0 = (undefined *)0x0;
    } while (local_1c8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_a9 = 1;
  if (local_f0 < 1) {
    puVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_d0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a9 = puVar4 != (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  local_148 = 1;
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

