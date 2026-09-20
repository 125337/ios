// FUN_010ec134 @ 010ec134

void FUN_010ec134(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *local_188;
  undefined *local_180;
  undefined *local_158;
  undefined8 local_140;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  byte local_d9;
  undefined *local_d8;
  long local_d0;
  undefined4 local_c4;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = param_1;
  local_b8 = param_1;
  local_b0 = param_1;
  FUN_010d6dfc();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      lVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_d0 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_d9 = 0;
      local_d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_d0,&local_d9);
      if ((((ulong)puVar2 & 1) == 0) || ((local_d9 & 1) == 0)) {
        local_c4 = 1;
      }
      else {
        puVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_d0,0);
        _objc_retainAutoreleasedReturnValue();
        local_158 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_158 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = local_158;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
        if (puVar2 == (undefined *)0x0) {
          local_c4 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_createDirectoryAtPath_withInterm_0269e230,
                     *(undefined8 *)(param_1 + 0x20),1,0);
          _memset(auStack_130,0,0x40);
          puVar2 = local_e8;
          (*(code *)PTR__objc_retain_02578638)();
          local_180 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          if (local_180 != (undefined *)0x0) {
            lVar1 = *local_120;
            local_188 = (undefined *)0x0;
            do {
              do {
                if (*local_120 - lVar1 != 0) {
                  _objc_enumerationMutation(*local_120 - lVar1,puVar2);
                }
                uVar6 = *(ulong *)(local_128 + (long)local_188 * 8);
                local_f0 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_hasPrefix__0269d320,&cf__);
                if ((uVar6 & 1) == 0) {
                  lVar3 = local_d0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,local_f0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = *(undefined8 *)(param_1 + 0x20);
                  local_138 = lVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar4,PTR_s_stringByAppendingPathComponent__026cab30,local_f0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = local_d8;
                  local_140 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d8,PTR_s_fileExistsAtPath__026ca630,uVar4);
                  if (((ulong)puVar5 & 1) == 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d8,PTR_s_moveItemAtPath_toPath_error__0269f940,local_138,
                               local_140,0);
                    local_c4 = 0;
                  }
                  else {
                    local_c4 = 3;
                  }
                  _objc_storeStrong(&local_140);
                  _objc_storeStrong(&local_138,0);
                }
                local_188 = local_188 + 1;
              } while (local_188 < local_180);
              local_180 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,
                         auStack_a8,0x10);
              local_188 = (undefined *)0x0;
            } while (local_180 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_c4 = 0;
        }
        _objc_storeStrong(&local_e8,0);
      }
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_d0,0);
      goto LAB_010ec5ac;
    }
  }
  local_c4 = 1;
LAB_010ec5ac:
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

