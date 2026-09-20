// moveRelativePaths:toPack: @ 01089f34

/* Function Stack Size: 0x20 bytes */

bool WCRefineLocalEmoticonStore::moveRelativePaths_toPack_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  ulong local_1b0;
  ulong local_1a8;
  ID local_180;
  ID local_170;
  byte local_161;
  ID local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  byte local_109;
  undefined *local_108;
  byte local_f9;
  ID local_f8;
  byte local_e9;
  ID local_e8;
  ID local_e0;
  byte local_d5;
  undefined4 local_d4;
  ulong local_d0;
  ulong local_c8;
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
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if ((uVar1 == 0) ||
     (uVar1 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_a9 = 0;
    local_d4 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_ensureRootDirectoryExists__026a3c70,0);
    uVar1 = local_d0;
    FUN_01085b64();
    local_d5 = (byte)uVar1;
    local_e9 = 0;
    local_f9 = 0;
    local_180 = local_b8;
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_absolutePathFromRelative__026ae2c0,local_d0);
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 1;
      local_f8 = local_180;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_rootAbsolutePath_026ae1f8);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      local_e8 = local_180;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_180;
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar2;
    if ((local_d5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_e0,1,0);
    }
    local_109 = 0;
    _memset(auStack_158,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_1a8 != 0) {
      lVar7 = *local_148;
      local_1b0 = 0;
      do {
        do {
          if (*local_148 - lVar7 != 0) {
            _objc_enumerationMutation(*local_148 - lVar7,uVar1);
          }
          lVar8 = *(long *)(local_150 + local_1b0 * 8);
          local_118 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
          if (lVar8 != 0) {
            IVar3 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_absolutePathFromRelative__026ae2c0,local_118);
            _objc_retainAutoreleasedReturnValue();
            local_161 = 0;
            puVar2 = local_108;
            local_160 = IVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_108,PTR_s_fileExistsAtPath_isDirectory__026ca638,IVar3,&local_161);
            IVar3 = local_e0;
            if ((((ulong)puVar2 & 1) == 0) || ((local_161 & 1) != 0)) {
              local_d4 = 3;
            }
            else {
              IVar4 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar3,PTR_s_stringByAppendingPathComponent__026cab30);
              _objc_retainAutoreleasedReturnValue();
              local_170 = IVar3;
              (*(code *)PTR__objc_release_02578630)(IVar4);
              IVar3 = local_170;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_isEqualToString__0269ccc8,local_160);
              if ((IVar3 & 1) == 0) {
                puVar2 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_108,PTR_s_fileExistsAtPath__026ca630,local_170);
                IVar4 = local_b8;
                IVar3 = local_e0;
                if (((ulong)puVar2 & 1) != 0) {
                  IVar5 = local_160;
                  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_lastPathComponent_026ca780);
                  _objc_retainAutoreleasedReturnValue();
                  IVar6 = local_160;
                  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_pathExtension_0269e090);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar4,PTR_s_uniquePathInDirectory_preferredN_026ae378,IVar3,IVar5);
                  _objc_retainAutoreleasedReturnValue();
                  IVar3 = local_170;
                  local_170 = IVar4;
                  (*(code *)PTR__objc_release_02578630)(IVar3);
                  (*(code *)PTR__objc_release_02578630)(IVar6);
                  (*(code *)PTR__objc_release_02578630)(IVar5);
                }
                puVar2 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_108,PTR_s_moveItemAtPath_toPath_error__0269f940,local_160,local_170
                           ,0);
                IVar3 = local_b8;
                lVar8 = local_118;
                if (((ulong)puVar2 & 1) != 0) {
                  IVar4 = local_b8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_b8,PTR_s_relativePathFromAbsolute__026ae380,local_170);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (IVar3,PTR_s_remapIndexKey_to__026ae388,lVar8);
                  (*(code *)PTR__objc_release_02578630)(IVar4);
                  local_109 = 1;
                }
                local_d4 = 0;
              }
              else {
                local_d4 = 3;
              }
              _objc_storeStrong(&local_170,0);
            }
            _objc_storeStrong(&local_160,0);
          }
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_1b0 = 0;
      } while (local_1a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_saveIndex_026ae268);
      FUN_0107ad08();
    }
    local_a9 = local_109 & 1;
    local_d4 = 1;
    _objc_storeStrong(&local_108);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

