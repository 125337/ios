// FUN_0176f7a0 @ 0176f7a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0176f7a0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint local_294;
  undefined *local_260;
  undefined *local_258;
  long local_228;
  undefined1 *local_1f8;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  cfstringStruct *local_120;
  bool local_111;
  long local_110;
  long local_108;
  long local_100;
  cfstringStruct *local_f8;
  undefined1 *local_f0;
  undefined4 local_e4;
  undefined1 *local_e0;
  uint local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_1);
  pcVar1 = local_c8;
  FUN_0176d368();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf___;
    local_d4 = 1;
    goto LAB_0177025c;
  }
  pcVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (((ulong)pcVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf___;
    local_d4 = 1;
    goto LAB_0177025c;
  }
  pcVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (((ulong)pcVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf_wcr;
    local_d4 = 1;
    goto LAB_0177025c;
  }
  pcVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_d0;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    local_e0 = (undefined1 *)((long)&pcVar2[-1].field3_0x18 + 2);
    local_e4 = 0;
    local_1f8 = local_e0;
    if ((long)local_e0 < 0) {
      local_1f8 = (undefined1 *)0x0;
    }
    local_f0 = local_1f8;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringToIndex__0269d6c0,local_1f8);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_d0;
    local_d0 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf___;
    local_d4 = 1;
    goto LAB_0177025c;
  }
  local_b0 = &DAT_028e3ff0;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_02588990);
  if (*local_b0 != -1) {
    _dispatch_once(local_b0,local_b8);
  }
  _objc_storeStrong(&local_b8,0);
  pcVar1 = DAT_028e3fe8;
  pcVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
  pcVar1 = local_f8;
  if (pcVar2 == (cfstringStruct *)0x0) {
    lVar3 = 5;
    _NSSearchPathForDirectoriesInDomains(5,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_100 = lVar8;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar8 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
    local_111 = false;
    if (lVar8 == 0) {
      local_228 = 0;
    }
    else {
      local_228 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Preferences);
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_228;
    }
    local_111 = lVar8 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = local_228;
    if ((local_111 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    lVar8 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
    if (lVar8 == 0) {
LAB_017701fc:
      pcVar1 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = pcVar1;
      local_d4 = 1;
    }
    else {
      pcVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_120 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_130 = pcVar1;
      _memset(auStack_178,0,0x40);
      puVar4 = local_128;
      (*(code *)PTR__objc_retain_02578638)();
      local_258 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10)
      ;
      if (local_258 != (undefined *)0x0) {
        lVar8 = *local_168;
        local_260 = (undefined *)0x0;
        do {
          do {
            if (*local_168 - lVar8 != 0) {
              _objc_enumerationMutation(*local_168 - lVar8,puVar4);
            }
            uVar9 = *(ulong *)(local_170 + (long)local_260 * 8);
            local_138 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar6);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            if ((uVar7 & 1) != 0) {
              uVar7 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_stringByDeletingPathExtension_0269fd18);
              _objc_retainAutoreleasedReturnValue();
              local_180 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_lowercaseString_0269d9c0);
              _objc_retainAutoreleasedReturnValue();
              local_188 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isEqualToString__0269ccc8,local_120)
              ;
              uVar6 = local_188;
              local_294 = 1;
              if ((uVar7 & 1) == 0) {
                pcVar1 = &cf__;
                (*(code *)PTR__objc_msgSend_02578628)
                          (&cf__,PTR_s_stringByAppendingString__0269d398,local_120);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_hasSuffix__0269d018);
                local_294 = (uint)uVar6;
                (*(code *)PTR__objc_release_02578630)(pcVar1);
              }
              if ((local_294 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addObject__0269d180,local_180)
                ;
              }
              _objc_storeStrong(&local_188);
              _objc_storeStrong(&local_180,0);
            }
            local_260 = local_260 + 1;
          } while (local_260 < local_258);
          local_258 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                     0x10);
          local_260 = (undefined *)0x0;
        } while (local_258 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
      if (pcVar1 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_130,PTR_s_sortUsingComparator__0269d168,
                   &PTR___NSConcreteGlobalBlock_025889b0);
        pcVar2 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = pcVar2;
      }
      local_d4 = (uint)(pcVar1 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_130);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
      if (local_d4 == 0) goto LAB_017701fc;
    }
    _objc_storeStrong(&local_108);
    _objc_storeStrong(&local_100,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = pcVar1;
    local_d4 = 1;
  }
  _objc_storeStrong(&local_f8,0);
LAB_0177025c:
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_c0);
  return;
}

