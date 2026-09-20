// FUN_01791da8 @ 01791da8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01791da8(undefined8 param_1)

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
  cfstringStruct *local_260;
  uint local_22c;
  undefined *local_1f8;
  undefined *local_1f0;
  long local_1b8;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  ulong local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined *local_108;
  bool local_f9;
  long local_f8;
  long local_f0;
  long local_e8;
  cfstringStruct *local_e0;
  undefined4 local_d4;
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
  FUN_01793794();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = &cf___;
    local_d4 = 1;
  }
  else {
    local_b0 = &DAT_028e4018;
    local_b8 = 0;
    _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_02588b80);
    if (*local_b0 != -1) {
      _dispatch_once(local_b0,local_b8);
    }
    _objc_storeStrong(&local_b8,0);
    pcVar1 = DAT_028e4010;
    pcVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
    pcVar1 = local_e0;
    if (pcVar2 == (cfstringStruct *)0x0) {
      lVar3 = 5;
      _NSSearchPathForDirectoriesInDomains(5,1,1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = lVar8;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      lVar8 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      local_f9 = false;
      if (lVar8 == 0) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Preferences);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = local_1b8;
      }
      local_f9 = lVar8 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = local_1b8;
      if ((local_f9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      lVar8 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      pcVar1 = local_d0;
      if (lVar8 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = pcVar1;
        local_d4 = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_108 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar1 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_110 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_118 = pcVar2;
        _memset(auStack_160,0,0x40);
        puVar4 = local_108;
        (*(code *)PTR__objc_retain_02578638)();
        local_1f0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                   0x10);
        if (local_1f0 != (undefined *)0x0) {
          lVar8 = *local_150;
          local_1f8 = (undefined *)0x0;
          do {
            do {
              if (*local_150 - lVar8 != 0) {
                _objc_enumerationMutation(*local_150 - lVar8,puVar4);
              }
              uVar9 = *(ulong *)(local_158 + (long)local_1f8 * 8);
              local_120 = uVar9;
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
                uVar7 = local_120;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_120,PTR_s_stringByDeletingPathExtension_0269fd18);
                _objc_retainAutoreleasedReturnValue();
                local_168 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_lowercaseString_0269d9c0);
                _objc_retainAutoreleasedReturnValue();
                local_170 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_isEqualToString__0269ccc8,local_110);
                uVar6 = local_170;
                local_22c = 1;
                if ((uVar7 & 1) == 0) {
                  pcVar1 = &cf__;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (&cf__,PTR_s_stringByAppendingString__0269d398,local_110);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_hasSuffix__0269d018);
                  local_22c = (uint)uVar6;
                  (*(code *)PTR__objc_release_02578630)(pcVar1);
                }
                if ((local_22c & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_118,PTR_s_addObject__0269d180,local_168);
                }
                _objc_storeStrong(&local_170);
                _objc_storeStrong(&local_168,0);
              }
              local_1f8 = local_1f8 + 1;
            } while (local_1f8 < local_1f0);
            local_1f0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8
                       ,0x10);
            local_1f8 = (undefined *)0x0;
          } while (local_1f0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        pcVar2 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
        pcVar1 = local_d0;
        if (pcVar2 == (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = pcVar1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_sortUsingComparator__0269d168,
                     &PTR___NSConcreteGlobalBlock_02588ba0);
          pcVar1 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          local_260 = pcVar1;
          if (pcVar1 == (cfstringStruct *)0x0) {
            local_260 = local_d0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = local_260;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
        local_d4 = 1;
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_110,0);
        _objc_storeStrong(&local_108,0);
      }
      _objc_storeStrong(&local_f0);
      _objc_storeStrong(&local_e8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = pcVar1;
      local_d4 = 1;
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_c0);
  return;
}

