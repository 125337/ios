// _WCRefineProfileBgPreviewResolveDayNight @ 01cf5bf4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _WCRefineProfileBgPreviewResolveDayNight(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  uint local_1e4;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined1 *local_150;
  long local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c4;
  long *local_c0;
  long *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  if (param_2 != (long *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  lVar7 = local_b0;
  local_c0 = param_3;
  local_b8 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (lVar7 == 0) {
    local_c4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      local_c4 = 1;
    }
    else {
      FUN_01cf6280();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = 0;
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      local_d8 = puVar1;
      _memset(auStack_140,0,0x40);
      puVar1 = local_d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10)
      ;
      if (local_1a0 != (undefined *)0x0) {
        lVar7 = *local_130;
        local_1a8 = (undefined *)0x0;
        do {
          do {
            if (*local_130 - lVar7 != 0) {
              _objc_enumerationMutation(*local_130 - lVar7,puVar1);
            }
            puVar2 = local_d8;
            uVar8 = *(ulong *)(local_138 + (long)local_1a8 * 8);
            local_100 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_pathExtension_0269e090);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_containsObject__0269cbb8);
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_release_02578630)(uVar8);
            if (((ulong)puVar2 & 1) != 0) {
              lVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b0,PTR_s_stringByAppendingPathComponent__026cab30,local_100);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              local_148 = lVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_150 = puVar6;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              uVar3 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_containsString__0269d0b0,&cf__dark);
              local_1e4 = 1;
              if ((uVar3 & 1) == 0) {
                uVar3 = local_100;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_100,PTR_s_containsString__0269d0b0,&cf__night);
                local_1e4 = (uint)uVar3;
              }
              if ((local_1e4 & 1) == 0) {
                if ((local_e0 == 0) ||
                   ((local_150 != (undefined1 *)0x0 &&
                    ((local_f0 == 0 ||
                     (puVar5 = local_150,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_150,PTR_s_compare__0269cd10,local_f0),
                     puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1))))))) {
                  _objc_storeStrong(0,&local_e0,local_148);
                  _objc_storeStrong(&local_f0,local_150);
                }
              }
              else if ((local_e8 == 0) ||
                      ((local_150 != (undefined1 *)0x0 &&
                       ((local_f8 == 0 ||
                        (puVar5 = local_150,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_150,PTR_s_compare__0269cd10,local_f8),
                        puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1))))))) {
                _objc_storeStrong(0,&local_e8,local_148);
                _objc_storeStrong(&local_f8,local_150);
              }
              _objc_storeStrong(&local_150);
              _objc_storeStrong(&local_148,0);
            }
            local_1a8 = local_1a8 + 1;
          } while (local_1a8 < local_1a0);
          local_1a0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_1a8 = (undefined *)0x0;
        } while (local_1a0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      lVar7 = local_e0;
      if (local_b8 != (long *)0x0) {
        _objc_retainAutorelease();
        *local_b8 = lVar7;
      }
      lVar7 = local_e8;
      if (local_c0 != (long *)0x0) {
        _objc_retainAutorelease();
        *local_c0 = lVar7;
      }
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_d8,0);
      local_c4 = 0;
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

