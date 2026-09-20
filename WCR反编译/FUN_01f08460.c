// FUN_01f08460 @ 01f08460

void FUN_01f08460(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined1 *local_268;
  undefined1 *local_260;
  undefined1 *local_1e0;
  undefined *local_1b8;
  undefined1 *local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  long local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  byte local_119;
  undefined1 *local_118;
  byte local_109;
  undefined1 *local_108;
  byte local_f9;
  undefined1 *local_f8;
  undefined1 *local_f0;
  byte local_e1;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  uint local_bc;
  undefined *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined1 *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  puVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)puVar3 & 1) == 0) ||
     (puVar2 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hasPrefix__0269d320,&cf_wcrasset_),
     puVar3 = local_b8, ((ulong)puVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_bc = 1;
    goto LAB_01f08fb0;
  }
  pcVar4 = &cf_wcrasset_;
  (*(code *)PTR__objc_msgSend_02578628)(&cf_wcrasset_,PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_substringFromIndex__0269d120,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_rangeOfString__0269d838;
  local_c8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_rangeOfString__0269d838,&cf__);
  local_d8 = puVar3;
  local_d0 = puVar2;
  if (puVar3 != (undefined1 *)0x7fffffffffffffff) {
    puVar5 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_substringToIndex__0269d6c0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_c8;
    local_c8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  puVar6 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_count_0269cfe0);
  if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar6) {
    local_1e0 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    local_e1 = (undefined1 *)((long)&MACH_HEADER.magic + 2) < local_1e0;
    local_f9 = 0;
    local_109 = 0;
    local_119 = 0;
    if ((bool)local_e1) {
      local_1e0 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 1;
      local_f8 = local_1e0;
      FUN_01f06ca8();
      _objc_retainAutoreleasedReturnValue();
      local_109 = 1;
      local_108 = local_1e0;
    }
    else {
      FUN_01f01544();
      _objc_retainAutoreleasedReturnValue();
      local_119 = 1;
      local_118 = local_1e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_1e0;
    if ((local_119 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_118);
    }
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    puVar6 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_objectAtIndexedSubscript__0269cc78,(local_e1 & 1) != 0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    FUN_01f06ca8();
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    uVar11 = 2;
    if ((local_e1 & 1) == 0) {
      uVar11 = 1;
    }
    puVar6 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_objectAtIndexedSubscript__0269cc78,uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    FUN_01f06ca8();
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
    if ((puVar6 == (undefined1 *)0x0) ||
       (puVar6 = local_130, (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
       puVar6 == (undefined1 *)0x0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf___;
      local_bc = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_f0;
      local_138 = puVar3;
      FUN_01f0f4dc();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_140 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_stringByAppendingPathComponent__026cab30,local_130);
      _objc_retainAutoreleasedReturnValue();
      local_148 = puVar6;
      if (((local_e1 & 1) == 0) &&
         (puVar5 = local_138,
         (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_fileExistsAtPath__026ca630,puVar6),
         ((ulong)puVar5 & 1) == 0)) {
        FUN_01f0f644();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_140;
        local_140 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_stringByAppendingPathComponent__026cab30,local_130);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_148;
        local_148 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      puVar6 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_fileExistsAtPath__026ca630,local_148);
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_stringByDeletingPathExtension_0269fd18);
        _objc_retainAutoreleasedReturnValue();
        local_158 = 0;
        local_150 = puVar6;
        _memset(auStack_1a0,0,0x40);
        puVar6 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_140,0);
        _objc_retainAutoreleasedReturnValue();
        local_260 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_260 != (undefined1 *)0x0) {
          lVar9 = *local_190;
          local_268 = (undefined1 *)0x0;
          do {
            do {
              if (*local_190 - lVar9 != 0) {
                _objc_enumerationMutation(*local_190 - lVar9,puVar6);
              }
              uVar10 = *(ulong *)(local_198 + (long)local_268 * 8);
              local_160 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar10,PTR_s_stringByDeletingPathExtension_0269fd18);
              _objc_retainAutoreleasedReturnValue();
              uVar8 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar10);
              if ((uVar8 & 1) != 0) {
                _objc_storeStrong(&local_158,local_160);
                local_bc = 2;
                goto LAB_01f08cc0;
              }
              local_268 = local_268 + 1;
            } while (local_268 < local_260);
            local_260 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8
                       ,0x10);
            local_268 = (undefined1 *)0x0;
          } while (local_260 != (undefined1 *)0x0);
        }
        local_bc = 0;
LAB_01f08cc0:
        (*(code *)PTR__objc_release_02578630)(puVar6);
        bVar1 = local_158 != 0;
        if (bVar1) {
          _objc_storeStrong(&local_130,local_158);
          puVar5 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_stringByAppendingPathComponent__026cab30,local_158);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_148;
          local_148 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = &cf___;
        }
        local_bc = (uint)!bVar1;
        _objc_storeStrong(&local_158);
        _objc_storeStrong(&local_150,0);
        if (local_bc == 0) goto LAB_01f08d98;
      }
      else {
LAB_01f08d98:
        puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                   local_148);
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
        if (puVar3 == (undefined *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = &cf___;
          local_bc = 1;
        }
        else {
          puVar6 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          FUN_01eddf5c();
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar3 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1a8,PTR_s_base64EncodedStringWithOptions__026a1df8,0);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1b8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_data____base64___);
          _objc_retainAutoreleasedReturnValue();
          local_bc = 1;
          local_b0 = pcVar4;
          _objc_storeStrong(&local_1b8);
          _objc_storeStrong(&local_1b0,0);
        }
        _objc_storeStrong(&local_1a8,0);
      }
      _objc_storeStrong(&local_148);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_138,0);
    }
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_f0,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_bc = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_c8,0);
LAB_01f08fb0:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

