// FUN_0071c770 @ 0071c770

byte FUN_0071c770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_210;
  undefined *local_208;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  long local_110;
  undefined *local_108;
  undefined4 local_fc;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  bool local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c8 = 0;
  local_c0 = param_2;
  _objc_storeStrong(&local_c8,param_3);
  puVar1 = PTR_WCRefineScreenshotFrameLibraryViewController_026ce8f8;
  _objc_alloc_init();
  uVar2 = 9;
  local_d0 = puVar1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d8 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar3 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_e0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_setValue_forKey__0269d300,local_e0,&cf__framesDirectory);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar1;
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_f0,1,0);
  puVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_extracted);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_d0;
  local_f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_unzipFileAtPath_toPath__026a7798,local_c8,puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_removeItemAtPath_error__0269f910,local_f0,0);
    local_a9 = false;
    local_fc = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_findFramePairsInDirectory_pairs__026a77a0,local_f8,puVar1);
    puVar1 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_removeItemAtPath_error__0269f910,local_f0,0);
      local_a9 = false;
    }
    else {
      local_110 = 0;
      _memset(auStack_158,0,0x40);
      puVar1 = local_108;
      (*(code *)PTR__objc_retain_02578638)();
      local_208 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10)
      ;
      if (local_208 != (undefined *)0x0) {
        lVar8 = *local_148;
        local_210 = (undefined *)0x0;
        do {
          do {
            if (*local_148 - lVar8 != 0) {
              _objc_enumerationMutation(*local_148 - lVar8,puVar1);
            }
            uVar9 = *(ulong *)(local_150 + (long)local_210 * 8);
            local_118 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_png);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_118;
            local_160 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkPng);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
            local_168 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((uVar7 & 1) != 0) {
              _objc_storeStrong(&local_168,0);
            }
            uVar7 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_cfg);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_118;
            local_170 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_d0;
            local_178 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_importFrameWithPNG_darkPng_cfg_n_026a77a8,local_160,local_168,
                       local_170,uVar9);
            if (((ulong)puVar4 & 1) != 0) {
              local_110 = local_110 + 1;
            }
            _objc_storeStrong(&local_178);
            _objc_storeStrong(&local_170,0);
            _objc_storeStrong(&local_168,0);
            _objc_storeStrong(&local_160,0);
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_210 = (undefined *)0x0;
        } while (local_208 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_removeItemAtPath_error__0269f910,local_f0,0);
      local_a9 = 0 < local_110;
    }
    local_fc = 1;
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

