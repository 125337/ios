// FUN_0108e6b0 @ 0108e6b0

long FUN_0108e6b0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1b0;
  ulong local_180;
  undefined *local_178;
  byte local_169;
  long local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  undefined *local_100;
  byte local_f2;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8;
  ulong local_e0;
  long local_d8;
  undefined4 local_cc;
  long local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar6 = local_b8;
  FUN_0108e290();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = lVar6;
  if (lVar6 == 0) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_objectForKey__0269e048,&cf_categoryName);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_c0;
    local_d8 = lVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = uVar1;
    FUN_0108b178();
    if ((uVar1 & 1) != 0) {
      _objc_storeStrong(&local_e0,0);
    }
    uVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      _objc_storeStrong(&local_e0,local_d8);
    }
    uVar2 = local_e0;
    FUN_0108688c();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_e0;
    local_e0 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_e0;
    FUN_0108b178();
    if ((uVar1 & 1) != 0) {
      _objc_storeStrong(&local_e0,&cf__eQh_S);
    }
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
    local_e8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_absolutePathFromRelative__026ae2c0,
               local_e0);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 0;
    puVar3 = local_e8;
    local_f0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_fileExistsAtPath_isDirectory__026ca638,puVar4,&local_f1);
    local_f2 = 0;
    if (((ulong)puVar3 & 1) != 0) {
      local_f2 = local_f1;
    }
    local_f2 = local_f2 & 1;
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ensurePackNamed__026ae3c8,local_e0);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    if (puVar3 == (undefined *)0x0) {
      local_b0 = 0;
      local_cc = 1;
    }
    else {
      lVar6 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_emoticons);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_e8;
      local_108 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,lVar6,0);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_1b0 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_sortedArrayUsingSelector__0269efb8,
                 PTR_s_localizedStandardCompare__0269e098);
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_1b0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_beginChangeBatch_026ae358);
      local_118 = 0;
      _memset(auStack_160,0,0x40);
      puVar3 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10)
      ;
      if (local_1d0 != (undefined *)0x0) {
        lVar6 = *local_150;
        local_1d8 = (undefined *)0x0;
        do {
          do {
            if (*local_150 - lVar6 != 0) {
              _objc_enumerationMutation(*local_150 - lVar6,puVar3);
            }
            uVar7 = *(ulong *)(local_158 + (long)local_1d8 * 8);
            local_120 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar1);
            (*(code *)PTR__objc_release_02578630)(uVar7);
            if ((uVar2 & 1) != 0) {
              lVar5 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_stringByAppendingPathComponent__026cab30,local_120);
              _objc_retainAutoreleasedReturnValue();
              local_169 = 0;
              puVar4 = local_e8;
              local_168 = lVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_fileExistsAtPath_isDirectory__026ca638,lVar5,&local_169);
              if ((((ulong)puVar4 & 1) == 0) || ((local_169 & 1) != 0)) {
                local_cc = 3;
              }
              else {
                puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSData_026ce1d0,
                           PTR_s_dataWithContentsOfFile_options_e_026a09f0,local_168,1,0);
                _objc_retainAutoreleasedReturnValue();
                local_178 = puVar4;
                FUN_0109a0a0();
                if (((ulong)puVar4 & 1) == 0) {
                  local_cc = 3;
                }
                else {
                  uVar1 = local_120;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,PTR_s_stringByDeletingPathExtension_0269fd18);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineLocalEmoticonStore_026ce440,
                             PTR_s_extensionForData__026ac368,local_178);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = uVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar1,PTR_s_stringByAppendingPathExtension__026a4580);
                  _objc_retainAutoreleasedReturnValue();
                  local_180 = uVar2;
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  (*(code *)PTR__objc_release_02578630)(uVar1);
                  puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineLocalEmoticonStore_026ce440,
                             PTR_s_importData_fileName_intoPack_err_026abfa0,local_178,local_180,
                             local_100,0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_release_02578630)();
                  if (puVar4 != (undefined *)0x0) {
                    local_118 = local_118 + 1;
                  }
                  _objc_storeStrong(&local_180,0);
                  local_cc = 0;
                }
                _objc_storeStrong(&local_178,0);
              }
              _objc_storeStrong(&local_168,0);
            }
            local_1d8 = local_1d8 + 1;
          } while (local_1d8 < local_1d0);
          local_1d0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                     0x10);
          local_1d8 = (undefined *)0x0;
        } while (local_1d0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_endChangeBatch_026ae360);
      if ((local_118 == 0) && ((local_f2 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_deleteRelativePath_error__026a3a78,
                   local_100,0);
      }
      local_b0 = local_118;
      local_cc = 1;
      _objc_storeStrong(&local_110);
      _objc_storeStrong(&local_108,0);
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

