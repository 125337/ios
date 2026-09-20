// itemForRelative:isPack: @ 010834ac

/* Function Stack Size: 0x1c bytes */

ID WCRefineLocalEmoticonStore::itemForRelative_isPack_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  byte bVar1;
  undefined *puVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_210;
  undefined *local_208;
  undefined *local_1e0;
  ulong local_1b0;
  ulong local_178;
  undefined4 local_170;
  byte local_169;
  undefined *local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  byte local_f9;
  ulong local_f8;
  byte local_e9;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  undefined *local_d0;
  byte local_c1;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c1 = (byte)param_4;
  puVar2 = PTR_WCRefineLocalEmoticonItem_026cecc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLocalEmoticonItem_026cecc8,PTR_s_new_0269d288);
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setRelativePath__026a7440,local_c0);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_absolutePathFromRelative__026ae2c0,local_c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setAbsolutePath__026ae2c8);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setIsPack__026ae2d0,local_c1 & 1);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isPinnedRelativePath__026ae2d8,local_c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setPinned__026ae2e0,IVar3);
  IVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_remarkForRelativePath__026ae2e8,local_c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setRemark__026ae2f0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  uVar9 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d9 = 0;
  local_e9 = 0;
  local_f9 = 0;
  local_1b0 = local_c0;
  if (uVar5 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 1;
    local_f8 = local_1b0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = local_1b0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setDisplayName__026ae2f8,local_1b0);
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar9);
  if ((local_c1 & 1) == 0) {
    uVar9 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_178 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar9);
    uVar9 = local_178;
    FUN_0107bd28();
    if ((uVar9 & 1) != 0) {
      uVar9 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setMd5__026ac158);
      (*(code *)PTR__objc_release_02578630)(uVar9);
    }
    _objc_storeStrong(&local_178,0);
  }
  else {
    uVar9 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setDisplayName__026ae2f8);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_absolutePath_026ae300);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,puVar6,0);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      local_1e0 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = local_1e0;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_110 = 0;
    local_118 = 0;
    _memset(auStack_160,0,0x40);
    puVar2 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
    if (local_208 != (undefined *)0x0) {
      lVar8 = *local_150;
      local_210 = (undefined *)0x0;
      do {
        do {
          if (*local_150 - lVar8 != 0) {
            _objc_enumerationMutation(*local_150 - lVar8,puVar2);
          }
          uVar9 = *(ulong *)(local_158 + (long)local_210 * 8);
          local_120 = uVar9;
          FUN_0107d2f4();
          if ((uVar9 & 1) == 0) {
            puVar6 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_absolutePath_026ae300);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_168 = puVar7;
            (*(code *)PTR__objc_release_02578630)(puVar6);
            local_169 = 0;
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = 1;
            if (((ulong)puVar7 & 1) != 0) {
              bVar1 = local_169;
            }
            (*(code *)PTR__objc_release_02578630)(puVar6);
            if ((bVar1 & 1) == 0) {
              uVar9 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar9;
              FUN_0107b0d4();
              (*(code *)PTR__objc_release_02578630)(uVar9);
              if ((uVar4 & 1) == 0) {
                local_170 = 3;
              }
              else {
                if (local_118 == 0) {
                  _objc_storeStrong(&local_118,local_168);
                }
                local_110 = local_110 + 1;
                local_170 = 0;
              }
            }
            else {
              local_170 = 3;
            }
            _objc_storeStrong(&local_168,0);
          }
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                   0x10);
        local_210 = (undefined *)0x0;
      } while (local_208 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setChildCount__026ae308,local_110);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setCoverAbsolutePath__026ae310,local_118);
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_108,0);
  }
  puVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_170 = 1;
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

