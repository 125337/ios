// _WCRefineProfileBgPreviewResolveDayNightOfKind @ 01cf5264

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _WCRefineProfileBgPreviewResolveDayNightOfKind
               (undefined8 param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  uint local_244;
  undefined *local_208;
  undefined *local_200;
  long *local_1d0;
  long *local_1c8;
  undefined1 *local_190;
  long local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  undefined *local_118;
  undefined4 local_110;
  byte local_109;
  long *local_108;
  byte local_f9;
  long *local_f8;
  byte local_e9;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long local_c8;
  long local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1d0 = &local_c0;
  local_c0 = 0;
  _objc_storeStrong(local_1d0,param_1);
  local_e9 = 0;
  local_f9 = 0;
  local_109 = 0;
  local_d8 = param_4;
  local_d0 = param_3;
  local_c8 = param_2;
  if (param_2 == 2) {
    local_38 = &cf_html;
    local_30 = &cf_htm;
    local_1c8 = (long *)PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = local_1c8;
  }
  else {
    if (param_2 + -1 == 0) {
      FUN_01cf5aa0();
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 1;
      local_f8 = local_1d0;
    }
    else {
      FUN_01cf5b38(param_2 + -1);
      _objc_retainAutoreleasedReturnValue();
      local_109 = 1;
      local_108 = local_1d0;
    }
    local_1c8 = local_1d0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_1c8;
  if ((local_109 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_108);
  }
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  if (local_d0 != (long *)0x0) {
    *local_d0 = 0;
  }
  if (local_d8 != (long *)0x0) {
    *local_d8 = 0;
  }
  lVar8 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (lVar8 == 0) {
    local_110 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      local_110 = 1;
    }
    else {
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      _memset(auStack_180,0,0x40);
      puVar1 = local_118;
      (*(code *)PTR__objc_retain_02578638)();
      local_200 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_b8,0x10)
      ;
      if (local_200 != (undefined *)0x0) {
        lVar8 = *local_170;
        local_208 = (undefined *)0x0;
        do {
          do {
            if (*local_170 - lVar8 != 0) {
              _objc_enumerationMutation(*local_170 - lVar8,puVar1);
            }
            plVar4 = local_e0;
            uVar9 = *(ulong *)(local_178 + (long)local_208 * 8);
            local_140 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(plVar4,PTR_s_containsObject__0269cbb8);
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_release_02578630)(uVar9);
            if (((ulong)plVar4 & 1) != 0) {
              lVar5 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_140);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              local_188 = lVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_190 = puVar7;
              (*(code *)PTR__objc_release_02578630)(puVar6);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              uVar3 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_containsString__0269d0b0,&cf__dark);
              local_244 = 1;
              if ((uVar3 & 1) == 0) {
                uVar3 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_containsString__0269d0b0,&cf__night);
                local_244 = (uint)uVar3;
              }
              if ((local_244 & 1) == 0) {
                if ((local_120 == 0) ||
                   ((local_190 != (undefined1 *)0x0 &&
                    ((local_130 == 0 ||
                     (puVar6 = local_190,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_190,PTR_s_compare__0269cd10,local_130),
                     puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1))))))) {
                  _objc_storeStrong(0,&local_120,local_188);
                  _objc_storeStrong(&local_130,local_190);
                }
              }
              else if ((local_128 == 0) ||
                      ((local_190 != (undefined1 *)0x0 &&
                       ((local_138 == 0 ||
                        (puVar6 = local_190,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_190,PTR_s_compare__0269cd10,local_138),
                        puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1))))))) {
                _objc_storeStrong(0,&local_128,local_188);
                _objc_storeStrong(&local_138,local_190);
              }
              _objc_storeStrong(&local_190);
              _objc_storeStrong(&local_188,0);
            }
            local_208 = local_208 + 1;
          } while (local_208 < local_200);
          local_200 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_b8,
                     0x10);
          local_208 = (undefined *)0x0;
        } while (local_200 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      lVar8 = local_120;
      if (local_d0 != (long *)0x0) {
        _objc_retainAutorelease();
        *local_d0 = lVar8;
      }
      lVar8 = local_128;
      if (local_d8 != (long *)0x0) {
        _objc_retainAutorelease();
        *local_d8 = lVar8;
      }
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_120,0);
      local_110 = 0;
    }
    _objc_storeStrong(&local_118,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

