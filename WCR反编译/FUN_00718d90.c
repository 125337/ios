// FUN_00718d90 @ 00718d90

byte FUN_00718d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *local_260;
  undefined *local_258;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  ulong local_128;
  long local_120;
  undefined *local_118;
  undefined4 local_10c;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [3];
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
  local_e8[0] = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar3 = local_e8[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8[0],PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_f0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_setValue_forKey__0269d300,local_f0,&cf__framesDirectory);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar1;
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
  local_100 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_f8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_100,1,0);
  puVar1 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_stringByAppendingPathComponent__026cab30,&cf_extracted);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_d0;
  local_108 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_unzipFileAtPath_toPath__026a7798,local_c8,puVar1);
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_removeItemAtPath_error__0269f910,local_100,0);
    local_a9 = false;
    local_10c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_findFramePairsInDirectory_pairs__026a77a0,local_108,puVar1);
    puVar1 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_removeItemAtPath_error__0269f910,local_100,0);
      local_a9 = false;
    }
    else {
      local_120 = 0;
      _memset(auStack_168,0,0x40);
      puVar1 = local_118;
      (*(code *)PTR__objc_retain_02578638)();
      local_258 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,0x10)
      ;
      if (local_258 != (undefined *)0x0) {
        lVar8 = *local_158;
        local_260 = (undefined *)0x0;
        do {
          do {
            if (*local_158 - lVar8 != 0) {
              _objc_enumerationMutation(*local_158 - lVar8,puVar1);
            }
            uVar9 = *(ulong *)(local_160 + (long)local_260 * 8);
            local_128 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,PTR_s_objectForKeyedSubscript__0269d098,&cf_png);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_128;
            local_170 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_objectForKeyedSubscript__0269d098,&cf_darkPng);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
            local_178 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((uVar7 & 1) != 0) {
              _objc_storeStrong(&local_178,0);
            }
            uVar7 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_objectForKeyedSubscript__0269d098,&cf_cfg);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = local_128;
            local_180 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_128,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_d0;
            local_188 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_importFrameWithPNG_darkPng_cfg_n_026a77a8,local_170,local_178,
                       local_180,uVar9);
            if (((ulong)puVar4 & 1) != 0) {
              local_120 = local_120 + 1;
            }
            _objc_storeStrong(&local_188);
            _objc_storeStrong(&local_180,0);
            _objc_storeStrong(&local_178,0);
            _objc_storeStrong(&local_170,0);
            local_260 = local_260 + 1;
          } while (local_260 < local_258);
          local_258 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,
                     0x10);
          local_260 = (undefined *)0x0;
        } while (local_258 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f8,PTR_s_removeItemAtPath_error__0269f910,local_100,0);
      local_a9 = 0 < local_120;
    }
    local_10c = 1;
    _objc_storeStrong(&local_118,0);
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(local_e8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

